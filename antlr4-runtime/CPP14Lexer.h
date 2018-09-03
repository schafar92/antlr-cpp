
// Generated from CPP14.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  CPP14Lexer : public antlr4::Lexer {
public:
  enum {
    MultiLineMacro = 1, Directive = 2, Alignas = 3, Alignof = 4, Asm = 5, 
    Auto = 6, Bool = 7, Break = 8, Case = 9, Catch = 10, Char = 11, Char16 = 12, 
    Char32 = 13, Class = 14, Const = 15, Constexpr = 16, Const_cast = 17, 
    Continue = 18, Decltype = 19, Default = 20, Delete = 21, Do = 22, Double = 23, 
    Dynamic_cast = 24, Else = 25, Enum = 26, Explicit = 27, Export = 28, 
    Extern = 29, False = 30, Final = 31, Float = 32, For = 33, Friend = 34, 
    Goto = 35, If = 36, Inline = 37, Int = 38, Long = 39, Mutable = 40, 
    Namespace = 41, New = 42, Noexcept = 43, Nullptr = 44, Operator = 45, 
    Override = 46, Private = 47, Protected = 48, Public = 49, Register = 50, 
    Reinterpret_cast = 51, Return = 52, Short = 53, Signed = 54, Sizeof = 55, 
    Static = 56, Static_assert = 57, Static_cast = 58, Struct = 59, Switch = 60, 
    Template = 61, This = 62, Thread_local = 63, Throw = 64, True = 65, 
    Try = 66, Typedef = 67, Typeid = 68, Typename = 69, Union = 70, Unsigned = 71, 
    Using = 72, Virtual = 73, Void = 74, Volatile = 75, Wchar = 76, While = 77, 
    LeftParen = 78, RightParen = 79, LeftBracket = 80, RightBracket = 81, 
    LeftBrace = 82, RightBrace = 83, Plus = 84, Minus = 85, Star = 86, Div = 87, 
    Mod = 88, Caret = 89, And = 90, Or = 91, Tilde = 92, Not = 93, Assign = 94, 
    Less = 95, Greater = 96, PlusAssign = 97, MinusAssign = 98, StarAssign = 99, 
    DivAssign = 100, ModAssign = 101, XorAssign = 102, AndAssign = 103, 
    OrAssign = 104, LeftShift = 105, LeftShiftAssign = 106, Equal = 107, 
    NotEqual = 108, LessEqual = 109, GreaterEqual = 110, AndAnd = 111, OrOr = 112, 
    PlusPlus = 113, MinusMinus = 114, Comma = 115, ArrowStar = 116, Arrow = 117, 
    Question = 118, Colon = 119, Doublecolon = 120, Semi = 121, Dot = 122, 
    DotStar = 123, Ellipsis = 124, Identifier = 125, Integerliteral = 126, 
    Decimalliteral = 127, Octalliteral = 128, Hexadecimalliteral = 129, 
    Binaryliteral = 130, Integersuffix = 131, Characterliteral = 132, Floatingliteral = 133, 
    Stringliteral = 134, Userdefinedintegerliteral = 135, Userdefinedfloatingliteral = 136, 
    Userdefinedstringliteral = 137, Userdefinedcharacterliteral = 138, Whitespace = 139, 
    Newline = 140, BlockComment = 141, LineComment = 142
  };

  CPP14Lexer(antlr4::CharStream *input);
  ~CPP14Lexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

