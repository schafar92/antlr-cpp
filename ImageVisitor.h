#include <string>
#include <iostream>
#include "antlr4-runtime/antlr4-runtime.h"
#include "antlr4-runtime/CPP14BaseVisitor.h"
#include "antlr4-runtime/CPP14Lexer.h"
#include "antlr4-runtime/CPP14Parser.h"
#include "csv-writer/include/CSVWriter.h"
// #include "Scene.h"

class  ImageVisitor : CPP14BaseVisitor {
  antlr4::CommonTokenStream *tokens;
  CSVWriter *csv;
  string feature_type;
  string current_id_token_text = "NOTEMPTY";
  string current_formatted_code;
  bool current_hit;
  int current_line_number;

public:
  ImageVisitor (antlr4::CommonTokenStream *tokens, CSVWriter *csv, string feature_type) {
    this->tokens = tokens;
    this->csv = csv;
    this->feature_type = feature_type;
  }

  void write_row_in_csv(string iterator_name);
  void replaceAll(string & str, const string & from, const string & to);

  antlrcpp::Any visitTranslationunit(CPP14Parser::TranslationunitContext *ctx);
  antlrcpp::Any visitIdexpression(CPP14Parser::IdexpressionContext *ctx);
  // antlrcpp::Any visitTranslationunit(CPP14Parser::TranslationunitContext *ctx, antlr4::CommonTokenStream tokens);
  antlrcpp::Any visitIterationstatement(CPP14Parser::IterationstatementContext *ctx);

	// antlrcpp::Any visitAction(CPP14Parser::ActionContext *ctx);

	// antlrcpp::Any visitShape(CPP14Parser::ShapeContext *ctx);
};
