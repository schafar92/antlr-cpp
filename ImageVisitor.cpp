#include "ImageVisitor.h"
#include <typeinfo>

using namespace std;

antlrcpp::Any ImageVisitor::visitTranslationunit(CPP14Parser::TranslationunitContext *ctx) {
  return visitChildren(ctx);
}

antlrcpp::Any ImageVisitor::visitIdexpression(CPP14Parser::IdexpressionContext *ctx) {
  // int loop_iterator_type = ctx->getStart()->getType();
  // cout << loop_iterator_type << endl;
  if (this->current_id_token_text.empty()) {
    // cout << "token text is empty! " << ctx->getText() << endl;
    this->current_id_token_text = ctx->getText();
    this->write_row_in_csv(ctx->getText());
  }
  return visitChildren(ctx);
}

antlrcpp::Any ImageVisitor::visitIterationstatement(CPP14Parser::IterationstatementContext *ctx) {

  bool isForLoop = (ctx->getStart()->getText() == "for");

  if (isForLoop) {
    int possiblePragmaTokenIndex = ctx->getStart()->getTokenIndex() - 1;
    string possiblePragmaTokenText = this->tokens->get(possiblePragmaTokenIndex)->getText();
    bool hit = (isForLoop && possiblePragmaTokenText == "#pragma omp parallel for");

    int startTokenIndex = ctx->getStart()->getTokenIndex();
    int stopTokenIndex = ctx->getStop()->getTokenIndex();
    vector<antlr4::Token*> forLoopTokens = this->tokens->get(startTokenIndex, stopTokenIndex);
    int line_number = ctx->getStart()->getLine();

    // Save the source code
    // if (this->feature_type == "text") {
    string formatted_code = "";

    for (auto it = forLoopTokens.begin(); it != forLoopTokens.end(); it++) {
      formatted_code += (*it)->getText() + " ";
    }

    // }

    // Process the source code and create an optimized version
    // if (this->feature_type == "process") {
      // cout << ctx->getStart()->getLine() << endl;
    // }

    // cout << "for: " << ctx->getStart()->getText() << endl;

    // this->csv->newRow() << formatted_code << hit << line_number;
    this->current_formatted_code = formatted_code;
    this->current_hit = hit;
    this->current_line_number = line_number;

    // Unset the curent id token, so the next id token will be used
    this->current_id_token_text = "";
  }

  return visitChildren(ctx);
}

void ImageVisitor::write_row_in_csv(string iterator_name) {
  string from = " " + iterator_name + " ";
  string to = " standardized_iteration_variable_name ";
  // cout << "from: " << from << endl;
  // cout << "to: " << to << endl;
  // cout << "before replace: " << this->current_formatted_code << endl;

  this->replaceAll(this->current_formatted_code, from, to);
  // cout << "after replace: " << this->current_formatted_code << endl;
  this->csv->newRow() << this->current_formatted_code << this->current_hit << this->current_line_number;
}

// string ImageVisitor::replace_str(string & str, const string & from, const string & to) {
//   while(str.find(from) != string::npos)
//     str.replace(str.find(from), from.length(), to);
//   return str;
// }

void ImageVisitor::replaceAll(string& str, const string& from, const string& to) {
    if(from.empty())
        return;
    string wsRet;
    wsRet.reserve(str.length());
    size_t start_pos = 0, pos;
    while((pos = str.find(from, start_pos)) != string::npos) {
        wsRet += str.substr(start_pos, pos - start_pos);
        wsRet += to;
        pos += from.length();
        start_pos = pos;
    }
    wsRet += str.substr(start_pos);
    str.swap(wsRet); // faster than str = wsRet;
}