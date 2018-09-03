#include <iostream>

#include "antlr4-runtime/antlr4-runtime.h"
#include "antlr4-runtime/CPP14Lexer.h"
#include "antlr4-runtime/CPP14Parser.h"
#include "ImageVisitor.h"
#include <experimental/filesystem>
#include "csv-writer/include/CSVWriter.h"

using namespace std;
using namespace antlr4;
namespace fs = std::experimental::filesystem;

int main(int argc, const char** argv) {
  // Name the command line args
  const char* cpp_file_directory = argv[1];
  const char* output_file = argv[2];
  const char* features_type = argv[3];

  // Open stream to a csv file which will contain the results
  ofstream csvfile;
  csvfile.open(((string) "../") + output_file);

  CSVWriter csv_headers(",");
  csv_headers.newRow() << "code" << "pragma" << "line";
  csvfile << csv_headers << endl;

  // Loop through every cpp-file inside the provided directory
  fs::path path = ((string) "../") + cpp_file_directory;
  for (auto &filename: fs::directory_iterator(path)) {
    cout << "Parsing file " << filename.path().string() << "..." << endl;

    // Read and parse the file
    std::ifstream stream;
    stream.open(filename.path().string());

    ANTLRInputStream input(stream);
    CPP14Lexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    CPP14Parser parser(&tokens);

    std::stringstream buffer;
    std::streambuf * old = std::cerr.rdbuf(buffer.rdbuf());
    CPP14Parser::TranslationunitContext* tree = parser.translationunit();
    std::cerr.rdbuf(old);

    // Only process the file if there were no parsing errors
    bool no_errors = (buffer.str() == "");
    if (no_errors) {
      // Create temporary csv file for processing with python script
      ofstream csvfile_current;
      csvfile_current.open("../tmp.csv");
      csvfile_current << csv_headers << endl;

      // Parse the code
      CSVWriter csv(",");
      ImageVisitor visitor(&tokens, &csv, features_type);
      visitor.visitTranslationunit(tree);

      // Save the results
      csvfile << csv << endl;
      csvfile_current << csv << endl;

      // Close stream to tmp file
      csvfile_current.close();

      if ((string) features_type == (string) "process") {
        // Execute python script
        string command("python ../optimize_cpp_file.py ../_train.csv ../tmp.csv ");
        command.append(filename.path().string());
        command.append(" ../output/");
        command.append(filename.path().string().substr(filename.path().string().find_last_of("/") + 1));
        cout << "Executing command: " << command << endl;
        system(command.c_str());
      }
    } else {
      cout << "Skipping file due to parsing error: " << filename.path().string() << endl;
    }
  }

  csvfile.close();

  return 0;
}