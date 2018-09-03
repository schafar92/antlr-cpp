
// Generated from CPP14.g4 by ANTLR 4.7.1


#include "CPP14Visitor.h"

#include "CPP14Parser.h"


using namespace antlrcpp;
using namespace antlr4;

CPP14Parser::CPP14Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CPP14Parser::~CPP14Parser() {
  delete _interpreter;
}

std::string CPP14Parser::getGrammarFileName() const {
  return "CPP14.g4";
}

const std::vector<std::string>& CPP14Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CPP14Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- TranslationunitContext ------------------------------------------------------------------

CPP14Parser::TranslationunitContext::TranslationunitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TranslationunitContext::EOF() {
  return getToken(CPP14Parser::EOF, 0);
}

CPP14Parser::DeclarationseqContext* CPP14Parser::TranslationunitContext::declarationseq() {
  return getRuleContext<CPP14Parser::DeclarationseqContext>(0);
}


size_t CPP14Parser::TranslationunitContext::getRuleIndex() const {
  return CPP14Parser::RuleTranslationunit;
}

antlrcpp::Any CPP14Parser::TranslationunitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTranslationunit(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TranslationunitContext* CPP14Parser::translationunit() {
  TranslationunitContext *_localctx = _tracker.createInstance<TranslationunitContext>(_ctx, getState());
  enterRule(_localctx, 0, CPP14Parser::RuleTranslationunit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(399);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CPP14Parser::Alignas)
      | (1ULL << CPP14Parser::Asm)
      | (1ULL << CPP14Parser::Auto)
      | (1ULL << CPP14Parser::Bool)
      | (1ULL << CPP14Parser::Char)
      | (1ULL << CPP14Parser::Char16)
      | (1ULL << CPP14Parser::Char32)
      | (1ULL << CPP14Parser::Class)
      | (1ULL << CPP14Parser::Const)
      | (1ULL << CPP14Parser::Constexpr)
      | (1ULL << CPP14Parser::Decltype)
      | (1ULL << CPP14Parser::Double)
      | (1ULL << CPP14Parser::Enum)
      | (1ULL << CPP14Parser::Explicit)
      | (1ULL << CPP14Parser::Extern)
      | (1ULL << CPP14Parser::Float)
      | (1ULL << CPP14Parser::Friend)
      | (1ULL << CPP14Parser::Inline)
      | (1ULL << CPP14Parser::Int)
      | (1ULL << CPP14Parser::Long)
      | (1ULL << CPP14Parser::Mutable)
      | (1ULL << CPP14Parser::Namespace)
      | (1ULL << CPP14Parser::Operator)
      | (1ULL << CPP14Parser::Register)
      | (1ULL << CPP14Parser::Short)
      | (1ULL << CPP14Parser::Signed)
      | (1ULL << CPP14Parser::Static)
      | (1ULL << CPP14Parser::Static_assert)
      | (1ULL << CPP14Parser::Struct)
      | (1ULL << CPP14Parser::Template)
      | (1ULL << CPP14Parser::Thread_local))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (CPP14Parser::Typedef - 67))
      | (1ULL << (CPP14Parser::Typename - 67))
      | (1ULL << (CPP14Parser::Union - 67))
      | (1ULL << (CPP14Parser::Unsigned - 67))
      | (1ULL << (CPP14Parser::Using - 67))
      | (1ULL << (CPP14Parser::Virtual - 67))
      | (1ULL << (CPP14Parser::Void - 67))
      | (1ULL << (CPP14Parser::Volatile - 67))
      | (1ULL << (CPP14Parser::Wchar - 67))
      | (1ULL << (CPP14Parser::LeftParen - 67))
      | (1ULL << (CPP14Parser::LeftBracket - 67))
      | (1ULL << (CPP14Parser::Star - 67))
      | (1ULL << (CPP14Parser::And - 67))
      | (1ULL << (CPP14Parser::Tilde - 67))
      | (1ULL << (CPP14Parser::AndAnd - 67))
      | (1ULL << (CPP14Parser::Doublecolon - 67))
      | (1ULL << (CPP14Parser::Semi - 67))
      | (1ULL << (CPP14Parser::Ellipsis - 67))
      | (1ULL << (CPP14Parser::Identifier - 67)))) != 0)) {
      setState(398);
      declarationseq(0);
    }
    setState(401);
    match(CPP14Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryexpressionContext ------------------------------------------------------------------

CPP14Parser::PrimaryexpressionContext::PrimaryexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::LiteralContext* CPP14Parser::PrimaryexpressionContext::literal() {
  return getRuleContext<CPP14Parser::LiteralContext>(0);
}

tree::TerminalNode* CPP14Parser::PrimaryexpressionContext::This() {
  return getToken(CPP14Parser::This, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::PrimaryexpressionContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

CPP14Parser::IdexpressionContext* CPP14Parser::PrimaryexpressionContext::idexpression() {
  return getRuleContext<CPP14Parser::IdexpressionContext>(0);
}

CPP14Parser::LambdaexpressionContext* CPP14Parser::PrimaryexpressionContext::lambdaexpression() {
  return getRuleContext<CPP14Parser::LambdaexpressionContext>(0);
}


size_t CPP14Parser::PrimaryexpressionContext::getRuleIndex() const {
  return CPP14Parser::RulePrimaryexpression;
}

antlrcpp::Any CPP14Parser::PrimaryexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitPrimaryexpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::PrimaryexpressionContext* CPP14Parser::primaryexpression() {
  PrimaryexpressionContext *_localctx = _tracker.createInstance<PrimaryexpressionContext>(_ctx, getState());
  enterRule(_localctx, 2, CPP14Parser::RulePrimaryexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(411);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::False:
      case CPP14Parser::Nullptr:
      case CPP14Parser::True:
      case CPP14Parser::Integerliteral:
      case CPP14Parser::Characterliteral:
      case CPP14Parser::Floatingliteral:
      case CPP14Parser::Stringliteral:
      case CPP14Parser::Userdefinedintegerliteral:
      case CPP14Parser::Userdefinedfloatingliteral:
      case CPP14Parser::Userdefinedstringliteral:
      case CPP14Parser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 1);
        setState(403);
        literal();
        break;
      }

      case CPP14Parser::This: {
        enterOuterAlt(_localctx, 2);
        setState(404);
        match(CPP14Parser::This);
        break;
      }

      case CPP14Parser::LeftParen: {
        enterOuterAlt(_localctx, 3);
        setState(405);
        match(CPP14Parser::LeftParen);
        setState(406);
        expression(0);
        setState(407);
        match(CPP14Parser::RightParen);
        break;
      }

      case CPP14Parser::Decltype:
      case CPP14Parser::Operator:
      case CPP14Parser::Tilde:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 4);
        setState(409);
        idexpression();
        break;
      }

      case CPP14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 5);
        setState(410);
        lambdaexpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdexpressionContext ------------------------------------------------------------------

CPP14Parser::IdexpressionContext::IdexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::UnqualifiedidContext* CPP14Parser::IdexpressionContext::unqualifiedid() {
  return getRuleContext<CPP14Parser::UnqualifiedidContext>(0);
}

CPP14Parser::QualifiedidContext* CPP14Parser::IdexpressionContext::qualifiedid() {
  return getRuleContext<CPP14Parser::QualifiedidContext>(0);
}


size_t CPP14Parser::IdexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleIdexpression;
}

antlrcpp::Any CPP14Parser::IdexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitIdexpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::IdexpressionContext* CPP14Parser::idexpression() {
  IdexpressionContext *_localctx = _tracker.createInstance<IdexpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, CPP14Parser::RuleIdexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(415);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(413);
      unqualifiedid();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(414);
      qualifiedid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnqualifiedidContext ------------------------------------------------------------------

CPP14Parser::UnqualifiedidContext::UnqualifiedidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::UnqualifiedidContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::OperatorfunctionidContext* CPP14Parser::UnqualifiedidContext::operatorfunctionid() {
  return getRuleContext<CPP14Parser::OperatorfunctionidContext>(0);
}

CPP14Parser::ConversionfunctionidContext* CPP14Parser::UnqualifiedidContext::conversionfunctionid() {
  return getRuleContext<CPP14Parser::ConversionfunctionidContext>(0);
}

CPP14Parser::LiteraloperatoridContext* CPP14Parser::UnqualifiedidContext::literaloperatorid() {
  return getRuleContext<CPP14Parser::LiteraloperatoridContext>(0);
}

CPP14Parser::ClassnameContext* CPP14Parser::UnqualifiedidContext::classname() {
  return getRuleContext<CPP14Parser::ClassnameContext>(0);
}

CPP14Parser::DecltypespecifierContext* CPP14Parser::UnqualifiedidContext::decltypespecifier() {
  return getRuleContext<CPP14Parser::DecltypespecifierContext>(0);
}

CPP14Parser::TemplateidContext* CPP14Parser::UnqualifiedidContext::templateid() {
  return getRuleContext<CPP14Parser::TemplateidContext>(0);
}


size_t CPP14Parser::UnqualifiedidContext::getRuleIndex() const {
  return CPP14Parser::RuleUnqualifiedid;
}

antlrcpp::Any CPP14Parser::UnqualifiedidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitUnqualifiedid(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::UnqualifiedidContext* CPP14Parser::unqualifiedid() {
  UnqualifiedidContext *_localctx = _tracker.createInstance<UnqualifiedidContext>(_ctx, getState());
  enterRule(_localctx, 6, CPP14Parser::RuleUnqualifiedid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(426);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(417);
      match(CPP14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(418);
      operatorfunctionid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(419);
      conversionfunctionid();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(420);
      literaloperatorid();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(421);
      match(CPP14Parser::Tilde);
      setState(422);
      classname();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(423);
      match(CPP14Parser::Tilde);
      setState(424);
      decltypespecifier();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(425);
      templateid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedidContext ------------------------------------------------------------------

CPP14Parser::QualifiedidContext::QualifiedidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::QualifiedidContext::nestednamespecifier() {
  return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);
}

CPP14Parser::UnqualifiedidContext* CPP14Parser::QualifiedidContext::unqualifiedid() {
  return getRuleContext<CPP14Parser::UnqualifiedidContext>(0);
}

tree::TerminalNode* CPP14Parser::QualifiedidContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}


size_t CPP14Parser::QualifiedidContext::getRuleIndex() const {
  return CPP14Parser::RuleQualifiedid;
}

antlrcpp::Any CPP14Parser::QualifiedidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitQualifiedid(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::QualifiedidContext* CPP14Parser::qualifiedid() {
  QualifiedidContext *_localctx = _tracker.createInstance<QualifiedidContext>(_ctx, getState());
  enterRule(_localctx, 8, CPP14Parser::RuleQualifiedid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(428);
    nestednamespecifier(0);
    setState(430);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Template) {
      setState(429);
      match(CPP14Parser::Template);
    }
    setState(432);
    unqualifiedid();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NestednamespecifierContext ------------------------------------------------------------------

CPP14Parser::NestednamespecifierContext::NestednamespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ThetypenameContext* CPP14Parser::NestednamespecifierContext::thetypename() {
  return getRuleContext<CPP14Parser::ThetypenameContext>(0);
}

CPP14Parser::NamespacenameContext* CPP14Parser::NestednamespecifierContext::namespacename() {
  return getRuleContext<CPP14Parser::NamespacenameContext>(0);
}

CPP14Parser::DecltypespecifierContext* CPP14Parser::NestednamespecifierContext::decltypespecifier() {
  return getRuleContext<CPP14Parser::DecltypespecifierContext>(0);
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::NestednamespecifierContext::nestednamespecifier() {
  return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);
}

tree::TerminalNode* CPP14Parser::NestednamespecifierContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::NestednamespecifierContext::simpletemplateid() {
  return getRuleContext<CPP14Parser::SimpletemplateidContext>(0);
}

tree::TerminalNode* CPP14Parser::NestednamespecifierContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}


size_t CPP14Parser::NestednamespecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleNestednamespecifier;
}

antlrcpp::Any CPP14Parser::NestednamespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNestednamespecifier(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::NestednamespecifierContext* CPP14Parser::nestednamespecifier() {
   return nestednamespecifier(0);
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::nestednamespecifier(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::NestednamespecifierContext *_localctx = _tracker.createInstance<NestednamespecifierContext>(_ctx, parentState);
  CPP14Parser::NestednamespecifierContext *previousContext = _localctx;
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, CPP14Parser::RuleNestednamespecifier, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(445);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(435);
      match(CPP14Parser::Doublecolon);
      break;
    }

    case 2: {
      setState(436);
      thetypename();
      setState(437);
      match(CPP14Parser::Doublecolon);
      break;
    }

    case 3: {
      setState(439);
      namespacename();
      setState(440);
      match(CPP14Parser::Doublecolon);
      break;
    }

    case 4: {
      setState(442);
      decltypespecifier();
      setState(443);
      match(CPP14Parser::Doublecolon);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(459);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(457);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NestednamespecifierContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNestednamespecifier);
          setState(447);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(448);
          match(CPP14Parser::Identifier);
          setState(449);
          match(CPP14Parser::Doublecolon);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NestednamespecifierContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNestednamespecifier);
          setState(450);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(452);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CPP14Parser::Template) {
            setState(451);
            match(CPP14Parser::Template);
          }
          setState(454);
          simpletemplateid();
          setState(455);
          match(CPP14Parser::Doublecolon);
          break;
        }

        } 
      }
      setState(461);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LambdaexpressionContext ------------------------------------------------------------------

CPP14Parser::LambdaexpressionContext::LambdaexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::LambdaintroducerContext* CPP14Parser::LambdaexpressionContext::lambdaintroducer() {
  return getRuleContext<CPP14Parser::LambdaintroducerContext>(0);
}

CPP14Parser::CompoundstatementContext* CPP14Parser::LambdaexpressionContext::compoundstatement() {
  return getRuleContext<CPP14Parser::CompoundstatementContext>(0);
}

CPP14Parser::LambdadeclaratorContext* CPP14Parser::LambdaexpressionContext::lambdadeclarator() {
  return getRuleContext<CPP14Parser::LambdadeclaratorContext>(0);
}


size_t CPP14Parser::LambdaexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleLambdaexpression;
}

antlrcpp::Any CPP14Parser::LambdaexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitLambdaexpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::LambdaexpressionContext* CPP14Parser::lambdaexpression() {
  LambdaexpressionContext *_localctx = _tracker.createInstance<LambdaexpressionContext>(_ctx, getState());
  enterRule(_localctx, 12, CPP14Parser::RuleLambdaexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(462);
    lambdaintroducer();
    setState(464);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::LeftParen) {
      setState(463);
      lambdadeclarator();
    }
    setState(466);
    compoundstatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaintroducerContext ------------------------------------------------------------------

CPP14Parser::LambdaintroducerContext::LambdaintroducerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::LambdacaptureContext* CPP14Parser::LambdaintroducerContext::lambdacapture() {
  return getRuleContext<CPP14Parser::LambdacaptureContext>(0);
}


size_t CPP14Parser::LambdaintroducerContext::getRuleIndex() const {
  return CPP14Parser::RuleLambdaintroducer;
}

antlrcpp::Any CPP14Parser::LambdaintroducerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitLambdaintroducer(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::LambdaintroducerContext* CPP14Parser::lambdaintroducer() {
  LambdaintroducerContext *_localctx = _tracker.createInstance<LambdaintroducerContext>(_ctx, getState());
  enterRule(_localctx, 14, CPP14Parser::RuleLambdaintroducer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(468);
    match(CPP14Parser::LeftBracket);
    setState(470);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 62) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 62)) & ((1ULL << (CPP14Parser::This - 62))
      | (1ULL << (CPP14Parser::And - 62))
      | (1ULL << (CPP14Parser::Assign - 62))
      | (1ULL << (CPP14Parser::Identifier - 62)))) != 0)) {
      setState(469);
      lambdacapture();
    }
    setState(472);
    match(CPP14Parser::RightBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdacaptureContext ------------------------------------------------------------------

CPP14Parser::LambdacaptureContext::LambdacaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::CapturedefaultContext* CPP14Parser::LambdacaptureContext::capturedefault() {
  return getRuleContext<CPP14Parser::CapturedefaultContext>(0);
}

CPP14Parser::CapturelistContext* CPP14Parser::LambdacaptureContext::capturelist() {
  return getRuleContext<CPP14Parser::CapturelistContext>(0);
}


size_t CPP14Parser::LambdacaptureContext::getRuleIndex() const {
  return CPP14Parser::RuleLambdacapture;
}

antlrcpp::Any CPP14Parser::LambdacaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitLambdacapture(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::LambdacaptureContext* CPP14Parser::lambdacapture() {
  LambdacaptureContext *_localctx = _tracker.createInstance<LambdacaptureContext>(_ctx, getState());
  enterRule(_localctx, 16, CPP14Parser::RuleLambdacapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(480);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(474);
      capturedefault();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(475);
      capturelist(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(476);
      capturedefault();
      setState(477);
      match(CPP14Parser::Comma);
      setState(478);
      capturelist(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CapturedefaultContext ------------------------------------------------------------------

CPP14Parser::CapturedefaultContext::CapturedefaultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CPP14Parser::CapturedefaultContext::getRuleIndex() const {
  return CPP14Parser::RuleCapturedefault;
}

antlrcpp::Any CPP14Parser::CapturedefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitCapturedefault(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::CapturedefaultContext* CPP14Parser::capturedefault() {
  CapturedefaultContext *_localctx = _tracker.createInstance<CapturedefaultContext>(_ctx, getState());
  enterRule(_localctx, 18, CPP14Parser::RuleCapturedefault);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(482);
    _la = _input->LA(1);
    if (!(_la == CPP14Parser::And

    || _la == CPP14Parser::Assign)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CapturelistContext ------------------------------------------------------------------

CPP14Parser::CapturelistContext::CapturelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::CaptureContext* CPP14Parser::CapturelistContext::capture() {
  return getRuleContext<CPP14Parser::CaptureContext>(0);
}

CPP14Parser::CapturelistContext* CPP14Parser::CapturelistContext::capturelist() {
  return getRuleContext<CPP14Parser::CapturelistContext>(0);
}


size_t CPP14Parser::CapturelistContext::getRuleIndex() const {
  return CPP14Parser::RuleCapturelist;
}

antlrcpp::Any CPP14Parser::CapturelistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitCapturelist(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::CapturelistContext* CPP14Parser::capturelist() {
   return capturelist(0);
}

CPP14Parser::CapturelistContext* CPP14Parser::capturelist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::CapturelistContext *_localctx = _tracker.createInstance<CapturelistContext>(_ctx, parentState);
  CPP14Parser::CapturelistContext *previousContext = _localctx;
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, CPP14Parser::RuleCapturelist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(485);
    capture();
    setState(487);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(486);
      match(CPP14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(497);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<CapturelistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleCapturelist);
        setState(489);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(490);
        match(CPP14Parser::Comma);
        setState(491);
        capture();
        setState(493);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          setState(492);
          match(CPP14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(499);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CaptureContext ------------------------------------------------------------------

CPP14Parser::CaptureContext::CaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::SimplecaptureContext* CPP14Parser::CaptureContext::simplecapture() {
  return getRuleContext<CPP14Parser::SimplecaptureContext>(0);
}

CPP14Parser::InitcaptureContext* CPP14Parser::CaptureContext::initcapture() {
  return getRuleContext<CPP14Parser::InitcaptureContext>(0);
}


size_t CPP14Parser::CaptureContext::getRuleIndex() const {
  return CPP14Parser::RuleCapture;
}

antlrcpp::Any CPP14Parser::CaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitCapture(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::CaptureContext* CPP14Parser::capture() {
  CaptureContext *_localctx = _tracker.createInstance<CaptureContext>(_ctx, getState());
  enterRule(_localctx, 22, CPP14Parser::RuleCapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(502);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(500);
      simplecapture();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(501);
      initcapture();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimplecaptureContext ------------------------------------------------------------------

CPP14Parser::SimplecaptureContext::SimplecaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::SimplecaptureContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::SimplecaptureContext::This() {
  return getToken(CPP14Parser::This, 0);
}


size_t CPP14Parser::SimplecaptureContext::getRuleIndex() const {
  return CPP14Parser::RuleSimplecapture;
}

antlrcpp::Any CPP14Parser::SimplecaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitSimplecapture(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::SimplecaptureContext* CPP14Parser::simplecapture() {
  SimplecaptureContext *_localctx = _tracker.createInstance<SimplecaptureContext>(_ctx, getState());
  enterRule(_localctx, 24, CPP14Parser::RuleSimplecapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(508);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(504);
        match(CPP14Parser::Identifier);
        break;
      }

      case CPP14Parser::And: {
        enterOuterAlt(_localctx, 2);
        setState(505);
        match(CPP14Parser::And);
        setState(506);
        match(CPP14Parser::Identifier);
        break;
      }

      case CPP14Parser::This: {
        enterOuterAlt(_localctx, 3);
        setState(507);
        match(CPP14Parser::This);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitcaptureContext ------------------------------------------------------------------

CPP14Parser::InitcaptureContext::InitcaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::InitcaptureContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::InitializerContext* CPP14Parser::InitcaptureContext::initializer() {
  return getRuleContext<CPP14Parser::InitializerContext>(0);
}


size_t CPP14Parser::InitcaptureContext::getRuleIndex() const {
  return CPP14Parser::RuleInitcapture;
}

antlrcpp::Any CPP14Parser::InitcaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitInitcapture(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::InitcaptureContext* CPP14Parser::initcapture() {
  InitcaptureContext *_localctx = _tracker.createInstance<InitcaptureContext>(_ctx, getState());
  enterRule(_localctx, 26, CPP14Parser::RuleInitcapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(515);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(510);
        match(CPP14Parser::Identifier);
        setState(511);
        initializer();
        break;
      }

      case CPP14Parser::And: {
        enterOuterAlt(_localctx, 2);
        setState(512);
        match(CPP14Parser::And);
        setState(513);
        match(CPP14Parser::Identifier);
        setState(514);
        initializer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdadeclaratorContext ------------------------------------------------------------------

CPP14Parser::LambdadeclaratorContext::LambdadeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ParameterdeclarationclauseContext* CPP14Parser::LambdadeclaratorContext::parameterdeclarationclause() {
  return getRuleContext<CPP14Parser::ParameterdeclarationclauseContext>(0);
}

tree::TerminalNode* CPP14Parser::LambdadeclaratorContext::Mutable() {
  return getToken(CPP14Parser::Mutable, 0);
}

CPP14Parser::ExceptionspecificationContext* CPP14Parser::LambdadeclaratorContext::exceptionspecification() {
  return getRuleContext<CPP14Parser::ExceptionspecificationContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::LambdadeclaratorContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::TrailingreturntypeContext* CPP14Parser::LambdadeclaratorContext::trailingreturntype() {
  return getRuleContext<CPP14Parser::TrailingreturntypeContext>(0);
}


size_t CPP14Parser::LambdadeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleLambdadeclarator;
}

antlrcpp::Any CPP14Parser::LambdadeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitLambdadeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::LambdadeclaratorContext* CPP14Parser::lambdadeclarator() {
  LambdadeclaratorContext *_localctx = _tracker.createInstance<LambdadeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 28, CPP14Parser::RuleLambdadeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(517);
    match(CPP14Parser::LeftParen);
    setState(518);
    parameterdeclarationclause();
    setState(519);
    match(CPP14Parser::RightParen);
    setState(521);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Mutable) {
      setState(520);
      match(CPP14Parser::Mutable);
    }
    setState(524);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Noexcept

    || _la == CPP14Parser::Throw) {
      setState(523);
      exceptionspecification();
    }
    setState(527);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
      setState(526);
      attributespecifierseq(0);
    }
    setState(530);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Arrow) {
      setState(529);
      trailingreturntype();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixexpressionContext ------------------------------------------------------------------

CPP14Parser::PostfixexpressionContext::PostfixexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::PrimaryexpressionContext* CPP14Parser::PostfixexpressionContext::primaryexpression() {
  return getRuleContext<CPP14Parser::PrimaryexpressionContext>(0);
}

CPP14Parser::SimpletypespecifierContext* CPP14Parser::PostfixexpressionContext::simpletypespecifier() {
  return getRuleContext<CPP14Parser::SimpletypespecifierContext>(0);
}

CPP14Parser::ExpressionlistContext* CPP14Parser::PostfixexpressionContext::expressionlist() {
  return getRuleContext<CPP14Parser::ExpressionlistContext>(0);
}

CPP14Parser::TypenamespecifierContext* CPP14Parser::PostfixexpressionContext::typenamespecifier() {
  return getRuleContext<CPP14Parser::TypenamespecifierContext>(0);
}

CPP14Parser::BracedinitlistContext* CPP14Parser::PostfixexpressionContext::bracedinitlist() {
  return getRuleContext<CPP14Parser::BracedinitlistContext>(0);
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::Dynamic_cast() {
  return getToken(CPP14Parser::Dynamic_cast, 0);
}

CPP14Parser::ThetypeidContext* CPP14Parser::PostfixexpressionContext::thetypeid() {
  return getRuleContext<CPP14Parser::ThetypeidContext>(0);
}

CPP14Parser::ExpressionContext* CPP14Parser::PostfixexpressionContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::Static_cast() {
  return getToken(CPP14Parser::Static_cast, 0);
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::Reinterpret_cast() {
  return getToken(CPP14Parser::Reinterpret_cast, 0);
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::Const_cast() {
  return getToken(CPP14Parser::Const_cast, 0);
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::Typeid() {
  return getToken(CPP14Parser::Typeid, 0);
}

CPP14Parser::PostfixexpressionContext* CPP14Parser::PostfixexpressionContext::postfixexpression() {
  return getRuleContext<CPP14Parser::PostfixexpressionContext>(0);
}

CPP14Parser::IdexpressionContext* CPP14Parser::PostfixexpressionContext::idexpression() {
  return getRuleContext<CPP14Parser::IdexpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}

CPP14Parser::PseudodestructornameContext* CPP14Parser::PostfixexpressionContext::pseudodestructorname() {
  return getRuleContext<CPP14Parser::PseudodestructornameContext>(0);
}


size_t CPP14Parser::PostfixexpressionContext::getRuleIndex() const {
  return CPP14Parser::RulePostfixexpression;
}

antlrcpp::Any CPP14Parser::PostfixexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitPostfixexpression(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::PostfixexpressionContext* CPP14Parser::postfixexpression() {
   return postfixexpression(0);
}

CPP14Parser::PostfixexpressionContext* CPP14Parser::postfixexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::PostfixexpressionContext *_localctx = _tracker.createInstance<PostfixexpressionContext>(_ctx, parentState);
  CPP14Parser::PostfixexpressionContext *previousContext = _localctx;
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, CPP14Parser::RulePostfixexpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(596);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(533);
      primaryexpression();
      break;
    }

    case 2: {
      setState(534);
      simpletypespecifier();
      setState(535);
      match(CPP14Parser::LeftParen);
      setState(537);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CPP14Parser::Alignof)
        | (1ULL << CPP14Parser::Auto)
        | (1ULL << CPP14Parser::Bool)
        | (1ULL << CPP14Parser::Char)
        | (1ULL << CPP14Parser::Char16)
        | (1ULL << CPP14Parser::Char32)
        | (1ULL << CPP14Parser::Const_cast)
        | (1ULL << CPP14Parser::Decltype)
        | (1ULL << CPP14Parser::Delete)
        | (1ULL << CPP14Parser::Double)
        | (1ULL << CPP14Parser::Dynamic_cast)
        | (1ULL << CPP14Parser::False)
        | (1ULL << CPP14Parser::Float)
        | (1ULL << CPP14Parser::Int)
        | (1ULL << CPP14Parser::Long)
        | (1ULL << CPP14Parser::New)
        | (1ULL << CPP14Parser::Noexcept)
        | (1ULL << CPP14Parser::Nullptr)
        | (1ULL << CPP14Parser::Operator)
        | (1ULL << CPP14Parser::Reinterpret_cast)
        | (1ULL << CPP14Parser::Short)
        | (1ULL << CPP14Parser::Signed)
        | (1ULL << CPP14Parser::Sizeof)
        | (1ULL << CPP14Parser::Static_cast)
        | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Throw - 64))
        | (1ULL << (CPP14Parser::True - 64))
        | (1ULL << (CPP14Parser::Typeid - 64))
        | (1ULL << (CPP14Parser::Typename - 64))
        | (1ULL << (CPP14Parser::Unsigned - 64))
        | (1ULL << (CPP14Parser::Void - 64))
        | (1ULL << (CPP14Parser::Wchar - 64))
        | (1ULL << (CPP14Parser::LeftParen - 64))
        | (1ULL << (CPP14Parser::LeftBracket - 64))
        | (1ULL << (CPP14Parser::LeftBrace - 64))
        | (1ULL << (CPP14Parser::Plus - 64))
        | (1ULL << (CPP14Parser::Minus - 64))
        | (1ULL << (CPP14Parser::Star - 64))
        | (1ULL << (CPP14Parser::And - 64))
        | (1ULL << (CPP14Parser::Or - 64))
        | (1ULL << (CPP14Parser::Tilde - 64))
        | (1ULL << (CPP14Parser::Not - 64))
        | (1ULL << (CPP14Parser::PlusPlus - 64))
        | (1ULL << (CPP14Parser::MinusMinus - 64))
        | (1ULL << (CPP14Parser::Doublecolon - 64))
        | (1ULL << (CPP14Parser::Identifier - 64))
        | (1ULL << (CPP14Parser::Integerliteral - 64)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 132)) & ((1ULL << (CPP14Parser::Characterliteral - 132))
        | (1ULL << (CPP14Parser::Floatingliteral - 132))
        | (1ULL << (CPP14Parser::Stringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedintegerliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedstringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 132)))) != 0)) {
        setState(536);
        expressionlist();
      }
      setState(539);
      match(CPP14Parser::RightParen);
      break;
    }

    case 3: {
      setState(541);
      typenamespecifier();
      setState(542);
      match(CPP14Parser::LeftParen);
      setState(544);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CPP14Parser::Alignof)
        | (1ULL << CPP14Parser::Auto)
        | (1ULL << CPP14Parser::Bool)
        | (1ULL << CPP14Parser::Char)
        | (1ULL << CPP14Parser::Char16)
        | (1ULL << CPP14Parser::Char32)
        | (1ULL << CPP14Parser::Const_cast)
        | (1ULL << CPP14Parser::Decltype)
        | (1ULL << CPP14Parser::Delete)
        | (1ULL << CPP14Parser::Double)
        | (1ULL << CPP14Parser::Dynamic_cast)
        | (1ULL << CPP14Parser::False)
        | (1ULL << CPP14Parser::Float)
        | (1ULL << CPP14Parser::Int)
        | (1ULL << CPP14Parser::Long)
        | (1ULL << CPP14Parser::New)
        | (1ULL << CPP14Parser::Noexcept)
        | (1ULL << CPP14Parser::Nullptr)
        | (1ULL << CPP14Parser::Operator)
        | (1ULL << CPP14Parser::Reinterpret_cast)
        | (1ULL << CPP14Parser::Short)
        | (1ULL << CPP14Parser::Signed)
        | (1ULL << CPP14Parser::Sizeof)
        | (1ULL << CPP14Parser::Static_cast)
        | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Throw - 64))
        | (1ULL << (CPP14Parser::True - 64))
        | (1ULL << (CPP14Parser::Typeid - 64))
        | (1ULL << (CPP14Parser::Typename - 64))
        | (1ULL << (CPP14Parser::Unsigned - 64))
        | (1ULL << (CPP14Parser::Void - 64))
        | (1ULL << (CPP14Parser::Wchar - 64))
        | (1ULL << (CPP14Parser::LeftParen - 64))
        | (1ULL << (CPP14Parser::LeftBracket - 64))
        | (1ULL << (CPP14Parser::LeftBrace - 64))
        | (1ULL << (CPP14Parser::Plus - 64))
        | (1ULL << (CPP14Parser::Minus - 64))
        | (1ULL << (CPP14Parser::Star - 64))
        | (1ULL << (CPP14Parser::And - 64))
        | (1ULL << (CPP14Parser::Or - 64))
        | (1ULL << (CPP14Parser::Tilde - 64))
        | (1ULL << (CPP14Parser::Not - 64))
        | (1ULL << (CPP14Parser::PlusPlus - 64))
        | (1ULL << (CPP14Parser::MinusMinus - 64))
        | (1ULL << (CPP14Parser::Doublecolon - 64))
        | (1ULL << (CPP14Parser::Identifier - 64))
        | (1ULL << (CPP14Parser::Integerliteral - 64)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 132)) & ((1ULL << (CPP14Parser::Characterliteral - 132))
        | (1ULL << (CPP14Parser::Floatingliteral - 132))
        | (1ULL << (CPP14Parser::Stringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedintegerliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedstringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 132)))) != 0)) {
        setState(543);
        expressionlist();
      }
      setState(546);
      match(CPP14Parser::RightParen);
      break;
    }

    case 4: {
      setState(548);
      simpletypespecifier();
      setState(549);
      bracedinitlist();
      break;
    }

    case 5: {
      setState(551);
      typenamespecifier();
      setState(552);
      bracedinitlist();
      break;
    }

    case 6: {
      setState(554);
      match(CPP14Parser::Dynamic_cast);
      setState(555);
      match(CPP14Parser::Less);
      setState(556);
      thetypeid();
      setState(557);
      match(CPP14Parser::Greater);
      setState(558);
      match(CPP14Parser::LeftParen);
      setState(559);
      expression(0);
      setState(560);
      match(CPP14Parser::RightParen);
      break;
    }

    case 7: {
      setState(562);
      match(CPP14Parser::Static_cast);
      setState(563);
      match(CPP14Parser::Less);
      setState(564);
      thetypeid();
      setState(565);
      match(CPP14Parser::Greater);
      setState(566);
      match(CPP14Parser::LeftParen);
      setState(567);
      expression(0);
      setState(568);
      match(CPP14Parser::RightParen);
      break;
    }

    case 8: {
      setState(570);
      match(CPP14Parser::Reinterpret_cast);
      setState(571);
      match(CPP14Parser::Less);
      setState(572);
      thetypeid();
      setState(573);
      match(CPP14Parser::Greater);
      setState(574);
      match(CPP14Parser::LeftParen);
      setState(575);
      expression(0);
      setState(576);
      match(CPP14Parser::RightParen);
      break;
    }

    case 9: {
      setState(578);
      match(CPP14Parser::Const_cast);
      setState(579);
      match(CPP14Parser::Less);
      setState(580);
      thetypeid();
      setState(581);
      match(CPP14Parser::Greater);
      setState(582);
      match(CPP14Parser::LeftParen);
      setState(583);
      expression(0);
      setState(584);
      match(CPP14Parser::RightParen);
      break;
    }

    case 10: {
      setState(586);
      match(CPP14Parser::Typeid);
      setState(587);
      match(CPP14Parser::LeftParen);
      setState(588);
      expression(0);
      setState(589);
      match(CPP14Parser::RightParen);
      break;
    }

    case 11: {
      setState(591);
      match(CPP14Parser::Typeid);
      setState(592);
      match(CPP14Parser::LeftParen);
      setState(593);
      thetypeid();
      setState(594);
      match(CPP14Parser::RightParen);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(638);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(636);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(598);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(599);
          match(CPP14Parser::LeftBracket);
          setState(600);
          expression(0);
          setState(601);
          match(CPP14Parser::RightBracket);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(603);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(604);
          match(CPP14Parser::LeftBracket);
          setState(605);
          bracedinitlist();
          setState(606);
          match(CPP14Parser::RightBracket);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(608);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(609);
          match(CPP14Parser::LeftParen);
          setState(611);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CPP14Parser::Alignof)
            | (1ULL << CPP14Parser::Auto)
            | (1ULL << CPP14Parser::Bool)
            | (1ULL << CPP14Parser::Char)
            | (1ULL << CPP14Parser::Char16)
            | (1ULL << CPP14Parser::Char32)
            | (1ULL << CPP14Parser::Const_cast)
            | (1ULL << CPP14Parser::Decltype)
            | (1ULL << CPP14Parser::Delete)
            | (1ULL << CPP14Parser::Double)
            | (1ULL << CPP14Parser::Dynamic_cast)
            | (1ULL << CPP14Parser::False)
            | (1ULL << CPP14Parser::Float)
            | (1ULL << CPP14Parser::Int)
            | (1ULL << CPP14Parser::Long)
            | (1ULL << CPP14Parser::New)
            | (1ULL << CPP14Parser::Noexcept)
            | (1ULL << CPP14Parser::Nullptr)
            | (1ULL << CPP14Parser::Operator)
            | (1ULL << CPP14Parser::Reinterpret_cast)
            | (1ULL << CPP14Parser::Short)
            | (1ULL << CPP14Parser::Signed)
            | (1ULL << CPP14Parser::Sizeof)
            | (1ULL << CPP14Parser::Static_cast)
            | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Throw - 64))
            | (1ULL << (CPP14Parser::True - 64))
            | (1ULL << (CPP14Parser::Typeid - 64))
            | (1ULL << (CPP14Parser::Typename - 64))
            | (1ULL << (CPP14Parser::Unsigned - 64))
            | (1ULL << (CPP14Parser::Void - 64))
            | (1ULL << (CPP14Parser::Wchar - 64))
            | (1ULL << (CPP14Parser::LeftParen - 64))
            | (1ULL << (CPP14Parser::LeftBracket - 64))
            | (1ULL << (CPP14Parser::LeftBrace - 64))
            | (1ULL << (CPP14Parser::Plus - 64))
            | (1ULL << (CPP14Parser::Minus - 64))
            | (1ULL << (CPP14Parser::Star - 64))
            | (1ULL << (CPP14Parser::And - 64))
            | (1ULL << (CPP14Parser::Or - 64))
            | (1ULL << (CPP14Parser::Tilde - 64))
            | (1ULL << (CPP14Parser::Not - 64))
            | (1ULL << (CPP14Parser::PlusPlus - 64))
            | (1ULL << (CPP14Parser::MinusMinus - 64))
            | (1ULL << (CPP14Parser::Doublecolon - 64))
            | (1ULL << (CPP14Parser::Identifier - 64))
            | (1ULL << (CPP14Parser::Integerliteral - 64)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 132)) & ((1ULL << (CPP14Parser::Characterliteral - 132))
            | (1ULL << (CPP14Parser::Floatingliteral - 132))
            | (1ULL << (CPP14Parser::Stringliteral - 132))
            | (1ULL << (CPP14Parser::Userdefinedintegerliteral - 132))
            | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 132))
            | (1ULL << (CPP14Parser::Userdefinedstringliteral - 132))
            | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 132)))) != 0)) {
            setState(610);
            expressionlist();
          }
          setState(613);
          match(CPP14Parser::RightParen);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(614);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(615);
          match(CPP14Parser::Dot);
          setState(617);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CPP14Parser::Template) {
            setState(616);
            match(CPP14Parser::Template);
          }
          setState(619);
          idexpression();
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(620);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(621);
          match(CPP14Parser::Arrow);
          setState(623);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CPP14Parser::Template) {
            setState(622);
            match(CPP14Parser::Template);
          }
          setState(625);
          idexpression();
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(626);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(627);
          match(CPP14Parser::Dot);
          setState(628);
          pseudodestructorname();
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(629);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(630);
          match(CPP14Parser::Arrow);
          setState(631);
          pseudodestructorname();
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(632);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(633);
          match(CPP14Parser::PlusPlus);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(634);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(635);
          match(CPP14Parser::MinusMinus);
          break;
        }

        } 
      }
      setState(640);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpressionlistContext ------------------------------------------------------------------

CPP14Parser::ExpressionlistContext::ExpressionlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::InitializerlistContext* CPP14Parser::ExpressionlistContext::initializerlist() {
  return getRuleContext<CPP14Parser::InitializerlistContext>(0);
}


size_t CPP14Parser::ExpressionlistContext::getRuleIndex() const {
  return CPP14Parser::RuleExpressionlist;
}

antlrcpp::Any CPP14Parser::ExpressionlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitExpressionlist(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ExpressionlistContext* CPP14Parser::expressionlist() {
  ExpressionlistContext *_localctx = _tracker.createInstance<ExpressionlistContext>(_ctx, getState());
  enterRule(_localctx, 32, CPP14Parser::RuleExpressionlist);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(641);
    initializerlist(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PseudodestructornameContext ------------------------------------------------------------------

CPP14Parser::PseudodestructornameContext::PseudodestructornameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::ThetypenameContext *> CPP14Parser::PseudodestructornameContext::thetypename() {
  return getRuleContexts<CPP14Parser::ThetypenameContext>();
}

CPP14Parser::ThetypenameContext* CPP14Parser::PseudodestructornameContext::thetypename(size_t i) {
  return getRuleContext<CPP14Parser::ThetypenameContext>(i);
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::PseudodestructornameContext::nestednamespecifier() {
  return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);
}

tree::TerminalNode* CPP14Parser::PseudodestructornameContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::PseudodestructornameContext::simpletemplateid() {
  return getRuleContext<CPP14Parser::SimpletemplateidContext>(0);
}

CPP14Parser::DecltypespecifierContext* CPP14Parser::PseudodestructornameContext::decltypespecifier() {
  return getRuleContext<CPP14Parser::DecltypespecifierContext>(0);
}


size_t CPP14Parser::PseudodestructornameContext::getRuleIndex() const {
  return CPP14Parser::RulePseudodestructorname;
}

antlrcpp::Any CPP14Parser::PseudodestructornameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitPseudodestructorname(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::PseudodestructornameContext* CPP14Parser::pseudodestructorname() {
  PseudodestructornameContext *_localctx = _tracker.createInstance<PseudodestructornameContext>(_ctx, getState());
  enterRule(_localctx, 34, CPP14Parser::RulePseudodestructorname);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(665);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(644);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
      case 1: {
        setState(643);
        nestednamespecifier(0);
        break;
      }

      }
      setState(646);
      thetypename();
      setState(647);
      match(CPP14Parser::Doublecolon);
      setState(648);
      match(CPP14Parser::Tilde);
      setState(649);
      thetypename();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(651);
      nestednamespecifier(0);
      setState(652);
      match(CPP14Parser::Template);
      setState(653);
      simpletemplateid();
      setState(654);
      match(CPP14Parser::Doublecolon);
      setState(655);
      match(CPP14Parser::Tilde);
      setState(656);
      thetypename();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(659);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Decltype || _la == CPP14Parser::Doublecolon

      || _la == CPP14Parser::Identifier) {
        setState(658);
        nestednamespecifier(0);
      }
      setState(661);
      match(CPP14Parser::Tilde);
      setState(662);
      thetypename();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(663);
      match(CPP14Parser::Tilde);
      setState(664);
      decltypespecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryexpressionContext ------------------------------------------------------------------

CPP14Parser::UnaryexpressionContext::UnaryexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::PostfixexpressionContext* CPP14Parser::UnaryexpressionContext::postfixexpression() {
  return getRuleContext<CPP14Parser::PostfixexpressionContext>(0);
}

CPP14Parser::CastexpressionContext* CPP14Parser::UnaryexpressionContext::castexpression() {
  return getRuleContext<CPP14Parser::CastexpressionContext>(0);
}

CPP14Parser::UnaryoperatorContext* CPP14Parser::UnaryexpressionContext::unaryoperator() {
  return getRuleContext<CPP14Parser::UnaryoperatorContext>(0);
}

tree::TerminalNode* CPP14Parser::UnaryexpressionContext::Sizeof() {
  return getToken(CPP14Parser::Sizeof, 0);
}

CPP14Parser::UnaryexpressionContext* CPP14Parser::UnaryexpressionContext::unaryexpression() {
  return getRuleContext<CPP14Parser::UnaryexpressionContext>(0);
}

CPP14Parser::ThetypeidContext* CPP14Parser::UnaryexpressionContext::thetypeid() {
  return getRuleContext<CPP14Parser::ThetypeidContext>(0);
}

tree::TerminalNode* CPP14Parser::UnaryexpressionContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::UnaryexpressionContext::Alignof() {
  return getToken(CPP14Parser::Alignof, 0);
}

CPP14Parser::NoexceptexpressionContext* CPP14Parser::UnaryexpressionContext::noexceptexpression() {
  return getRuleContext<CPP14Parser::NoexceptexpressionContext>(0);
}

CPP14Parser::NewexpressionContext* CPP14Parser::UnaryexpressionContext::newexpression() {
  return getRuleContext<CPP14Parser::NewexpressionContext>(0);
}

CPP14Parser::DeleteexpressionContext* CPP14Parser::UnaryexpressionContext::deleteexpression() {
  return getRuleContext<CPP14Parser::DeleteexpressionContext>(0);
}


size_t CPP14Parser::UnaryexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleUnaryexpression;
}

antlrcpp::Any CPP14Parser::UnaryexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitUnaryexpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::UnaryexpressionContext* CPP14Parser::unaryexpression() {
  UnaryexpressionContext *_localctx = _tracker.createInstance<UnaryexpressionContext>(_ctx, getState());
  enterRule(_localctx, 36, CPP14Parser::RuleUnaryexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(695);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(667);
      postfixexpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(668);
      match(CPP14Parser::PlusPlus);
      setState(669);
      castexpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(670);
      match(CPP14Parser::MinusMinus);
      setState(671);
      castexpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(672);
      unaryoperator();
      setState(673);
      castexpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(675);
      match(CPP14Parser::Sizeof);
      setState(676);
      unaryexpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(677);
      match(CPP14Parser::Sizeof);
      setState(678);
      match(CPP14Parser::LeftParen);
      setState(679);
      thetypeid();
      setState(680);
      match(CPP14Parser::RightParen);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(682);
      match(CPP14Parser::Sizeof);
      setState(683);
      match(CPP14Parser::Ellipsis);
      setState(684);
      match(CPP14Parser::LeftParen);
      setState(685);
      match(CPP14Parser::Identifier);
      setState(686);
      match(CPP14Parser::RightParen);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(687);
      match(CPP14Parser::Alignof);
      setState(688);
      match(CPP14Parser::LeftParen);
      setState(689);
      thetypeid();
      setState(690);
      match(CPP14Parser::RightParen);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(692);
      noexceptexpression();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(693);
      newexpression();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(694);
      deleteexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryoperatorContext ------------------------------------------------------------------

CPP14Parser::UnaryoperatorContext::UnaryoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CPP14Parser::UnaryoperatorContext::getRuleIndex() const {
  return CPP14Parser::RuleUnaryoperator;
}

antlrcpp::Any CPP14Parser::UnaryoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitUnaryoperator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::UnaryoperatorContext* CPP14Parser::unaryoperator() {
  UnaryoperatorContext *_localctx = _tracker.createInstance<UnaryoperatorContext>(_ctx, getState());
  enterRule(_localctx, 38, CPP14Parser::RuleUnaryoperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(697);
    _la = _input->LA(1);
    if (!(((((_la - 84) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 84)) & ((1ULL << (CPP14Parser::Plus - 84))
      | (1ULL << (CPP14Parser::Minus - 84))
      | (1ULL << (CPP14Parser::Star - 84))
      | (1ULL << (CPP14Parser::And - 84))
      | (1ULL << (CPP14Parser::Or - 84))
      | (1ULL << (CPP14Parser::Tilde - 84))
      | (1ULL << (CPP14Parser::Not - 84)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewexpressionContext ------------------------------------------------------------------

CPP14Parser::NewexpressionContext::NewexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::NewexpressionContext::New() {
  return getToken(CPP14Parser::New, 0);
}

CPP14Parser::NewtypeidContext* CPP14Parser::NewexpressionContext::newtypeid() {
  return getRuleContext<CPP14Parser::NewtypeidContext>(0);
}

CPP14Parser::NewplacementContext* CPP14Parser::NewexpressionContext::newplacement() {
  return getRuleContext<CPP14Parser::NewplacementContext>(0);
}

CPP14Parser::NewinitializerContext* CPP14Parser::NewexpressionContext::newinitializer() {
  return getRuleContext<CPP14Parser::NewinitializerContext>(0);
}

CPP14Parser::ThetypeidContext* CPP14Parser::NewexpressionContext::thetypeid() {
  return getRuleContext<CPP14Parser::ThetypeidContext>(0);
}


size_t CPP14Parser::NewexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleNewexpression;
}

antlrcpp::Any CPP14Parser::NewexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNewexpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NewexpressionContext* CPP14Parser::newexpression() {
  NewexpressionContext *_localctx = _tracker.createInstance<NewexpressionContext>(_ctx, getState());
  enterRule(_localctx, 40, CPP14Parser::RuleNewexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(723);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(700);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Doublecolon) {
        setState(699);
        match(CPP14Parser::Doublecolon);
      }
      setState(702);
      match(CPP14Parser::New);
      setState(704);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::LeftParen) {
        setState(703);
        newplacement();
      }
      setState(706);
      newtypeid();
      setState(708);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
      case 1: {
        setState(707);
        newinitializer();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(711);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Doublecolon) {
        setState(710);
        match(CPP14Parser::Doublecolon);
      }
      setState(713);
      match(CPP14Parser::New);
      setState(715);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
      case 1: {
        setState(714);
        newplacement();
        break;
      }

      }
      setState(717);
      match(CPP14Parser::LeftParen);
      setState(718);
      thetypeid();
      setState(719);
      match(CPP14Parser::RightParen);
      setState(721);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
      case 1: {
        setState(720);
        newinitializer();
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewplacementContext ------------------------------------------------------------------

CPP14Parser::NewplacementContext::NewplacementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ExpressionlistContext* CPP14Parser::NewplacementContext::expressionlist() {
  return getRuleContext<CPP14Parser::ExpressionlistContext>(0);
}


size_t CPP14Parser::NewplacementContext::getRuleIndex() const {
  return CPP14Parser::RuleNewplacement;
}

antlrcpp::Any CPP14Parser::NewplacementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNewplacement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NewplacementContext* CPP14Parser::newplacement() {
  NewplacementContext *_localctx = _tracker.createInstance<NewplacementContext>(_ctx, getState());
  enterRule(_localctx, 42, CPP14Parser::RuleNewplacement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(725);
    match(CPP14Parser::LeftParen);
    setState(726);
    expressionlist();
    setState(727);
    match(CPP14Parser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewtypeidContext ------------------------------------------------------------------

CPP14Parser::NewtypeidContext::NewtypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TypespecifierseqContext* CPP14Parser::NewtypeidContext::typespecifierseq() {
  return getRuleContext<CPP14Parser::TypespecifierseqContext>(0);
}

CPP14Parser::NewdeclaratorContext* CPP14Parser::NewtypeidContext::newdeclarator() {
  return getRuleContext<CPP14Parser::NewdeclaratorContext>(0);
}


size_t CPP14Parser::NewtypeidContext::getRuleIndex() const {
  return CPP14Parser::RuleNewtypeid;
}

antlrcpp::Any CPP14Parser::NewtypeidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNewtypeid(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NewtypeidContext* CPP14Parser::newtypeid() {
  NewtypeidContext *_localctx = _tracker.createInstance<NewtypeidContext>(_ctx, getState());
  enterRule(_localctx, 44, CPP14Parser::RuleNewtypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(729);
    typespecifierseq();
    setState(731);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(730);
      newdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewdeclaratorContext ------------------------------------------------------------------

CPP14Parser::NewdeclaratorContext::NewdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::PtroperatorContext* CPP14Parser::NewdeclaratorContext::ptroperator() {
  return getRuleContext<CPP14Parser::PtroperatorContext>(0);
}

CPP14Parser::NewdeclaratorContext* CPP14Parser::NewdeclaratorContext::newdeclarator() {
  return getRuleContext<CPP14Parser::NewdeclaratorContext>(0);
}

CPP14Parser::NoptrnewdeclaratorContext* CPP14Parser::NewdeclaratorContext::noptrnewdeclarator() {
  return getRuleContext<CPP14Parser::NoptrnewdeclaratorContext>(0);
}


size_t CPP14Parser::NewdeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleNewdeclarator;
}

antlrcpp::Any CPP14Parser::NewdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNewdeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NewdeclaratorContext* CPP14Parser::newdeclarator() {
  NewdeclaratorContext *_localctx = _tracker.createInstance<NewdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 46, CPP14Parser::RuleNewdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(738);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Decltype:
      case CPP14Parser::Star:
      case CPP14Parser::And:
      case CPP14Parser::AndAnd:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(733);
        ptroperator();
        setState(735);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
        case 1: {
          setState(734);
          newdeclarator();
          break;
        }

        }
        break;
      }

      case CPP14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(737);
        noptrnewdeclarator(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoptrnewdeclaratorContext ------------------------------------------------------------------

CPP14Parser::NoptrnewdeclaratorContext::NoptrnewdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ExpressionContext* CPP14Parser::NoptrnewdeclaratorContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::NoptrnewdeclaratorContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::NoptrnewdeclaratorContext* CPP14Parser::NoptrnewdeclaratorContext::noptrnewdeclarator() {
  return getRuleContext<CPP14Parser::NoptrnewdeclaratorContext>(0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::NoptrnewdeclaratorContext::constantexpression() {
  return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);
}


size_t CPP14Parser::NoptrnewdeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleNoptrnewdeclarator;
}

antlrcpp::Any CPP14Parser::NoptrnewdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNoptrnewdeclarator(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::NoptrnewdeclaratorContext* CPP14Parser::noptrnewdeclarator() {
   return noptrnewdeclarator(0);
}

CPP14Parser::NoptrnewdeclaratorContext* CPP14Parser::noptrnewdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::NoptrnewdeclaratorContext *_localctx = _tracker.createInstance<NoptrnewdeclaratorContext>(_ctx, parentState);
  CPP14Parser::NoptrnewdeclaratorContext *previousContext = _localctx;
  size_t startState = 48;
  enterRecursionRule(_localctx, 48, CPP14Parser::RuleNoptrnewdeclarator, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(741);
    match(CPP14Parser::LeftBracket);
    setState(742);
    expression(0);
    setState(743);
    match(CPP14Parser::RightBracket);
    setState(745);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(744);
      attributespecifierseq(0);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(756);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NoptrnewdeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNoptrnewdeclarator);
        setState(747);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(748);
        match(CPP14Parser::LeftBracket);
        setState(749);
        constantexpression();
        setState(750);
        match(CPP14Parser::RightBracket);
        setState(752);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
        case 1: {
          setState(751);
          attributespecifierseq(0);
          break;
        }

        } 
      }
      setState(758);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NewinitializerContext ------------------------------------------------------------------

CPP14Parser::NewinitializerContext::NewinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ExpressionlistContext* CPP14Parser::NewinitializerContext::expressionlist() {
  return getRuleContext<CPP14Parser::ExpressionlistContext>(0);
}

CPP14Parser::BracedinitlistContext* CPP14Parser::NewinitializerContext::bracedinitlist() {
  return getRuleContext<CPP14Parser::BracedinitlistContext>(0);
}


size_t CPP14Parser::NewinitializerContext::getRuleIndex() const {
  return CPP14Parser::RuleNewinitializer;
}

antlrcpp::Any CPP14Parser::NewinitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNewinitializer(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NewinitializerContext* CPP14Parser::newinitializer() {
  NewinitializerContext *_localctx = _tracker.createInstance<NewinitializerContext>(_ctx, getState());
  enterRule(_localctx, 50, CPP14Parser::RuleNewinitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(765);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::LeftParen: {
        enterOuterAlt(_localctx, 1);
        setState(759);
        match(CPP14Parser::LeftParen);
        setState(761);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CPP14Parser::Alignof)
          | (1ULL << CPP14Parser::Auto)
          | (1ULL << CPP14Parser::Bool)
          | (1ULL << CPP14Parser::Char)
          | (1ULL << CPP14Parser::Char16)
          | (1ULL << CPP14Parser::Char32)
          | (1ULL << CPP14Parser::Const_cast)
          | (1ULL << CPP14Parser::Decltype)
          | (1ULL << CPP14Parser::Delete)
          | (1ULL << CPP14Parser::Double)
          | (1ULL << CPP14Parser::Dynamic_cast)
          | (1ULL << CPP14Parser::False)
          | (1ULL << CPP14Parser::Float)
          | (1ULL << CPP14Parser::Int)
          | (1ULL << CPP14Parser::Long)
          | (1ULL << CPP14Parser::New)
          | (1ULL << CPP14Parser::Noexcept)
          | (1ULL << CPP14Parser::Nullptr)
          | (1ULL << CPP14Parser::Operator)
          | (1ULL << CPP14Parser::Reinterpret_cast)
          | (1ULL << CPP14Parser::Short)
          | (1ULL << CPP14Parser::Signed)
          | (1ULL << CPP14Parser::Sizeof)
          | (1ULL << CPP14Parser::Static_cast)
          | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Throw - 64))
          | (1ULL << (CPP14Parser::True - 64))
          | (1ULL << (CPP14Parser::Typeid - 64))
          | (1ULL << (CPP14Parser::Typename - 64))
          | (1ULL << (CPP14Parser::Unsigned - 64))
          | (1ULL << (CPP14Parser::Void - 64))
          | (1ULL << (CPP14Parser::Wchar - 64))
          | (1ULL << (CPP14Parser::LeftParen - 64))
          | (1ULL << (CPP14Parser::LeftBracket - 64))
          | (1ULL << (CPP14Parser::LeftBrace - 64))
          | (1ULL << (CPP14Parser::Plus - 64))
          | (1ULL << (CPP14Parser::Minus - 64))
          | (1ULL << (CPP14Parser::Star - 64))
          | (1ULL << (CPP14Parser::And - 64))
          | (1ULL << (CPP14Parser::Or - 64))
          | (1ULL << (CPP14Parser::Tilde - 64))
          | (1ULL << (CPP14Parser::Not - 64))
          | (1ULL << (CPP14Parser::PlusPlus - 64))
          | (1ULL << (CPP14Parser::MinusMinus - 64))
          | (1ULL << (CPP14Parser::Doublecolon - 64))
          | (1ULL << (CPP14Parser::Identifier - 64))
          | (1ULL << (CPP14Parser::Integerliteral - 64)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 132)) & ((1ULL << (CPP14Parser::Characterliteral - 132))
          | (1ULL << (CPP14Parser::Floatingliteral - 132))
          | (1ULL << (CPP14Parser::Stringliteral - 132))
          | (1ULL << (CPP14Parser::Userdefinedintegerliteral - 132))
          | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 132))
          | (1ULL << (CPP14Parser::Userdefinedstringliteral - 132))
          | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 132)))) != 0)) {
          setState(760);
          expressionlist();
        }
        setState(763);
        match(CPP14Parser::RightParen);
        break;
      }

      case CPP14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(764);
        bracedinitlist();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeleteexpressionContext ------------------------------------------------------------------

CPP14Parser::DeleteexpressionContext::DeleteexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::DeleteexpressionContext::Delete() {
  return getToken(CPP14Parser::Delete, 0);
}

CPP14Parser::CastexpressionContext* CPP14Parser::DeleteexpressionContext::castexpression() {
  return getRuleContext<CPP14Parser::CastexpressionContext>(0);
}


size_t CPP14Parser::DeleteexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleDeleteexpression;
}

antlrcpp::Any CPP14Parser::DeleteexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitDeleteexpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DeleteexpressionContext* CPP14Parser::deleteexpression() {
  DeleteexpressionContext *_localctx = _tracker.createInstance<DeleteexpressionContext>(_ctx, getState());
  enterRule(_localctx, 52, CPP14Parser::RuleDeleteexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(779);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(768);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Doublecolon) {
        setState(767);
        match(CPP14Parser::Doublecolon);
      }
      setState(770);
      match(CPP14Parser::Delete);
      setState(771);
      castexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(773);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Doublecolon) {
        setState(772);
        match(CPP14Parser::Doublecolon);
      }
      setState(775);
      match(CPP14Parser::Delete);
      setState(776);
      match(CPP14Parser::LeftBracket);
      setState(777);
      match(CPP14Parser::RightBracket);
      setState(778);
      castexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoexceptexpressionContext ------------------------------------------------------------------

CPP14Parser::NoexceptexpressionContext::NoexceptexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::NoexceptexpressionContext::Noexcept() {
  return getToken(CPP14Parser::Noexcept, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::NoexceptexpressionContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}


size_t CPP14Parser::NoexceptexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleNoexceptexpression;
}

antlrcpp::Any CPP14Parser::NoexceptexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNoexceptexpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NoexceptexpressionContext* CPP14Parser::noexceptexpression() {
  NoexceptexpressionContext *_localctx = _tracker.createInstance<NoexceptexpressionContext>(_ctx, getState());
  enterRule(_localctx, 54, CPP14Parser::RuleNoexceptexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(781);
    match(CPP14Parser::Noexcept);
    setState(782);
    match(CPP14Parser::LeftParen);
    setState(783);
    expression(0);
    setState(784);
    match(CPP14Parser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastexpressionContext ------------------------------------------------------------------

CPP14Parser::CastexpressionContext::CastexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::UnaryexpressionContext* CPP14Parser::CastexpressionContext::unaryexpression() {
  return getRuleContext<CPP14Parser::UnaryexpressionContext>(0);
}

CPP14Parser::ThetypeidContext* CPP14Parser::CastexpressionContext::thetypeid() {
  return getRuleContext<CPP14Parser::ThetypeidContext>(0);
}

CPP14Parser::CastexpressionContext* CPP14Parser::CastexpressionContext::castexpression() {
  return getRuleContext<CPP14Parser::CastexpressionContext>(0);
}


size_t CPP14Parser::CastexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleCastexpression;
}

antlrcpp::Any CPP14Parser::CastexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitCastexpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::CastexpressionContext* CPP14Parser::castexpression() {
  CastexpressionContext *_localctx = _tracker.createInstance<CastexpressionContext>(_ctx, getState());
  enterRule(_localctx, 56, CPP14Parser::RuleCastexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(792);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(786);
      unaryexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(787);
      match(CPP14Parser::LeftParen);
      setState(788);
      thetypeid();
      setState(789);
      match(CPP14Parser::RightParen);
      setState(790);
      castexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PmexpressionContext ------------------------------------------------------------------

CPP14Parser::PmexpressionContext::PmexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::CastexpressionContext* CPP14Parser::PmexpressionContext::castexpression() {
  return getRuleContext<CPP14Parser::CastexpressionContext>(0);
}

CPP14Parser::PmexpressionContext* CPP14Parser::PmexpressionContext::pmexpression() {
  return getRuleContext<CPP14Parser::PmexpressionContext>(0);
}


size_t CPP14Parser::PmexpressionContext::getRuleIndex() const {
  return CPP14Parser::RulePmexpression;
}

antlrcpp::Any CPP14Parser::PmexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitPmexpression(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::PmexpressionContext* CPP14Parser::pmexpression() {
   return pmexpression(0);
}

CPP14Parser::PmexpressionContext* CPP14Parser::pmexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::PmexpressionContext *_localctx = _tracker.createInstance<PmexpressionContext>(_ctx, parentState);
  CPP14Parser::PmexpressionContext *previousContext = _localctx;
  size_t startState = 58;
  enterRecursionRule(_localctx, 58, CPP14Parser::RulePmexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(795);
    castexpression();
    _ctx->stop = _input->LT(-1);
    setState(805);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(803);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PmexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePmexpression);
          setState(797);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(798);
          match(CPP14Parser::DotStar);
          setState(799);
          castexpression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PmexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePmexpression);
          setState(800);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(801);
          match(CPP14Parser::ArrowStar);
          setState(802);
          castexpression();
          break;
        }

        } 
      }
      setState(807);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultiplicativeexpressionContext ------------------------------------------------------------------

CPP14Parser::MultiplicativeexpressionContext::MultiplicativeexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::PmexpressionContext* CPP14Parser::MultiplicativeexpressionContext::pmexpression() {
  return getRuleContext<CPP14Parser::PmexpressionContext>(0);
}

CPP14Parser::MultiplicativeexpressionContext* CPP14Parser::MultiplicativeexpressionContext::multiplicativeexpression() {
  return getRuleContext<CPP14Parser::MultiplicativeexpressionContext>(0);
}


size_t CPP14Parser::MultiplicativeexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleMultiplicativeexpression;
}

antlrcpp::Any CPP14Parser::MultiplicativeexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitMultiplicativeexpression(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::MultiplicativeexpressionContext* CPP14Parser::multiplicativeexpression() {
   return multiplicativeexpression(0);
}

CPP14Parser::MultiplicativeexpressionContext* CPP14Parser::multiplicativeexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::MultiplicativeexpressionContext *_localctx = _tracker.createInstance<MultiplicativeexpressionContext>(_ctx, parentState);
  CPP14Parser::MultiplicativeexpressionContext *previousContext = _localctx;
  size_t startState = 60;
  enterRecursionRule(_localctx, 60, CPP14Parser::RuleMultiplicativeexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(809);
    pmexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(822);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(820);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(811);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(812);
          match(CPP14Parser::Star);
          setState(813);
          pmexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(814);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(815);
          match(CPP14Parser::Div);
          setState(816);
          pmexpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(817);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(818);
          match(CPP14Parser::Mod);
          setState(819);
          pmexpression(0);
          break;
        }

        } 
      }
      setState(824);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AdditiveexpressionContext ------------------------------------------------------------------

CPP14Parser::AdditiveexpressionContext::AdditiveexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::MultiplicativeexpressionContext* CPP14Parser::AdditiveexpressionContext::multiplicativeexpression() {
  return getRuleContext<CPP14Parser::MultiplicativeexpressionContext>(0);
}

CPP14Parser::AdditiveexpressionContext* CPP14Parser::AdditiveexpressionContext::additiveexpression() {
  return getRuleContext<CPP14Parser::AdditiveexpressionContext>(0);
}


size_t CPP14Parser::AdditiveexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleAdditiveexpression;
}

antlrcpp::Any CPP14Parser::AdditiveexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAdditiveexpression(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::AdditiveexpressionContext* CPP14Parser::additiveexpression() {
   return additiveexpression(0);
}

CPP14Parser::AdditiveexpressionContext* CPP14Parser::additiveexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::AdditiveexpressionContext *_localctx = _tracker.createInstance<AdditiveexpressionContext>(_ctx, parentState);
  CPP14Parser::AdditiveexpressionContext *previousContext = _localctx;
  size_t startState = 62;
  enterRecursionRule(_localctx, 62, CPP14Parser::RuleAdditiveexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(826);
    multiplicativeexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(836);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(834);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AdditiveexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveexpression);
          setState(828);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(829);
          match(CPP14Parser::Plus);
          setState(830);
          multiplicativeexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AdditiveexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveexpression);
          setState(831);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(832);
          match(CPP14Parser::Minus);
          setState(833);
          multiplicativeexpression(0);
          break;
        }

        } 
      }
      setState(838);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ShiftexpressionContext ------------------------------------------------------------------

CPP14Parser::ShiftexpressionContext::ShiftexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::AdditiveexpressionContext* CPP14Parser::ShiftexpressionContext::additiveexpression() {
  return getRuleContext<CPP14Parser::AdditiveexpressionContext>(0);
}

CPP14Parser::ShiftexpressionContext* CPP14Parser::ShiftexpressionContext::shiftexpression() {
  return getRuleContext<CPP14Parser::ShiftexpressionContext>(0);
}

CPP14Parser::RightShiftContext* CPP14Parser::ShiftexpressionContext::rightShift() {
  return getRuleContext<CPP14Parser::RightShiftContext>(0);
}


size_t CPP14Parser::ShiftexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleShiftexpression;
}

antlrcpp::Any CPP14Parser::ShiftexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitShiftexpression(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::ShiftexpressionContext* CPP14Parser::shiftexpression() {
   return shiftexpression(0);
}

CPP14Parser::ShiftexpressionContext* CPP14Parser::shiftexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::ShiftexpressionContext *_localctx = _tracker.createInstance<ShiftexpressionContext>(_ctx, parentState);
  CPP14Parser::ShiftexpressionContext *previousContext = _localctx;
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, CPP14Parser::RuleShiftexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(840);
    additiveexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(851);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(849);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ShiftexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftexpression);
          setState(842);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(843);
          match(CPP14Parser::LeftShift);
          setState(844);
          additiveexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ShiftexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftexpression);
          setState(845);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(846);
          rightShift();
          setState(847);
          additiveexpression(0);
          break;
        }

        } 
      }
      setState(853);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelationalexpressionContext ------------------------------------------------------------------

CPP14Parser::RelationalexpressionContext::RelationalexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ShiftexpressionContext* CPP14Parser::RelationalexpressionContext::shiftexpression() {
  return getRuleContext<CPP14Parser::ShiftexpressionContext>(0);
}

CPP14Parser::RelationalexpressionContext* CPP14Parser::RelationalexpressionContext::relationalexpression() {
  return getRuleContext<CPP14Parser::RelationalexpressionContext>(0);
}


size_t CPP14Parser::RelationalexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleRelationalexpression;
}

antlrcpp::Any CPP14Parser::RelationalexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitRelationalexpression(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::RelationalexpressionContext* CPP14Parser::relationalexpression() {
   return relationalexpression(0);
}

CPP14Parser::RelationalexpressionContext* CPP14Parser::relationalexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::RelationalexpressionContext *_localctx = _tracker.createInstance<RelationalexpressionContext>(_ctx, parentState);
  CPP14Parser::RelationalexpressionContext *previousContext = _localctx;
  size_t startState = 66;
  enterRecursionRule(_localctx, 66, CPP14Parser::RuleRelationalexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(855);
    shiftexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(871);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(869);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(857);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(858);
          match(CPP14Parser::Less);
          setState(859);
          shiftexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(860);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(861);
          match(CPP14Parser::Greater);
          setState(862);
          shiftexpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(863);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(864);
          match(CPP14Parser::LessEqual);
          setState(865);
          shiftexpression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(866);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(867);
          match(CPP14Parser::GreaterEqual);
          setState(868);
          shiftexpression(0);
          break;
        }

        } 
      }
      setState(873);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualityexpressionContext ------------------------------------------------------------------

CPP14Parser::EqualityexpressionContext::EqualityexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::RelationalexpressionContext* CPP14Parser::EqualityexpressionContext::relationalexpression() {
  return getRuleContext<CPP14Parser::RelationalexpressionContext>(0);
}

CPP14Parser::EqualityexpressionContext* CPP14Parser::EqualityexpressionContext::equalityexpression() {
  return getRuleContext<CPP14Parser::EqualityexpressionContext>(0);
}


size_t CPP14Parser::EqualityexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleEqualityexpression;
}

antlrcpp::Any CPP14Parser::EqualityexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitEqualityexpression(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::EqualityexpressionContext* CPP14Parser::equalityexpression() {
   return equalityexpression(0);
}

CPP14Parser::EqualityexpressionContext* CPP14Parser::equalityexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::EqualityexpressionContext *_localctx = _tracker.createInstance<EqualityexpressionContext>(_ctx, parentState);
  CPP14Parser::EqualityexpressionContext *previousContext = _localctx;
  size_t startState = 68;
  enterRecursionRule(_localctx, 68, CPP14Parser::RuleEqualityexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(875);
    relationalexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(885);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(883);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<EqualityexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityexpression);
          setState(877);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(878);
          match(CPP14Parser::Equal);
          setState(879);
          relationalexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<EqualityexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityexpression);
          setState(880);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(881);
          match(CPP14Parser::NotEqual);
          setState(882);
          relationalexpression(0);
          break;
        }

        } 
      }
      setState(887);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AndexpressionContext ------------------------------------------------------------------

CPP14Parser::AndexpressionContext::AndexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::EqualityexpressionContext* CPP14Parser::AndexpressionContext::equalityexpression() {
  return getRuleContext<CPP14Parser::EqualityexpressionContext>(0);
}

CPP14Parser::AndexpressionContext* CPP14Parser::AndexpressionContext::andexpression() {
  return getRuleContext<CPP14Parser::AndexpressionContext>(0);
}


size_t CPP14Parser::AndexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleAndexpression;
}

antlrcpp::Any CPP14Parser::AndexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAndexpression(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::AndexpressionContext* CPP14Parser::andexpression() {
   return andexpression(0);
}

CPP14Parser::AndexpressionContext* CPP14Parser::andexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::AndexpressionContext *_localctx = _tracker.createInstance<AndexpressionContext>(_ctx, parentState);
  CPP14Parser::AndexpressionContext *previousContext = _localctx;
  size_t startState = 70;
  enterRecursionRule(_localctx, 70, CPP14Parser::RuleAndexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(889);
    equalityexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(896);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AndexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAndexpression);
        setState(891);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(892);
        match(CPP14Parser::And);
        setState(893);
        equalityexpression(0); 
      }
      setState(898);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExclusiveorexpressionContext ------------------------------------------------------------------

CPP14Parser::ExclusiveorexpressionContext::ExclusiveorexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::AndexpressionContext* CPP14Parser::ExclusiveorexpressionContext::andexpression() {
  return getRuleContext<CPP14Parser::AndexpressionContext>(0);
}

CPP14Parser::ExclusiveorexpressionContext* CPP14Parser::ExclusiveorexpressionContext::exclusiveorexpression() {
  return getRuleContext<CPP14Parser::ExclusiveorexpressionContext>(0);
}


size_t CPP14Parser::ExclusiveorexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleExclusiveorexpression;
}

antlrcpp::Any CPP14Parser::ExclusiveorexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitExclusiveorexpression(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::ExclusiveorexpressionContext* CPP14Parser::exclusiveorexpression() {
   return exclusiveorexpression(0);
}

CPP14Parser::ExclusiveorexpressionContext* CPP14Parser::exclusiveorexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::ExclusiveorexpressionContext *_localctx = _tracker.createInstance<ExclusiveorexpressionContext>(_ctx, parentState);
  CPP14Parser::ExclusiveorexpressionContext *previousContext = _localctx;
  size_t startState = 72;
  enterRecursionRule(_localctx, 72, CPP14Parser::RuleExclusiveorexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(900);
    andexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(907);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExclusiveorexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExclusiveorexpression);
        setState(902);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(903);
        match(CPP14Parser::Caret);
        setState(904);
        andexpression(0); 
      }
      setState(909);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InclusiveorexpressionContext ------------------------------------------------------------------

CPP14Parser::InclusiveorexpressionContext::InclusiveorexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ExclusiveorexpressionContext* CPP14Parser::InclusiveorexpressionContext::exclusiveorexpression() {
  return getRuleContext<CPP14Parser::ExclusiveorexpressionContext>(0);
}

CPP14Parser::InclusiveorexpressionContext* CPP14Parser::InclusiveorexpressionContext::inclusiveorexpression() {
  return getRuleContext<CPP14Parser::InclusiveorexpressionContext>(0);
}


size_t CPP14Parser::InclusiveorexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleInclusiveorexpression;
}

antlrcpp::Any CPP14Parser::InclusiveorexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitInclusiveorexpression(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::InclusiveorexpressionContext* CPP14Parser::inclusiveorexpression() {
   return inclusiveorexpression(0);
}

CPP14Parser::InclusiveorexpressionContext* CPP14Parser::inclusiveorexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::InclusiveorexpressionContext *_localctx = _tracker.createInstance<InclusiveorexpressionContext>(_ctx, parentState);
  CPP14Parser::InclusiveorexpressionContext *previousContext = _localctx;
  size_t startState = 74;
  enterRecursionRule(_localctx, 74, CPP14Parser::RuleInclusiveorexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(911);
    exclusiveorexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(918);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InclusiveorexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInclusiveorexpression);
        setState(913);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(914);
        match(CPP14Parser::Or);
        setState(915);
        exclusiveorexpression(0); 
      }
      setState(920);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalandexpressionContext ------------------------------------------------------------------

CPP14Parser::LogicalandexpressionContext::LogicalandexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::InclusiveorexpressionContext* CPP14Parser::LogicalandexpressionContext::inclusiveorexpression() {
  return getRuleContext<CPP14Parser::InclusiveorexpressionContext>(0);
}

CPP14Parser::LogicalandexpressionContext* CPP14Parser::LogicalandexpressionContext::logicalandexpression() {
  return getRuleContext<CPP14Parser::LogicalandexpressionContext>(0);
}


size_t CPP14Parser::LogicalandexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleLogicalandexpression;
}

antlrcpp::Any CPP14Parser::LogicalandexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitLogicalandexpression(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::LogicalandexpressionContext* CPP14Parser::logicalandexpression() {
   return logicalandexpression(0);
}

CPP14Parser::LogicalandexpressionContext* CPP14Parser::logicalandexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::LogicalandexpressionContext *_localctx = _tracker.createInstance<LogicalandexpressionContext>(_ctx, parentState);
  CPP14Parser::LogicalandexpressionContext *previousContext = _localctx;
  size_t startState = 76;
  enterRecursionRule(_localctx, 76, CPP14Parser::RuleLogicalandexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(922);
    inclusiveorexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(929);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalandexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalandexpression);
        setState(924);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(925);
        match(CPP14Parser::AndAnd);
        setState(926);
        inclusiveorexpression(0); 
      }
      setState(931);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalorexpressionContext ------------------------------------------------------------------

CPP14Parser::LogicalorexpressionContext::LogicalorexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::LogicalandexpressionContext* CPP14Parser::LogicalorexpressionContext::logicalandexpression() {
  return getRuleContext<CPP14Parser::LogicalandexpressionContext>(0);
}

CPP14Parser::LogicalorexpressionContext* CPP14Parser::LogicalorexpressionContext::logicalorexpression() {
  return getRuleContext<CPP14Parser::LogicalorexpressionContext>(0);
}


size_t CPP14Parser::LogicalorexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleLogicalorexpression;
}

antlrcpp::Any CPP14Parser::LogicalorexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitLogicalorexpression(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::LogicalorexpressionContext* CPP14Parser::logicalorexpression() {
   return logicalorexpression(0);
}

CPP14Parser::LogicalorexpressionContext* CPP14Parser::logicalorexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::LogicalorexpressionContext *_localctx = _tracker.createInstance<LogicalorexpressionContext>(_ctx, parentState);
  CPP14Parser::LogicalorexpressionContext *previousContext = _localctx;
  size_t startState = 78;
  enterRecursionRule(_localctx, 78, CPP14Parser::RuleLogicalorexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(933);
    logicalandexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(940);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalorexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalorexpression);
        setState(935);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(936);
        match(CPP14Parser::OrOr);
        setState(937);
        logicalandexpression(0); 
      }
      setState(942);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConditionalexpressionContext ------------------------------------------------------------------

CPP14Parser::ConditionalexpressionContext::ConditionalexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::LogicalorexpressionContext* CPP14Parser::ConditionalexpressionContext::logicalorexpression() {
  return getRuleContext<CPP14Parser::LogicalorexpressionContext>(0);
}

CPP14Parser::ExpressionContext* CPP14Parser::ConditionalexpressionContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

CPP14Parser::AssignmentexpressionContext* CPP14Parser::ConditionalexpressionContext::assignmentexpression() {
  return getRuleContext<CPP14Parser::AssignmentexpressionContext>(0);
}


size_t CPP14Parser::ConditionalexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleConditionalexpression;
}

antlrcpp::Any CPP14Parser::ConditionalexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitConditionalexpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ConditionalexpressionContext* CPP14Parser::conditionalexpression() {
  ConditionalexpressionContext *_localctx = _tracker.createInstance<ConditionalexpressionContext>(_ctx, getState());
  enterRule(_localctx, 80, CPP14Parser::RuleConditionalexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(950);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(943);
      logicalorexpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(944);
      logicalorexpression(0);
      setState(945);
      match(CPP14Parser::Question);
      setState(946);
      expression(0);
      setState(947);
      match(CPP14Parser::Colon);
      setState(948);
      assignmentexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentexpressionContext ------------------------------------------------------------------

CPP14Parser::AssignmentexpressionContext::AssignmentexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ConditionalexpressionContext* CPP14Parser::AssignmentexpressionContext::conditionalexpression() {
  return getRuleContext<CPP14Parser::ConditionalexpressionContext>(0);
}

CPP14Parser::LogicalorexpressionContext* CPP14Parser::AssignmentexpressionContext::logicalorexpression() {
  return getRuleContext<CPP14Parser::LogicalorexpressionContext>(0);
}

CPP14Parser::AssignmentoperatorContext* CPP14Parser::AssignmentexpressionContext::assignmentoperator() {
  return getRuleContext<CPP14Parser::AssignmentoperatorContext>(0);
}

CPP14Parser::InitializerclauseContext* CPP14Parser::AssignmentexpressionContext::initializerclause() {
  return getRuleContext<CPP14Parser::InitializerclauseContext>(0);
}

CPP14Parser::ThrowexpressionContext* CPP14Parser::AssignmentexpressionContext::throwexpression() {
  return getRuleContext<CPP14Parser::ThrowexpressionContext>(0);
}


size_t CPP14Parser::AssignmentexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleAssignmentexpression;
}

antlrcpp::Any CPP14Parser::AssignmentexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAssignmentexpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AssignmentexpressionContext* CPP14Parser::assignmentexpression() {
  AssignmentexpressionContext *_localctx = _tracker.createInstance<AssignmentexpressionContext>(_ctx, getState());
  enterRule(_localctx, 82, CPP14Parser::RuleAssignmentexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(958);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(952);
      conditionalexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(953);
      logicalorexpression(0);
      setState(954);
      assignmentoperator();
      setState(955);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(957);
      throwexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentoperatorContext ------------------------------------------------------------------

CPP14Parser::AssignmentoperatorContext::AssignmentoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::RightShiftAssignContext* CPP14Parser::AssignmentoperatorContext::rightShiftAssign() {
  return getRuleContext<CPP14Parser::RightShiftAssignContext>(0);
}


size_t CPP14Parser::AssignmentoperatorContext::getRuleIndex() const {
  return CPP14Parser::RuleAssignmentoperator;
}

antlrcpp::Any CPP14Parser::AssignmentoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAssignmentoperator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AssignmentoperatorContext* CPP14Parser::assignmentoperator() {
  AssignmentoperatorContext *_localctx = _tracker.createInstance<AssignmentoperatorContext>(_ctx, getState());
  enterRule(_localctx, 84, CPP14Parser::RuleAssignmentoperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(971);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(960);
        match(CPP14Parser::Assign);
        break;
      }

      case CPP14Parser::StarAssign: {
        enterOuterAlt(_localctx, 2);
        setState(961);
        match(CPP14Parser::StarAssign);
        break;
      }

      case CPP14Parser::DivAssign: {
        enterOuterAlt(_localctx, 3);
        setState(962);
        match(CPP14Parser::DivAssign);
        break;
      }

      case CPP14Parser::ModAssign: {
        enterOuterAlt(_localctx, 4);
        setState(963);
        match(CPP14Parser::ModAssign);
        break;
      }

      case CPP14Parser::PlusAssign: {
        enterOuterAlt(_localctx, 5);
        setState(964);
        match(CPP14Parser::PlusAssign);
        break;
      }

      case CPP14Parser::MinusAssign: {
        enterOuterAlt(_localctx, 6);
        setState(965);
        match(CPP14Parser::MinusAssign);
        break;
      }

      case CPP14Parser::Greater: {
        enterOuterAlt(_localctx, 7);
        setState(966);
        rightShiftAssign();
        break;
      }

      case CPP14Parser::LeftShiftAssign: {
        enterOuterAlt(_localctx, 8);
        setState(967);
        match(CPP14Parser::LeftShiftAssign);
        break;
      }

      case CPP14Parser::AndAssign: {
        enterOuterAlt(_localctx, 9);
        setState(968);
        match(CPP14Parser::AndAssign);
        break;
      }

      case CPP14Parser::XorAssign: {
        enterOuterAlt(_localctx, 10);
        setState(969);
        match(CPP14Parser::XorAssign);
        break;
      }

      case CPP14Parser::OrAssign: {
        enterOuterAlt(_localctx, 11);
        setState(970);
        match(CPP14Parser::OrAssign);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CPP14Parser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::AssignmentexpressionContext* CPP14Parser::ExpressionContext::assignmentexpression() {
  return getRuleContext<CPP14Parser::AssignmentexpressionContext>(0);
}

CPP14Parser::ExpressionContext* CPP14Parser::ExpressionContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}


size_t CPP14Parser::ExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleExpression;
}

antlrcpp::Any CPP14Parser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::ExpressionContext* CPP14Parser::expression() {
   return expression(0);
}

CPP14Parser::ExpressionContext* CPP14Parser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  CPP14Parser::ExpressionContext *previousContext = _localctx;
  size_t startState = 86;
  enterRecursionRule(_localctx, 86, CPP14Parser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(974);
    assignmentexpression();
    _ctx->stop = _input->LT(-1);
    setState(981);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(976);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(977);
        match(CPP14Parser::Comma);
        setState(978);
        assignmentexpression(); 
      }
      setState(983);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConstantexpressionContext ------------------------------------------------------------------

CPP14Parser::ConstantexpressionContext::ConstantexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ConditionalexpressionContext* CPP14Parser::ConstantexpressionContext::conditionalexpression() {
  return getRuleContext<CPP14Parser::ConditionalexpressionContext>(0);
}


size_t CPP14Parser::ConstantexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleConstantexpression;
}

antlrcpp::Any CPP14Parser::ConstantexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitConstantexpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::constantexpression() {
  ConstantexpressionContext *_localctx = _tracker.createInstance<ConstantexpressionContext>(_ctx, getState());
  enterRule(_localctx, 88, CPP14Parser::RuleConstantexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(984);
    conditionalexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CPP14Parser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::LabeledstatementContext* CPP14Parser::StatementContext::labeledstatement() {
  return getRuleContext<CPP14Parser::LabeledstatementContext>(0);
}

CPP14Parser::ExpressionstatementContext* CPP14Parser::StatementContext::expressionstatement() {
  return getRuleContext<CPP14Parser::ExpressionstatementContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::StatementContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::CompoundstatementContext* CPP14Parser::StatementContext::compoundstatement() {
  return getRuleContext<CPP14Parser::CompoundstatementContext>(0);
}

CPP14Parser::SelectionstatementContext* CPP14Parser::StatementContext::selectionstatement() {
  return getRuleContext<CPP14Parser::SelectionstatementContext>(0);
}

CPP14Parser::IterationstatementContext* CPP14Parser::StatementContext::iterationstatement() {
  return getRuleContext<CPP14Parser::IterationstatementContext>(0);
}

CPP14Parser::JumpstatementContext* CPP14Parser::StatementContext::jumpstatement() {
  return getRuleContext<CPP14Parser::JumpstatementContext>(0);
}

CPP14Parser::DeclarationstatementContext* CPP14Parser::StatementContext::declarationstatement() {
  return getRuleContext<CPP14Parser::DeclarationstatementContext>(0);
}

CPP14Parser::TryblockContext* CPP14Parser::StatementContext::tryblock() {
  return getRuleContext<CPP14Parser::TryblockContext>(0);
}


size_t CPP14Parser::StatementContext::getRuleIndex() const {
  return CPP14Parser::RuleStatement;
}

antlrcpp::Any CPP14Parser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::StatementContext* CPP14Parser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 90, CPP14Parser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1012);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(986);
      labeledstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(988);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
      case 1: {
        setState(987);
        attributespecifierseq(0);
        break;
      }

      }
      setState(990);
      expressionstatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(992);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(991);
        attributespecifierseq(0);
      }
      setState(994);
      compoundstatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(996);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(995);
        attributespecifierseq(0);
      }
      setState(998);
      selectionstatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1000);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(999);
        attributespecifierseq(0);
      }
      setState(1002);
      iterationstatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1004);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(1003);
        attributespecifierseq(0);
      }
      setState(1006);
      jumpstatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1007);
      declarationstatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1009);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(1008);
        attributespecifierseq(0);
      }
      setState(1011);
      tryblock();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledstatementContext ------------------------------------------------------------------

CPP14Parser::LabeledstatementContext::LabeledstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::LabeledstatementContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::StatementContext* CPP14Parser::LabeledstatementContext::statement() {
  return getRuleContext<CPP14Parser::StatementContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::LabeledstatementContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* CPP14Parser::LabeledstatementContext::Case() {
  return getToken(CPP14Parser::Case, 0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::LabeledstatementContext::constantexpression() {
  return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::LabeledstatementContext::Default() {
  return getToken(CPP14Parser::Default, 0);
}


size_t CPP14Parser::LabeledstatementContext::getRuleIndex() const {
  return CPP14Parser::RuleLabeledstatement;
}

antlrcpp::Any CPP14Parser::LabeledstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitLabeledstatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::LabeledstatementContext* CPP14Parser::labeledstatement() {
  LabeledstatementContext *_localctx = _tracker.createInstance<LabeledstatementContext>(_ctx, getState());
  enterRule(_localctx, 92, CPP14Parser::RuleLabeledstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1034);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1015);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(1014);
        attributespecifierseq(0);
      }
      setState(1017);
      match(CPP14Parser::Identifier);
      setState(1018);
      match(CPP14Parser::Colon);
      setState(1019);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1021);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(1020);
        attributespecifierseq(0);
      }
      setState(1023);
      match(CPP14Parser::Case);
      setState(1024);
      constantexpression();
      setState(1025);
      match(CPP14Parser::Colon);
      setState(1026);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1029);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(1028);
        attributespecifierseq(0);
      }
      setState(1031);
      match(CPP14Parser::Default);
      setState(1032);
      match(CPP14Parser::Colon);
      setState(1033);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionstatementContext ------------------------------------------------------------------

CPP14Parser::ExpressionstatementContext::ExpressionstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ExpressionContext* CPP14Parser::ExpressionstatementContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}


size_t CPP14Parser::ExpressionstatementContext::getRuleIndex() const {
  return CPP14Parser::RuleExpressionstatement;
}

antlrcpp::Any CPP14Parser::ExpressionstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitExpressionstatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ExpressionstatementContext* CPP14Parser::expressionstatement() {
  ExpressionstatementContext *_localctx = _tracker.createInstance<ExpressionstatementContext>(_ctx, getState());
  enterRule(_localctx, 94, CPP14Parser::RuleExpressionstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1037);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CPP14Parser::Alignof)
      | (1ULL << CPP14Parser::Auto)
      | (1ULL << CPP14Parser::Bool)
      | (1ULL << CPP14Parser::Char)
      | (1ULL << CPP14Parser::Char16)
      | (1ULL << CPP14Parser::Char32)
      | (1ULL << CPP14Parser::Const_cast)
      | (1ULL << CPP14Parser::Decltype)
      | (1ULL << CPP14Parser::Delete)
      | (1ULL << CPP14Parser::Double)
      | (1ULL << CPP14Parser::Dynamic_cast)
      | (1ULL << CPP14Parser::False)
      | (1ULL << CPP14Parser::Float)
      | (1ULL << CPP14Parser::Int)
      | (1ULL << CPP14Parser::Long)
      | (1ULL << CPP14Parser::New)
      | (1ULL << CPP14Parser::Noexcept)
      | (1ULL << CPP14Parser::Nullptr)
      | (1ULL << CPP14Parser::Operator)
      | (1ULL << CPP14Parser::Reinterpret_cast)
      | (1ULL << CPP14Parser::Short)
      | (1ULL << CPP14Parser::Signed)
      | (1ULL << CPP14Parser::Sizeof)
      | (1ULL << CPP14Parser::Static_cast)
      | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Throw - 64))
      | (1ULL << (CPP14Parser::True - 64))
      | (1ULL << (CPP14Parser::Typeid - 64))
      | (1ULL << (CPP14Parser::Typename - 64))
      | (1ULL << (CPP14Parser::Unsigned - 64))
      | (1ULL << (CPP14Parser::Void - 64))
      | (1ULL << (CPP14Parser::Wchar - 64))
      | (1ULL << (CPP14Parser::LeftParen - 64))
      | (1ULL << (CPP14Parser::LeftBracket - 64))
      | (1ULL << (CPP14Parser::Plus - 64))
      | (1ULL << (CPP14Parser::Minus - 64))
      | (1ULL << (CPP14Parser::Star - 64))
      | (1ULL << (CPP14Parser::And - 64))
      | (1ULL << (CPP14Parser::Or - 64))
      | (1ULL << (CPP14Parser::Tilde - 64))
      | (1ULL << (CPP14Parser::Not - 64))
      | (1ULL << (CPP14Parser::PlusPlus - 64))
      | (1ULL << (CPP14Parser::MinusMinus - 64))
      | (1ULL << (CPP14Parser::Doublecolon - 64))
      | (1ULL << (CPP14Parser::Identifier - 64))
      | (1ULL << (CPP14Parser::Integerliteral - 64)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 132)) & ((1ULL << (CPP14Parser::Characterliteral - 132))
      | (1ULL << (CPP14Parser::Floatingliteral - 132))
      | (1ULL << (CPP14Parser::Stringliteral - 132))
      | (1ULL << (CPP14Parser::Userdefinedintegerliteral - 132))
      | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 132))
      | (1ULL << (CPP14Parser::Userdefinedstringliteral - 132))
      | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 132)))) != 0)) {
      setState(1036);
      expression(0);
    }
    setState(1039);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundstatementContext ------------------------------------------------------------------

CPP14Parser::CompoundstatementContext::CompoundstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::StatementseqContext* CPP14Parser::CompoundstatementContext::statementseq() {
  return getRuleContext<CPP14Parser::StatementseqContext>(0);
}


size_t CPP14Parser::CompoundstatementContext::getRuleIndex() const {
  return CPP14Parser::RuleCompoundstatement;
}

antlrcpp::Any CPP14Parser::CompoundstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitCompoundstatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::CompoundstatementContext* CPP14Parser::compoundstatement() {
  CompoundstatementContext *_localctx = _tracker.createInstance<CompoundstatementContext>(_ctx, getState());
  enterRule(_localctx, 96, CPP14Parser::RuleCompoundstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1041);
    match(CPP14Parser::LeftBrace);
    setState(1043);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CPP14Parser::Alignas)
      | (1ULL << CPP14Parser::Alignof)
      | (1ULL << CPP14Parser::Asm)
      | (1ULL << CPP14Parser::Auto)
      | (1ULL << CPP14Parser::Bool)
      | (1ULL << CPP14Parser::Break)
      | (1ULL << CPP14Parser::Case)
      | (1ULL << CPP14Parser::Char)
      | (1ULL << CPP14Parser::Char16)
      | (1ULL << CPP14Parser::Char32)
      | (1ULL << CPP14Parser::Class)
      | (1ULL << CPP14Parser::Const)
      | (1ULL << CPP14Parser::Constexpr)
      | (1ULL << CPP14Parser::Const_cast)
      | (1ULL << CPP14Parser::Continue)
      | (1ULL << CPP14Parser::Decltype)
      | (1ULL << CPP14Parser::Default)
      | (1ULL << CPP14Parser::Delete)
      | (1ULL << CPP14Parser::Do)
      | (1ULL << CPP14Parser::Double)
      | (1ULL << CPP14Parser::Dynamic_cast)
      | (1ULL << CPP14Parser::Enum)
      | (1ULL << CPP14Parser::Explicit)
      | (1ULL << CPP14Parser::Extern)
      | (1ULL << CPP14Parser::False)
      | (1ULL << CPP14Parser::Float)
      | (1ULL << CPP14Parser::For)
      | (1ULL << CPP14Parser::Friend)
      | (1ULL << CPP14Parser::Goto)
      | (1ULL << CPP14Parser::If)
      | (1ULL << CPP14Parser::Inline)
      | (1ULL << CPP14Parser::Int)
      | (1ULL << CPP14Parser::Long)
      | (1ULL << CPP14Parser::Mutable)
      | (1ULL << CPP14Parser::Namespace)
      | (1ULL << CPP14Parser::New)
      | (1ULL << CPP14Parser::Noexcept)
      | (1ULL << CPP14Parser::Nullptr)
      | (1ULL << CPP14Parser::Operator)
      | (1ULL << CPP14Parser::Register)
      | (1ULL << CPP14Parser::Reinterpret_cast)
      | (1ULL << CPP14Parser::Return)
      | (1ULL << CPP14Parser::Short)
      | (1ULL << CPP14Parser::Signed)
      | (1ULL << CPP14Parser::Sizeof)
      | (1ULL << CPP14Parser::Static)
      | (1ULL << CPP14Parser::Static_assert)
      | (1ULL << CPP14Parser::Static_cast)
      | (1ULL << CPP14Parser::Struct)
      | (1ULL << CPP14Parser::Switch)
      | (1ULL << CPP14Parser::This)
      | (1ULL << CPP14Parser::Thread_local))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Throw - 64))
      | (1ULL << (CPP14Parser::True - 64))
      | (1ULL << (CPP14Parser::Try - 64))
      | (1ULL << (CPP14Parser::Typedef - 64))
      | (1ULL << (CPP14Parser::Typeid - 64))
      | (1ULL << (CPP14Parser::Typename - 64))
      | (1ULL << (CPP14Parser::Union - 64))
      | (1ULL << (CPP14Parser::Unsigned - 64))
      | (1ULL << (CPP14Parser::Using - 64))
      | (1ULL << (CPP14Parser::Virtual - 64))
      | (1ULL << (CPP14Parser::Void - 64))
      | (1ULL << (CPP14Parser::Volatile - 64))
      | (1ULL << (CPP14Parser::Wchar - 64))
      | (1ULL << (CPP14Parser::While - 64))
      | (1ULL << (CPP14Parser::LeftParen - 64))
      | (1ULL << (CPP14Parser::LeftBracket - 64))
      | (1ULL << (CPP14Parser::LeftBrace - 64))
      | (1ULL << (CPP14Parser::Plus - 64))
      | (1ULL << (CPP14Parser::Minus - 64))
      | (1ULL << (CPP14Parser::Star - 64))
      | (1ULL << (CPP14Parser::And - 64))
      | (1ULL << (CPP14Parser::Or - 64))
      | (1ULL << (CPP14Parser::Tilde - 64))
      | (1ULL << (CPP14Parser::Not - 64))
      | (1ULL << (CPP14Parser::AndAnd - 64))
      | (1ULL << (CPP14Parser::PlusPlus - 64))
      | (1ULL << (CPP14Parser::MinusMinus - 64))
      | (1ULL << (CPP14Parser::Doublecolon - 64))
      | (1ULL << (CPP14Parser::Semi - 64))
      | (1ULL << (CPP14Parser::Ellipsis - 64))
      | (1ULL << (CPP14Parser::Identifier - 64))
      | (1ULL << (CPP14Parser::Integerliteral - 64)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 132)) & ((1ULL << (CPP14Parser::Characterliteral - 132))
      | (1ULL << (CPP14Parser::Floatingliteral - 132))
      | (1ULL << (CPP14Parser::Stringliteral - 132))
      | (1ULL << (CPP14Parser::Userdefinedintegerliteral - 132))
      | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 132))
      | (1ULL << (CPP14Parser::Userdefinedstringliteral - 132))
      | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 132)))) != 0)) {
      setState(1042);
      statementseq(0);
    }
    setState(1045);
    match(CPP14Parser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementseqContext ------------------------------------------------------------------

CPP14Parser::StatementseqContext::StatementseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::StatementContext* CPP14Parser::StatementseqContext::statement() {
  return getRuleContext<CPP14Parser::StatementContext>(0);
}

CPP14Parser::StatementseqContext* CPP14Parser::StatementseqContext::statementseq() {
  return getRuleContext<CPP14Parser::StatementseqContext>(0);
}


size_t CPP14Parser::StatementseqContext::getRuleIndex() const {
  return CPP14Parser::RuleStatementseq;
}

antlrcpp::Any CPP14Parser::StatementseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitStatementseq(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::StatementseqContext* CPP14Parser::statementseq() {
   return statementseq(0);
}

CPP14Parser::StatementseqContext* CPP14Parser::statementseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::StatementseqContext *_localctx = _tracker.createInstance<StatementseqContext>(_ctx, parentState);
  CPP14Parser::StatementseqContext *previousContext = _localctx;
  size_t startState = 98;
  enterRecursionRule(_localctx, 98, CPP14Parser::RuleStatementseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1048);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(1054);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StatementseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatementseq);
        setState(1050);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1051);
        statement(); 
      }
      setState(1056);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- SelectionstatementContext ------------------------------------------------------------------

CPP14Parser::SelectionstatementContext::SelectionstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::SelectionstatementContext::If() {
  return getToken(CPP14Parser::If, 0);
}

CPP14Parser::ConditionContext* CPP14Parser::SelectionstatementContext::condition() {
  return getRuleContext<CPP14Parser::ConditionContext>(0);
}

std::vector<CPP14Parser::StatementContext *> CPP14Parser::SelectionstatementContext::statement() {
  return getRuleContexts<CPP14Parser::StatementContext>();
}

CPP14Parser::StatementContext* CPP14Parser::SelectionstatementContext::statement(size_t i) {
  return getRuleContext<CPP14Parser::StatementContext>(i);
}

tree::TerminalNode* CPP14Parser::SelectionstatementContext::Else() {
  return getToken(CPP14Parser::Else, 0);
}

tree::TerminalNode* CPP14Parser::SelectionstatementContext::Switch() {
  return getToken(CPP14Parser::Switch, 0);
}


size_t CPP14Parser::SelectionstatementContext::getRuleIndex() const {
  return CPP14Parser::RuleSelectionstatement;
}

antlrcpp::Any CPP14Parser::SelectionstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitSelectionstatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::SelectionstatementContext* CPP14Parser::selectionstatement() {
  SelectionstatementContext *_localctx = _tracker.createInstance<SelectionstatementContext>(_ctx, getState());
  enterRule(_localctx, 100, CPP14Parser::RuleSelectionstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1077);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1057);
      match(CPP14Parser::If);
      setState(1058);
      match(CPP14Parser::LeftParen);
      setState(1059);
      condition();
      setState(1060);
      match(CPP14Parser::RightParen);
      setState(1061);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1063);
      match(CPP14Parser::If);
      setState(1064);
      match(CPP14Parser::LeftParen);
      setState(1065);
      condition();
      setState(1066);
      match(CPP14Parser::RightParen);
      setState(1067);
      statement();
      setState(1068);
      match(CPP14Parser::Else);
      setState(1069);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1071);
      match(CPP14Parser::Switch);
      setState(1072);
      match(CPP14Parser::LeftParen);
      setState(1073);
      condition();
      setState(1074);
      match(CPP14Parser::RightParen);
      setState(1075);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

CPP14Parser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ExpressionContext* CPP14Parser::ConditionContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

CPP14Parser::DeclspecifierseqContext* CPP14Parser::ConditionContext::declspecifierseq() {
  return getRuleContext<CPP14Parser::DeclspecifierseqContext>(0);
}

CPP14Parser::DeclaratorContext* CPP14Parser::ConditionContext::declarator() {
  return getRuleContext<CPP14Parser::DeclaratorContext>(0);
}

CPP14Parser::InitializerclauseContext* CPP14Parser::ConditionContext::initializerclause() {
  return getRuleContext<CPP14Parser::InitializerclauseContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::ConditionContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::BracedinitlistContext* CPP14Parser::ConditionContext::bracedinitlist() {
  return getRuleContext<CPP14Parser::BracedinitlistContext>(0);
}


size_t CPP14Parser::ConditionContext::getRuleIndex() const {
  return CPP14Parser::RuleCondition;
}

antlrcpp::Any CPP14Parser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ConditionContext* CPP14Parser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 102, CPP14Parser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1095);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1079);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1081);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(1080);
        attributespecifierseq(0);
      }
      setState(1083);
      declspecifierseq();
      setState(1084);
      declarator();
      setState(1085);
      match(CPP14Parser::Assign);
      setState(1086);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1089);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(1088);
        attributespecifierseq(0);
      }
      setState(1091);
      declspecifierseq();
      setState(1092);
      declarator();
      setState(1093);
      bracedinitlist();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterationstatementContext ------------------------------------------------------------------

CPP14Parser::IterationstatementContext::IterationstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::IterationstatementContext::While() {
  return getToken(CPP14Parser::While, 0);
}

CPP14Parser::ConditionContext* CPP14Parser::IterationstatementContext::condition() {
  return getRuleContext<CPP14Parser::ConditionContext>(0);
}

CPP14Parser::StatementContext* CPP14Parser::IterationstatementContext::statement() {
  return getRuleContext<CPP14Parser::StatementContext>(0);
}

tree::TerminalNode* CPP14Parser::IterationstatementContext::Do() {
  return getToken(CPP14Parser::Do, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::IterationstatementContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::IterationstatementContext::For() {
  return getToken(CPP14Parser::For, 0);
}

CPP14Parser::ForinitstatementContext* CPP14Parser::IterationstatementContext::forinitstatement() {
  return getRuleContext<CPP14Parser::ForinitstatementContext>(0);
}

CPP14Parser::ForrangedeclarationContext* CPP14Parser::IterationstatementContext::forrangedeclaration() {
  return getRuleContext<CPP14Parser::ForrangedeclarationContext>(0);
}

CPP14Parser::ForrangeinitializerContext* CPP14Parser::IterationstatementContext::forrangeinitializer() {
  return getRuleContext<CPP14Parser::ForrangeinitializerContext>(0);
}


size_t CPP14Parser::IterationstatementContext::getRuleIndex() const {
  return CPP14Parser::RuleIterationstatement;
}

antlrcpp::Any CPP14Parser::IterationstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitIterationstatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::IterationstatementContext* CPP14Parser::iterationstatement() {
  IterationstatementContext *_localctx = _tracker.createInstance<IterationstatementContext>(_ctx, getState());
  enterRule(_localctx, 104, CPP14Parser::RuleIterationstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1132);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1097);
      match(CPP14Parser::While);
      setState(1098);
      match(CPP14Parser::LeftParen);
      setState(1099);
      condition();
      setState(1100);
      match(CPP14Parser::RightParen);
      setState(1101);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1103);
      match(CPP14Parser::Do);
      setState(1104);
      statement();
      setState(1105);
      match(CPP14Parser::While);
      setState(1106);
      match(CPP14Parser::LeftParen);
      setState(1107);
      expression(0);
      setState(1108);
      match(CPP14Parser::RightParen);
      setState(1109);
      match(CPP14Parser::Semi);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1111);
      match(CPP14Parser::For);
      setState(1112);
      match(CPP14Parser::LeftParen);
      setState(1113);
      forinitstatement();
      setState(1115);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CPP14Parser::Alignas)
        | (1ULL << CPP14Parser::Alignof)
        | (1ULL << CPP14Parser::Auto)
        | (1ULL << CPP14Parser::Bool)
        | (1ULL << CPP14Parser::Char)
        | (1ULL << CPP14Parser::Char16)
        | (1ULL << CPP14Parser::Char32)
        | (1ULL << CPP14Parser::Class)
        | (1ULL << CPP14Parser::Const)
        | (1ULL << CPP14Parser::Constexpr)
        | (1ULL << CPP14Parser::Const_cast)
        | (1ULL << CPP14Parser::Decltype)
        | (1ULL << CPP14Parser::Delete)
        | (1ULL << CPP14Parser::Double)
        | (1ULL << CPP14Parser::Dynamic_cast)
        | (1ULL << CPP14Parser::Enum)
        | (1ULL << CPP14Parser::Explicit)
        | (1ULL << CPP14Parser::Extern)
        | (1ULL << CPP14Parser::False)
        | (1ULL << CPP14Parser::Float)
        | (1ULL << CPP14Parser::Friend)
        | (1ULL << CPP14Parser::Inline)
        | (1ULL << CPP14Parser::Int)
        | (1ULL << CPP14Parser::Long)
        | (1ULL << CPP14Parser::Mutable)
        | (1ULL << CPP14Parser::New)
        | (1ULL << CPP14Parser::Noexcept)
        | (1ULL << CPP14Parser::Nullptr)
        | (1ULL << CPP14Parser::Operator)
        | (1ULL << CPP14Parser::Register)
        | (1ULL << CPP14Parser::Reinterpret_cast)
        | (1ULL << CPP14Parser::Short)
        | (1ULL << CPP14Parser::Signed)
        | (1ULL << CPP14Parser::Sizeof)
        | (1ULL << CPP14Parser::Static)
        | (1ULL << CPP14Parser::Static_cast)
        | (1ULL << CPP14Parser::Struct)
        | (1ULL << CPP14Parser::This)
        | (1ULL << CPP14Parser::Thread_local))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Throw - 64))
        | (1ULL << (CPP14Parser::True - 64))
        | (1ULL << (CPP14Parser::Typedef - 64))
        | (1ULL << (CPP14Parser::Typeid - 64))
        | (1ULL << (CPP14Parser::Typename - 64))
        | (1ULL << (CPP14Parser::Union - 64))
        | (1ULL << (CPP14Parser::Unsigned - 64))
        | (1ULL << (CPP14Parser::Virtual - 64))
        | (1ULL << (CPP14Parser::Void - 64))
        | (1ULL << (CPP14Parser::Volatile - 64))
        | (1ULL << (CPP14Parser::Wchar - 64))
        | (1ULL << (CPP14Parser::LeftParen - 64))
        | (1ULL << (CPP14Parser::LeftBracket - 64))
        | (1ULL << (CPP14Parser::Plus - 64))
        | (1ULL << (CPP14Parser::Minus - 64))
        | (1ULL << (CPP14Parser::Star - 64))
        | (1ULL << (CPP14Parser::And - 64))
        | (1ULL << (CPP14Parser::Or - 64))
        | (1ULL << (CPP14Parser::Tilde - 64))
        | (1ULL << (CPP14Parser::Not - 64))
        | (1ULL << (CPP14Parser::PlusPlus - 64))
        | (1ULL << (CPP14Parser::MinusMinus - 64))
        | (1ULL << (CPP14Parser::Doublecolon - 64))
        | (1ULL << (CPP14Parser::Identifier - 64))
        | (1ULL << (CPP14Parser::Integerliteral - 64)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 132)) & ((1ULL << (CPP14Parser::Characterliteral - 132))
        | (1ULL << (CPP14Parser::Floatingliteral - 132))
        | (1ULL << (CPP14Parser::Stringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedintegerliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedstringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 132)))) != 0)) {
        setState(1114);
        condition();
      }
      setState(1117);
      match(CPP14Parser::Semi);
      setState(1119);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CPP14Parser::Alignof)
        | (1ULL << CPP14Parser::Auto)
        | (1ULL << CPP14Parser::Bool)
        | (1ULL << CPP14Parser::Char)
        | (1ULL << CPP14Parser::Char16)
        | (1ULL << CPP14Parser::Char32)
        | (1ULL << CPP14Parser::Const_cast)
        | (1ULL << CPP14Parser::Decltype)
        | (1ULL << CPP14Parser::Delete)
        | (1ULL << CPP14Parser::Double)
        | (1ULL << CPP14Parser::Dynamic_cast)
        | (1ULL << CPP14Parser::False)
        | (1ULL << CPP14Parser::Float)
        | (1ULL << CPP14Parser::Int)
        | (1ULL << CPP14Parser::Long)
        | (1ULL << CPP14Parser::New)
        | (1ULL << CPP14Parser::Noexcept)
        | (1ULL << CPP14Parser::Nullptr)
        | (1ULL << CPP14Parser::Operator)
        | (1ULL << CPP14Parser::Reinterpret_cast)
        | (1ULL << CPP14Parser::Short)
        | (1ULL << CPP14Parser::Signed)
        | (1ULL << CPP14Parser::Sizeof)
        | (1ULL << CPP14Parser::Static_cast)
        | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Throw - 64))
        | (1ULL << (CPP14Parser::True - 64))
        | (1ULL << (CPP14Parser::Typeid - 64))
        | (1ULL << (CPP14Parser::Typename - 64))
        | (1ULL << (CPP14Parser::Unsigned - 64))
        | (1ULL << (CPP14Parser::Void - 64))
        | (1ULL << (CPP14Parser::Wchar - 64))
        | (1ULL << (CPP14Parser::LeftParen - 64))
        | (1ULL << (CPP14Parser::LeftBracket - 64))
        | (1ULL << (CPP14Parser::Plus - 64))
        | (1ULL << (CPP14Parser::Minus - 64))
        | (1ULL << (CPP14Parser::Star - 64))
        | (1ULL << (CPP14Parser::And - 64))
        | (1ULL << (CPP14Parser::Or - 64))
        | (1ULL << (CPP14Parser::Tilde - 64))
        | (1ULL << (CPP14Parser::Not - 64))
        | (1ULL << (CPP14Parser::PlusPlus - 64))
        | (1ULL << (CPP14Parser::MinusMinus - 64))
        | (1ULL << (CPP14Parser::Doublecolon - 64))
        | (1ULL << (CPP14Parser::Identifier - 64))
        | (1ULL << (CPP14Parser::Integerliteral - 64)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 132)) & ((1ULL << (CPP14Parser::Characterliteral - 132))
        | (1ULL << (CPP14Parser::Floatingliteral - 132))
        | (1ULL << (CPP14Parser::Stringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedintegerliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedstringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 132)))) != 0)) {
        setState(1118);
        expression(0);
      }
      setState(1121);
      match(CPP14Parser::RightParen);
      setState(1122);
      statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1124);
      match(CPP14Parser::For);
      setState(1125);
      match(CPP14Parser::LeftParen);
      setState(1126);
      forrangedeclaration();
      setState(1127);
      match(CPP14Parser::Colon);
      setState(1128);
      forrangeinitializer();
      setState(1129);
      match(CPP14Parser::RightParen);
      setState(1130);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForinitstatementContext ------------------------------------------------------------------

CPP14Parser::ForinitstatementContext::ForinitstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ExpressionstatementContext* CPP14Parser::ForinitstatementContext::expressionstatement() {
  return getRuleContext<CPP14Parser::ExpressionstatementContext>(0);
}

CPP14Parser::SimpledeclarationContext* CPP14Parser::ForinitstatementContext::simpledeclaration() {
  return getRuleContext<CPP14Parser::SimpledeclarationContext>(0);
}


size_t CPP14Parser::ForinitstatementContext::getRuleIndex() const {
  return CPP14Parser::RuleForinitstatement;
}

antlrcpp::Any CPP14Parser::ForinitstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitForinitstatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ForinitstatementContext* CPP14Parser::forinitstatement() {
  ForinitstatementContext *_localctx = _tracker.createInstance<ForinitstatementContext>(_ctx, getState());
  enterRule(_localctx, 106, CPP14Parser::RuleForinitstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1136);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1134);
      expressionstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1135);
      simpledeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForrangedeclarationContext ------------------------------------------------------------------

CPP14Parser::ForrangedeclarationContext::ForrangedeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DeclspecifierseqContext* CPP14Parser::ForrangedeclarationContext::declspecifierseq() {
  return getRuleContext<CPP14Parser::DeclspecifierseqContext>(0);
}

CPP14Parser::DeclaratorContext* CPP14Parser::ForrangedeclarationContext::declarator() {
  return getRuleContext<CPP14Parser::DeclaratorContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::ForrangedeclarationContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}


size_t CPP14Parser::ForrangedeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleForrangedeclaration;
}

antlrcpp::Any CPP14Parser::ForrangedeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitForrangedeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ForrangedeclarationContext* CPP14Parser::forrangedeclaration() {
  ForrangedeclarationContext *_localctx = _tracker.createInstance<ForrangedeclarationContext>(_ctx, getState());
  enterRule(_localctx, 108, CPP14Parser::RuleForrangedeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1139);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
      setState(1138);
      attributespecifierseq(0);
    }
    setState(1141);
    declspecifierseq();
    setState(1142);
    declarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForrangeinitializerContext ------------------------------------------------------------------

CPP14Parser::ForrangeinitializerContext::ForrangeinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ExpressionContext* CPP14Parser::ForrangeinitializerContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

CPP14Parser::BracedinitlistContext* CPP14Parser::ForrangeinitializerContext::bracedinitlist() {
  return getRuleContext<CPP14Parser::BracedinitlistContext>(0);
}


size_t CPP14Parser::ForrangeinitializerContext::getRuleIndex() const {
  return CPP14Parser::RuleForrangeinitializer;
}

antlrcpp::Any CPP14Parser::ForrangeinitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitForrangeinitializer(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ForrangeinitializerContext* CPP14Parser::forrangeinitializer() {
  ForrangeinitializerContext *_localctx = _tracker.createInstance<ForrangeinitializerContext>(_ctx, getState());
  enterRule(_localctx, 110, CPP14Parser::RuleForrangeinitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1146);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Alignof:
      case CPP14Parser::Auto:
      case CPP14Parser::Bool:
      case CPP14Parser::Char:
      case CPP14Parser::Char16:
      case CPP14Parser::Char32:
      case CPP14Parser::Const_cast:
      case CPP14Parser::Decltype:
      case CPP14Parser::Delete:
      case CPP14Parser::Double:
      case CPP14Parser::Dynamic_cast:
      case CPP14Parser::False:
      case CPP14Parser::Float:
      case CPP14Parser::Int:
      case CPP14Parser::Long:
      case CPP14Parser::New:
      case CPP14Parser::Noexcept:
      case CPP14Parser::Nullptr:
      case CPP14Parser::Operator:
      case CPP14Parser::Reinterpret_cast:
      case CPP14Parser::Short:
      case CPP14Parser::Signed:
      case CPP14Parser::Sizeof:
      case CPP14Parser::Static_cast:
      case CPP14Parser::This:
      case CPP14Parser::Throw:
      case CPP14Parser::True:
      case CPP14Parser::Typeid:
      case CPP14Parser::Typename:
      case CPP14Parser::Unsigned:
      case CPP14Parser::Void:
      case CPP14Parser::Wchar:
      case CPP14Parser::LeftParen:
      case CPP14Parser::LeftBracket:
      case CPP14Parser::Plus:
      case CPP14Parser::Minus:
      case CPP14Parser::Star:
      case CPP14Parser::And:
      case CPP14Parser::Or:
      case CPP14Parser::Tilde:
      case CPP14Parser::Not:
      case CPP14Parser::PlusPlus:
      case CPP14Parser::MinusMinus:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier:
      case CPP14Parser::Integerliteral:
      case CPP14Parser::Characterliteral:
      case CPP14Parser::Floatingliteral:
      case CPP14Parser::Stringliteral:
      case CPP14Parser::Userdefinedintegerliteral:
      case CPP14Parser::Userdefinedfloatingliteral:
      case CPP14Parser::Userdefinedstringliteral:
      case CPP14Parser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 1);
        setState(1144);
        expression(0);
        break;
      }

      case CPP14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1145);
        bracedinitlist();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpstatementContext ------------------------------------------------------------------

CPP14Parser::JumpstatementContext::JumpstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::JumpstatementContext::Break() {
  return getToken(CPP14Parser::Break, 0);
}

tree::TerminalNode* CPP14Parser::JumpstatementContext::Continue() {
  return getToken(CPP14Parser::Continue, 0);
}

tree::TerminalNode* CPP14Parser::JumpstatementContext::Return() {
  return getToken(CPP14Parser::Return, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::JumpstatementContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

CPP14Parser::BracedinitlistContext* CPP14Parser::JumpstatementContext::bracedinitlist() {
  return getRuleContext<CPP14Parser::BracedinitlistContext>(0);
}

tree::TerminalNode* CPP14Parser::JumpstatementContext::Goto() {
  return getToken(CPP14Parser::Goto, 0);
}

tree::TerminalNode* CPP14Parser::JumpstatementContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::JumpstatementContext::getRuleIndex() const {
  return CPP14Parser::RuleJumpstatement;
}

antlrcpp::Any CPP14Parser::JumpstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitJumpstatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::JumpstatementContext* CPP14Parser::jumpstatement() {
  JumpstatementContext *_localctx = _tracker.createInstance<JumpstatementContext>(_ctx, getState());
  enterRule(_localctx, 112, CPP14Parser::RuleJumpstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1164);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1148);
      match(CPP14Parser::Break);
      setState(1149);
      match(CPP14Parser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1150);
      match(CPP14Parser::Continue);
      setState(1151);
      match(CPP14Parser::Semi);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1152);
      match(CPP14Parser::Return);
      setState(1154);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CPP14Parser::Alignof)
        | (1ULL << CPP14Parser::Auto)
        | (1ULL << CPP14Parser::Bool)
        | (1ULL << CPP14Parser::Char)
        | (1ULL << CPP14Parser::Char16)
        | (1ULL << CPP14Parser::Char32)
        | (1ULL << CPP14Parser::Const_cast)
        | (1ULL << CPP14Parser::Decltype)
        | (1ULL << CPP14Parser::Delete)
        | (1ULL << CPP14Parser::Double)
        | (1ULL << CPP14Parser::Dynamic_cast)
        | (1ULL << CPP14Parser::False)
        | (1ULL << CPP14Parser::Float)
        | (1ULL << CPP14Parser::Int)
        | (1ULL << CPP14Parser::Long)
        | (1ULL << CPP14Parser::New)
        | (1ULL << CPP14Parser::Noexcept)
        | (1ULL << CPP14Parser::Nullptr)
        | (1ULL << CPP14Parser::Operator)
        | (1ULL << CPP14Parser::Reinterpret_cast)
        | (1ULL << CPP14Parser::Short)
        | (1ULL << CPP14Parser::Signed)
        | (1ULL << CPP14Parser::Sizeof)
        | (1ULL << CPP14Parser::Static_cast)
        | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Throw - 64))
        | (1ULL << (CPP14Parser::True - 64))
        | (1ULL << (CPP14Parser::Typeid - 64))
        | (1ULL << (CPP14Parser::Typename - 64))
        | (1ULL << (CPP14Parser::Unsigned - 64))
        | (1ULL << (CPP14Parser::Void - 64))
        | (1ULL << (CPP14Parser::Wchar - 64))
        | (1ULL << (CPP14Parser::LeftParen - 64))
        | (1ULL << (CPP14Parser::LeftBracket - 64))
        | (1ULL << (CPP14Parser::Plus - 64))
        | (1ULL << (CPP14Parser::Minus - 64))
        | (1ULL << (CPP14Parser::Star - 64))
        | (1ULL << (CPP14Parser::And - 64))
        | (1ULL << (CPP14Parser::Or - 64))
        | (1ULL << (CPP14Parser::Tilde - 64))
        | (1ULL << (CPP14Parser::Not - 64))
        | (1ULL << (CPP14Parser::PlusPlus - 64))
        | (1ULL << (CPP14Parser::MinusMinus - 64))
        | (1ULL << (CPP14Parser::Doublecolon - 64))
        | (1ULL << (CPP14Parser::Identifier - 64))
        | (1ULL << (CPP14Parser::Integerliteral - 64)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 132)) & ((1ULL << (CPP14Parser::Characterliteral - 132))
        | (1ULL << (CPP14Parser::Floatingliteral - 132))
        | (1ULL << (CPP14Parser::Stringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedintegerliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedstringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 132)))) != 0)) {
        setState(1153);
        expression(0);
      }
      setState(1156);
      match(CPP14Parser::Semi);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1157);
      match(CPP14Parser::Return);
      setState(1158);
      bracedinitlist();
      setState(1159);
      match(CPP14Parser::Semi);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1161);
      match(CPP14Parser::Goto);
      setState(1162);
      match(CPP14Parser::Identifier);
      setState(1163);
      match(CPP14Parser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationstatementContext ------------------------------------------------------------------

CPP14Parser::DeclarationstatementContext::DeclarationstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::BlockdeclarationContext* CPP14Parser::DeclarationstatementContext::blockdeclaration() {
  return getRuleContext<CPP14Parser::BlockdeclarationContext>(0);
}


size_t CPP14Parser::DeclarationstatementContext::getRuleIndex() const {
  return CPP14Parser::RuleDeclarationstatement;
}

antlrcpp::Any CPP14Parser::DeclarationstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitDeclarationstatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DeclarationstatementContext* CPP14Parser::declarationstatement() {
  DeclarationstatementContext *_localctx = _tracker.createInstance<DeclarationstatementContext>(_ctx, getState());
  enterRule(_localctx, 114, CPP14Parser::RuleDeclarationstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1166);
    blockdeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationseqContext ------------------------------------------------------------------

CPP14Parser::DeclarationseqContext::DeclarationseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DeclarationContext* CPP14Parser::DeclarationseqContext::declaration() {
  return getRuleContext<CPP14Parser::DeclarationContext>(0);
}

CPP14Parser::DeclarationseqContext* CPP14Parser::DeclarationseqContext::declarationseq() {
  return getRuleContext<CPP14Parser::DeclarationseqContext>(0);
}


size_t CPP14Parser::DeclarationseqContext::getRuleIndex() const {
  return CPP14Parser::RuleDeclarationseq;
}

antlrcpp::Any CPP14Parser::DeclarationseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitDeclarationseq(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::DeclarationseqContext* CPP14Parser::declarationseq() {
   return declarationseq(0);
}

CPP14Parser::DeclarationseqContext* CPP14Parser::declarationseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::DeclarationseqContext *_localctx = _tracker.createInstance<DeclarationseqContext>(_ctx, parentState);
  CPP14Parser::DeclarationseqContext *previousContext = _localctx;
  size_t startState = 116;
  enterRecursionRule(_localctx, 116, CPP14Parser::RuleDeclarationseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1169);
    declaration();
    _ctx->stop = _input->LT(-1);
    setState(1175);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<DeclarationseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleDeclarationseq);
        setState(1171);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1172);
        declaration(); 
      }
      setState(1177);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

CPP14Parser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::BlockdeclarationContext* CPP14Parser::DeclarationContext::blockdeclaration() {
  return getRuleContext<CPP14Parser::BlockdeclarationContext>(0);
}

CPP14Parser::FunctiondefinitionContext* CPP14Parser::DeclarationContext::functiondefinition() {
  return getRuleContext<CPP14Parser::FunctiondefinitionContext>(0);
}

CPP14Parser::TemplatedeclarationContext* CPP14Parser::DeclarationContext::templatedeclaration() {
  return getRuleContext<CPP14Parser::TemplatedeclarationContext>(0);
}

CPP14Parser::ExplicitinstantiationContext* CPP14Parser::DeclarationContext::explicitinstantiation() {
  return getRuleContext<CPP14Parser::ExplicitinstantiationContext>(0);
}

CPP14Parser::ExplicitspecializationContext* CPP14Parser::DeclarationContext::explicitspecialization() {
  return getRuleContext<CPP14Parser::ExplicitspecializationContext>(0);
}

CPP14Parser::LinkagespecificationContext* CPP14Parser::DeclarationContext::linkagespecification() {
  return getRuleContext<CPP14Parser::LinkagespecificationContext>(0);
}

CPP14Parser::NamespacedefinitionContext* CPP14Parser::DeclarationContext::namespacedefinition() {
  return getRuleContext<CPP14Parser::NamespacedefinitionContext>(0);
}

CPP14Parser::EmptydeclarationContext* CPP14Parser::DeclarationContext::emptydeclaration() {
  return getRuleContext<CPP14Parser::EmptydeclarationContext>(0);
}

CPP14Parser::AttributedeclarationContext* CPP14Parser::DeclarationContext::attributedeclaration() {
  return getRuleContext<CPP14Parser::AttributedeclarationContext>(0);
}


size_t CPP14Parser::DeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleDeclaration;
}

antlrcpp::Any CPP14Parser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DeclarationContext* CPP14Parser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 118, CPP14Parser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1187);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1178);
      blockdeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1179);
      functiondefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1180);
      templatedeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1181);
      explicitinstantiation();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1182);
      explicitspecialization();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1183);
      linkagespecification();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1184);
      namespacedefinition();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1185);
      emptydeclaration();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1186);
      attributedeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockdeclarationContext ------------------------------------------------------------------

CPP14Parser::BlockdeclarationContext::BlockdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::SimpledeclarationContext* CPP14Parser::BlockdeclarationContext::simpledeclaration() {
  return getRuleContext<CPP14Parser::SimpledeclarationContext>(0);
}

CPP14Parser::AsmdefinitionContext* CPP14Parser::BlockdeclarationContext::asmdefinition() {
  return getRuleContext<CPP14Parser::AsmdefinitionContext>(0);
}

CPP14Parser::NamespacealiasdefinitionContext* CPP14Parser::BlockdeclarationContext::namespacealiasdefinition() {
  return getRuleContext<CPP14Parser::NamespacealiasdefinitionContext>(0);
}

CPP14Parser::UsingdeclarationContext* CPP14Parser::BlockdeclarationContext::usingdeclaration() {
  return getRuleContext<CPP14Parser::UsingdeclarationContext>(0);
}

CPP14Parser::UsingdirectiveContext* CPP14Parser::BlockdeclarationContext::usingdirective() {
  return getRuleContext<CPP14Parser::UsingdirectiveContext>(0);
}

CPP14Parser::Static_assertdeclarationContext* CPP14Parser::BlockdeclarationContext::static_assertdeclaration() {
  return getRuleContext<CPP14Parser::Static_assertdeclarationContext>(0);
}

CPP14Parser::AliasdeclarationContext* CPP14Parser::BlockdeclarationContext::aliasdeclaration() {
  return getRuleContext<CPP14Parser::AliasdeclarationContext>(0);
}

CPP14Parser::OpaqueenumdeclarationContext* CPP14Parser::BlockdeclarationContext::opaqueenumdeclaration() {
  return getRuleContext<CPP14Parser::OpaqueenumdeclarationContext>(0);
}


size_t CPP14Parser::BlockdeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleBlockdeclaration;
}

antlrcpp::Any CPP14Parser::BlockdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitBlockdeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::BlockdeclarationContext* CPP14Parser::blockdeclaration() {
  BlockdeclarationContext *_localctx = _tracker.createInstance<BlockdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 120, CPP14Parser::RuleBlockdeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1197);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1189);
      simpledeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1190);
      asmdefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1191);
      namespacealiasdefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1192);
      usingdeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1193);
      usingdirective();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1194);
      static_assertdeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1195);
      aliasdeclaration();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1196);
      opaqueenumdeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasdeclarationContext ------------------------------------------------------------------

CPP14Parser::AliasdeclarationContext::AliasdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::AliasdeclarationContext::Using() {
  return getToken(CPP14Parser::Using, 0);
}

tree::TerminalNode* CPP14Parser::AliasdeclarationContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::ThetypeidContext* CPP14Parser::AliasdeclarationContext::thetypeid() {
  return getRuleContext<CPP14Parser::ThetypeidContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::AliasdeclarationContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}


size_t CPP14Parser::AliasdeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleAliasdeclaration;
}

antlrcpp::Any CPP14Parser::AliasdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAliasdeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AliasdeclarationContext* CPP14Parser::aliasdeclaration() {
  AliasdeclarationContext *_localctx = _tracker.createInstance<AliasdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 122, CPP14Parser::RuleAliasdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1199);
    match(CPP14Parser::Using);
    setState(1200);
    match(CPP14Parser::Identifier);
    setState(1202);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
      setState(1201);
      attributespecifierseq(0);
    }
    setState(1204);
    match(CPP14Parser::Assign);
    setState(1205);
    thetypeid();
    setState(1206);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpledeclarationContext ------------------------------------------------------------------

CPP14Parser::SimpledeclarationContext::SimpledeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DeclspecifierseqContext* CPP14Parser::SimpledeclarationContext::declspecifierseq() {
  return getRuleContext<CPP14Parser::DeclspecifierseqContext>(0);
}

CPP14Parser::InitdeclaratorlistContext* CPP14Parser::SimpledeclarationContext::initdeclaratorlist() {
  return getRuleContext<CPP14Parser::InitdeclaratorlistContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::SimpledeclarationContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}


size_t CPP14Parser::SimpledeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleSimpledeclaration;
}

antlrcpp::Any CPP14Parser::SimpledeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitSimpledeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::SimpledeclarationContext* CPP14Parser::simpledeclaration() {
  SimpledeclarationContext *_localctx = _tracker.createInstance<SimpledeclarationContext>(_ctx, getState());
  enterRule(_localctx, 124, CPP14Parser::RuleSimpledeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1222);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Auto:
      case CPP14Parser::Bool:
      case CPP14Parser::Char:
      case CPP14Parser::Char16:
      case CPP14Parser::Char32:
      case CPP14Parser::Class:
      case CPP14Parser::Const:
      case CPP14Parser::Constexpr:
      case CPP14Parser::Decltype:
      case CPP14Parser::Double:
      case CPP14Parser::Enum:
      case CPP14Parser::Explicit:
      case CPP14Parser::Extern:
      case CPP14Parser::Float:
      case CPP14Parser::Friend:
      case CPP14Parser::Inline:
      case CPP14Parser::Int:
      case CPP14Parser::Long:
      case CPP14Parser::Mutable:
      case CPP14Parser::Operator:
      case CPP14Parser::Register:
      case CPP14Parser::Short:
      case CPP14Parser::Signed:
      case CPP14Parser::Static:
      case CPP14Parser::Struct:
      case CPP14Parser::Thread_local:
      case CPP14Parser::Typedef:
      case CPP14Parser::Typename:
      case CPP14Parser::Union:
      case CPP14Parser::Unsigned:
      case CPP14Parser::Virtual:
      case CPP14Parser::Void:
      case CPP14Parser::Volatile:
      case CPP14Parser::Wchar:
      case CPP14Parser::LeftParen:
      case CPP14Parser::Star:
      case CPP14Parser::And:
      case CPP14Parser::Tilde:
      case CPP14Parser::AndAnd:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Semi:
      case CPP14Parser::Ellipsis:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1209);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
        case 1: {
          setState(1208);
          declspecifierseq();
          break;
        }

        }
        setState(1212);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::Decltype

        || _la == CPP14Parser::Operator || ((((_la - 78) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 78)) & ((1ULL << (CPP14Parser::LeftParen - 78))
          | (1ULL << (CPP14Parser::Star - 78))
          | (1ULL << (CPP14Parser::And - 78))
          | (1ULL << (CPP14Parser::Tilde - 78))
          | (1ULL << (CPP14Parser::AndAnd - 78))
          | (1ULL << (CPP14Parser::Doublecolon - 78))
          | (1ULL << (CPP14Parser::Ellipsis - 78))
          | (1ULL << (CPP14Parser::Identifier - 78)))) != 0)) {
          setState(1211);
          initdeclaratorlist(0);
        }
        setState(1214);
        match(CPP14Parser::Semi);
        break;
      }

      case CPP14Parser::Alignas:
      case CPP14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(1215);
        attributespecifierseq(0);
        setState(1217);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx)) {
        case 1: {
          setState(1216);
          declspecifierseq();
          break;
        }

        }
        setState(1219);
        initdeclaratorlist(0);
        setState(1220);
        match(CPP14Parser::Semi);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Static_assertdeclarationContext ------------------------------------------------------------------

CPP14Parser::Static_assertdeclarationContext::Static_assertdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::Static_assertdeclarationContext::Static_assert() {
  return getToken(CPP14Parser::Static_assert, 0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::Static_assertdeclarationContext::constantexpression() {
  return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::Static_assertdeclarationContext::Stringliteral() {
  return getToken(CPP14Parser::Stringliteral, 0);
}


size_t CPP14Parser::Static_assertdeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleStatic_assertdeclaration;
}

antlrcpp::Any CPP14Parser::Static_assertdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitStatic_assertdeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::Static_assertdeclarationContext* CPP14Parser::static_assertdeclaration() {
  Static_assertdeclarationContext *_localctx = _tracker.createInstance<Static_assertdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 126, CPP14Parser::RuleStatic_assertdeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1224);
    match(CPP14Parser::Static_assert);
    setState(1225);
    match(CPP14Parser::LeftParen);
    setState(1226);
    constantexpression();
    setState(1227);
    match(CPP14Parser::Comma);
    setState(1228);
    match(CPP14Parser::Stringliteral);
    setState(1229);
    match(CPP14Parser::RightParen);
    setState(1230);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptydeclarationContext ------------------------------------------------------------------

CPP14Parser::EmptydeclarationContext::EmptydeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CPP14Parser::EmptydeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleEmptydeclaration;
}

antlrcpp::Any CPP14Parser::EmptydeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitEmptydeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EmptydeclarationContext* CPP14Parser::emptydeclaration() {
  EmptydeclarationContext *_localctx = _tracker.createInstance<EmptydeclarationContext>(_ctx, getState());
  enterRule(_localctx, 128, CPP14Parser::RuleEmptydeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1232);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributedeclarationContext ------------------------------------------------------------------

CPP14Parser::AttributedeclarationContext::AttributedeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::AttributedeclarationContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}


size_t CPP14Parser::AttributedeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleAttributedeclaration;
}

antlrcpp::Any CPP14Parser::AttributedeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAttributedeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AttributedeclarationContext* CPP14Parser::attributedeclaration() {
  AttributedeclarationContext *_localctx = _tracker.createInstance<AttributedeclarationContext>(_ctx, getState());
  enterRule(_localctx, 130, CPP14Parser::RuleAttributedeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1234);
    attributespecifierseq(0);
    setState(1235);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclspecifierContext ------------------------------------------------------------------

CPP14Parser::DeclspecifierContext::DeclspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::StorageclassspecifierContext* CPP14Parser::DeclspecifierContext::storageclassspecifier() {
  return getRuleContext<CPP14Parser::StorageclassspecifierContext>(0);
}

CPP14Parser::TypespecifierContext* CPP14Parser::DeclspecifierContext::typespecifier() {
  return getRuleContext<CPP14Parser::TypespecifierContext>(0);
}

CPP14Parser::FunctionspecifierContext* CPP14Parser::DeclspecifierContext::functionspecifier() {
  return getRuleContext<CPP14Parser::FunctionspecifierContext>(0);
}

tree::TerminalNode* CPP14Parser::DeclspecifierContext::Friend() {
  return getToken(CPP14Parser::Friend, 0);
}

tree::TerminalNode* CPP14Parser::DeclspecifierContext::Typedef() {
  return getToken(CPP14Parser::Typedef, 0);
}

tree::TerminalNode* CPP14Parser::DeclspecifierContext::Constexpr() {
  return getToken(CPP14Parser::Constexpr, 0);
}


size_t CPP14Parser::DeclspecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleDeclspecifier;
}

antlrcpp::Any CPP14Parser::DeclspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitDeclspecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DeclspecifierContext* CPP14Parser::declspecifier() {
  DeclspecifierContext *_localctx = _tracker.createInstance<DeclspecifierContext>(_ctx, getState());
  enterRule(_localctx, 132, CPP14Parser::RuleDeclspecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1243);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Extern:
      case CPP14Parser::Mutable:
      case CPP14Parser::Register:
      case CPP14Parser::Static:
      case CPP14Parser::Thread_local: {
        enterOuterAlt(_localctx, 1);
        setState(1237);
        storageclassspecifier();
        break;
      }

      case CPP14Parser::Auto:
      case CPP14Parser::Bool:
      case CPP14Parser::Char:
      case CPP14Parser::Char16:
      case CPP14Parser::Char32:
      case CPP14Parser::Class:
      case CPP14Parser::Const:
      case CPP14Parser::Decltype:
      case CPP14Parser::Double:
      case CPP14Parser::Enum:
      case CPP14Parser::Float:
      case CPP14Parser::Int:
      case CPP14Parser::Long:
      case CPP14Parser::Short:
      case CPP14Parser::Signed:
      case CPP14Parser::Struct:
      case CPP14Parser::Typename:
      case CPP14Parser::Union:
      case CPP14Parser::Unsigned:
      case CPP14Parser::Void:
      case CPP14Parser::Volatile:
      case CPP14Parser::Wchar:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1238);
        typespecifier();
        break;
      }

      case CPP14Parser::Explicit:
      case CPP14Parser::Inline:
      case CPP14Parser::Virtual: {
        enterOuterAlt(_localctx, 3);
        setState(1239);
        functionspecifier();
        break;
      }

      case CPP14Parser::Friend: {
        enterOuterAlt(_localctx, 4);
        setState(1240);
        match(CPP14Parser::Friend);
        break;
      }

      case CPP14Parser::Typedef: {
        enterOuterAlt(_localctx, 5);
        setState(1241);
        match(CPP14Parser::Typedef);
        break;
      }

      case CPP14Parser::Constexpr: {
        enterOuterAlt(_localctx, 6);
        setState(1242);
        match(CPP14Parser::Constexpr);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclspecifierseqContext ------------------------------------------------------------------

CPP14Parser::DeclspecifierseqContext::DeclspecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DeclspecifierContext* CPP14Parser::DeclspecifierseqContext::declspecifier() {
  return getRuleContext<CPP14Parser::DeclspecifierContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::DeclspecifierseqContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::DeclspecifierseqContext* CPP14Parser::DeclspecifierseqContext::declspecifierseq() {
  return getRuleContext<CPP14Parser::DeclspecifierseqContext>(0);
}


size_t CPP14Parser::DeclspecifierseqContext::getRuleIndex() const {
  return CPP14Parser::RuleDeclspecifierseq;
}

antlrcpp::Any CPP14Parser::DeclspecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitDeclspecifierseq(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DeclspecifierseqContext* CPP14Parser::declspecifierseq() {
  DeclspecifierseqContext *_localctx = _tracker.createInstance<DeclspecifierseqContext>(_ctx, getState());
  enterRule(_localctx, 134, CPP14Parser::RuleDeclspecifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1252);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1245);
      declspecifier();
      setState(1247);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx)) {
      case 1: {
        setState(1246);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1249);
      declspecifier();
      setState(1250);
      declspecifierseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StorageclassspecifierContext ------------------------------------------------------------------

CPP14Parser::StorageclassspecifierContext::StorageclassspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::StorageclassspecifierContext::Register() {
  return getToken(CPP14Parser::Register, 0);
}

tree::TerminalNode* CPP14Parser::StorageclassspecifierContext::Static() {
  return getToken(CPP14Parser::Static, 0);
}

tree::TerminalNode* CPP14Parser::StorageclassspecifierContext::Thread_local() {
  return getToken(CPP14Parser::Thread_local, 0);
}

tree::TerminalNode* CPP14Parser::StorageclassspecifierContext::Extern() {
  return getToken(CPP14Parser::Extern, 0);
}

tree::TerminalNode* CPP14Parser::StorageclassspecifierContext::Mutable() {
  return getToken(CPP14Parser::Mutable, 0);
}


size_t CPP14Parser::StorageclassspecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleStorageclassspecifier;
}

antlrcpp::Any CPP14Parser::StorageclassspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitStorageclassspecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::StorageclassspecifierContext* CPP14Parser::storageclassspecifier() {
  StorageclassspecifierContext *_localctx = _tracker.createInstance<StorageclassspecifierContext>(_ctx, getState());
  enterRule(_localctx, 136, CPP14Parser::RuleStorageclassspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1254);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CPP14Parser::Extern)
      | (1ULL << CPP14Parser::Mutable)
      | (1ULL << CPP14Parser::Register)
      | (1ULL << CPP14Parser::Static)
      | (1ULL << CPP14Parser::Thread_local))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionspecifierContext ------------------------------------------------------------------

CPP14Parser::FunctionspecifierContext::FunctionspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::FunctionspecifierContext::Inline() {
  return getToken(CPP14Parser::Inline, 0);
}

tree::TerminalNode* CPP14Parser::FunctionspecifierContext::Virtual() {
  return getToken(CPP14Parser::Virtual, 0);
}

tree::TerminalNode* CPP14Parser::FunctionspecifierContext::Explicit() {
  return getToken(CPP14Parser::Explicit, 0);
}


size_t CPP14Parser::FunctionspecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleFunctionspecifier;
}

antlrcpp::Any CPP14Parser::FunctionspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitFunctionspecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::FunctionspecifierContext* CPP14Parser::functionspecifier() {
  FunctionspecifierContext *_localctx = _tracker.createInstance<FunctionspecifierContext>(_ctx, getState());
  enterRule(_localctx, 138, CPP14Parser::RuleFunctionspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1256);
    _la = _input->LA(1);
    if (!(((((_la - 27) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 27)) & ((1ULL << (CPP14Parser::Explicit - 27))
      | (1ULL << (CPP14Parser::Inline - 27))
      | (1ULL << (CPP14Parser::Virtual - 27)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypedefnameContext ------------------------------------------------------------------

CPP14Parser::TypedefnameContext::TypedefnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TypedefnameContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::TypedefnameContext::getRuleIndex() const {
  return CPP14Parser::RuleTypedefname;
}

antlrcpp::Any CPP14Parser::TypedefnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTypedefname(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TypedefnameContext* CPP14Parser::typedefname() {
  TypedefnameContext *_localctx = _tracker.createInstance<TypedefnameContext>(_ctx, getState());
  enterRule(_localctx, 140, CPP14Parser::RuleTypedefname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1258);
    match(CPP14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypespecifierContext ------------------------------------------------------------------

CPP14Parser::TypespecifierContext::TypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TrailingtypespecifierContext* CPP14Parser::TypespecifierContext::trailingtypespecifier() {
  return getRuleContext<CPP14Parser::TrailingtypespecifierContext>(0);
}

CPP14Parser::ClassspecifierContext* CPP14Parser::TypespecifierContext::classspecifier() {
  return getRuleContext<CPP14Parser::ClassspecifierContext>(0);
}

CPP14Parser::EnumspecifierContext* CPP14Parser::TypespecifierContext::enumspecifier() {
  return getRuleContext<CPP14Parser::EnumspecifierContext>(0);
}


size_t CPP14Parser::TypespecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleTypespecifier;
}

antlrcpp::Any CPP14Parser::TypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTypespecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TypespecifierContext* CPP14Parser::typespecifier() {
  TypespecifierContext *_localctx = _tracker.createInstance<TypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 142, CPP14Parser::RuleTypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1263);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1260);
      trailingtypespecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1261);
      classspecifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1262);
      enumspecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingtypespecifierContext ------------------------------------------------------------------

CPP14Parser::TrailingtypespecifierContext::TrailingtypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::SimpletypespecifierContext* CPP14Parser::TrailingtypespecifierContext::simpletypespecifier() {
  return getRuleContext<CPP14Parser::SimpletypespecifierContext>(0);
}

CPP14Parser::ElaboratedtypespecifierContext* CPP14Parser::TrailingtypespecifierContext::elaboratedtypespecifier() {
  return getRuleContext<CPP14Parser::ElaboratedtypespecifierContext>(0);
}

CPP14Parser::TypenamespecifierContext* CPP14Parser::TrailingtypespecifierContext::typenamespecifier() {
  return getRuleContext<CPP14Parser::TypenamespecifierContext>(0);
}

CPP14Parser::CvqualifierContext* CPP14Parser::TrailingtypespecifierContext::cvqualifier() {
  return getRuleContext<CPP14Parser::CvqualifierContext>(0);
}


size_t CPP14Parser::TrailingtypespecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleTrailingtypespecifier;
}

antlrcpp::Any CPP14Parser::TrailingtypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTrailingtypespecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TrailingtypespecifierContext* CPP14Parser::trailingtypespecifier() {
  TrailingtypespecifierContext *_localctx = _tracker.createInstance<TrailingtypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 144, CPP14Parser::RuleTrailingtypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1269);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Auto:
      case CPP14Parser::Bool:
      case CPP14Parser::Char:
      case CPP14Parser::Char16:
      case CPP14Parser::Char32:
      case CPP14Parser::Decltype:
      case CPP14Parser::Double:
      case CPP14Parser::Float:
      case CPP14Parser::Int:
      case CPP14Parser::Long:
      case CPP14Parser::Short:
      case CPP14Parser::Signed:
      case CPP14Parser::Unsigned:
      case CPP14Parser::Void:
      case CPP14Parser::Wchar:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1265);
        simpletypespecifier();
        break;
      }

      case CPP14Parser::Class:
      case CPP14Parser::Enum:
      case CPP14Parser::Struct:
      case CPP14Parser::Union: {
        enterOuterAlt(_localctx, 2);
        setState(1266);
        elaboratedtypespecifier();
        break;
      }

      case CPP14Parser::Typename: {
        enterOuterAlt(_localctx, 3);
        setState(1267);
        typenamespecifier();
        break;
      }

      case CPP14Parser::Const:
      case CPP14Parser::Volatile: {
        enterOuterAlt(_localctx, 4);
        setState(1268);
        cvqualifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypespecifierseqContext ------------------------------------------------------------------

CPP14Parser::TypespecifierseqContext::TypespecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TypespecifierContext* CPP14Parser::TypespecifierseqContext::typespecifier() {
  return getRuleContext<CPP14Parser::TypespecifierContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::TypespecifierseqContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::TypespecifierseqContext* CPP14Parser::TypespecifierseqContext::typespecifierseq() {
  return getRuleContext<CPP14Parser::TypespecifierseqContext>(0);
}


size_t CPP14Parser::TypespecifierseqContext::getRuleIndex() const {
  return CPP14Parser::RuleTypespecifierseq;
}

antlrcpp::Any CPP14Parser::TypespecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTypespecifierseq(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TypespecifierseqContext* CPP14Parser::typespecifierseq() {
  TypespecifierseqContext *_localctx = _tracker.createInstance<TypespecifierseqContext>(_ctx, getState());
  enterRule(_localctx, 146, CPP14Parser::RuleTypespecifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1278);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1271);
      typespecifier();
      setState(1273);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx)) {
      case 1: {
        setState(1272);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1275);
      typespecifier();
      setState(1276);
      typespecifierseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingtypespecifierseqContext ------------------------------------------------------------------

CPP14Parser::TrailingtypespecifierseqContext::TrailingtypespecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TrailingtypespecifierContext* CPP14Parser::TrailingtypespecifierseqContext::trailingtypespecifier() {
  return getRuleContext<CPP14Parser::TrailingtypespecifierContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::TrailingtypespecifierseqContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::TrailingtypespecifierseqContext* CPP14Parser::TrailingtypespecifierseqContext::trailingtypespecifierseq() {
  return getRuleContext<CPP14Parser::TrailingtypespecifierseqContext>(0);
}


size_t CPP14Parser::TrailingtypespecifierseqContext::getRuleIndex() const {
  return CPP14Parser::RuleTrailingtypespecifierseq;
}

antlrcpp::Any CPP14Parser::TrailingtypespecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTrailingtypespecifierseq(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TrailingtypespecifierseqContext* CPP14Parser::trailingtypespecifierseq() {
  TrailingtypespecifierseqContext *_localctx = _tracker.createInstance<TrailingtypespecifierseqContext>(_ctx, getState());
  enterRule(_localctx, 148, CPP14Parser::RuleTrailingtypespecifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1287);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1280);
      trailingtypespecifier();
      setState(1282);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx)) {
      case 1: {
        setState(1281);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1284);
      trailingtypespecifier();
      setState(1285);
      trailingtypespecifierseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpletypespecifierContext ------------------------------------------------------------------

CPP14Parser::SimpletypespecifierContext::SimpletypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ThetypenameContext* CPP14Parser::SimpletypespecifierContext::thetypename() {
  return getRuleContext<CPP14Parser::ThetypenameContext>(0);
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::SimpletypespecifierContext::nestednamespecifier() {
  return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::SimpletypespecifierContext::simpletemplateid() {
  return getRuleContext<CPP14Parser::SimpletemplateidContext>(0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Char() {
  return getToken(CPP14Parser::Char, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Char16() {
  return getToken(CPP14Parser::Char16, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Char32() {
  return getToken(CPP14Parser::Char32, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Wchar() {
  return getToken(CPP14Parser::Wchar, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Bool() {
  return getToken(CPP14Parser::Bool, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Short() {
  return getToken(CPP14Parser::Short, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Int() {
  return getToken(CPP14Parser::Int, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Long() {
  return getToken(CPP14Parser::Long, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Signed() {
  return getToken(CPP14Parser::Signed, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Unsigned() {
  return getToken(CPP14Parser::Unsigned, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Float() {
  return getToken(CPP14Parser::Float, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Double() {
  return getToken(CPP14Parser::Double, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Void() {
  return getToken(CPP14Parser::Void, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Auto() {
  return getToken(CPP14Parser::Auto, 0);
}

CPP14Parser::DecltypespecifierContext* CPP14Parser::SimpletypespecifierContext::decltypespecifier() {
  return getRuleContext<CPP14Parser::DecltypespecifierContext>(0);
}


size_t CPP14Parser::SimpletypespecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleSimpletypespecifier;
}

antlrcpp::Any CPP14Parser::SimpletypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitSimpletypespecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::SimpletypespecifierContext* CPP14Parser::simpletypespecifier() {
  SimpletypespecifierContext *_localctx = _tracker.createInstance<SimpletypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 150, CPP14Parser::RuleSimpletypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1312);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1290);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
      case 1: {
        setState(1289);
        nestednamespecifier(0);
        break;
      }

      }
      setState(1292);
      thetypename();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1293);
      nestednamespecifier(0);
      setState(1294);
      match(CPP14Parser::Template);
      setState(1295);
      simpletemplateid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1297);
      match(CPP14Parser::Char);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1298);
      match(CPP14Parser::Char16);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1299);
      match(CPP14Parser::Char32);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1300);
      match(CPP14Parser::Wchar);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1301);
      match(CPP14Parser::Bool);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1302);
      match(CPP14Parser::Short);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1303);
      match(CPP14Parser::Int);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1304);
      match(CPP14Parser::Long);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1305);
      match(CPP14Parser::Signed);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1306);
      match(CPP14Parser::Unsigned);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1307);
      match(CPP14Parser::Float);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1308);
      match(CPP14Parser::Double);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1309);
      match(CPP14Parser::Void);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1310);
      match(CPP14Parser::Auto);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1311);
      decltypespecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThetypenameContext ------------------------------------------------------------------

CPP14Parser::ThetypenameContext::ThetypenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ClassnameContext* CPP14Parser::ThetypenameContext::classname() {
  return getRuleContext<CPP14Parser::ClassnameContext>(0);
}

CPP14Parser::EnumnameContext* CPP14Parser::ThetypenameContext::enumname() {
  return getRuleContext<CPP14Parser::EnumnameContext>(0);
}

CPP14Parser::TypedefnameContext* CPP14Parser::ThetypenameContext::typedefname() {
  return getRuleContext<CPP14Parser::TypedefnameContext>(0);
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::ThetypenameContext::simpletemplateid() {
  return getRuleContext<CPP14Parser::SimpletemplateidContext>(0);
}


size_t CPP14Parser::ThetypenameContext::getRuleIndex() const {
  return CPP14Parser::RuleThetypename;
}

antlrcpp::Any CPP14Parser::ThetypenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitThetypename(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ThetypenameContext* CPP14Parser::thetypename() {
  ThetypenameContext *_localctx = _tracker.createInstance<ThetypenameContext>(_ctx, getState());
  enterRule(_localctx, 152, CPP14Parser::RuleThetypename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1318);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1314);
      classname();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1315);
      enumname();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1316);
      typedefname();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1317);
      simpletemplateid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecltypespecifierContext ------------------------------------------------------------------

CPP14Parser::DecltypespecifierContext::DecltypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::DecltypespecifierContext::Decltype() {
  return getToken(CPP14Parser::Decltype, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::DecltypespecifierContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::DecltypespecifierContext::Auto() {
  return getToken(CPP14Parser::Auto, 0);
}


size_t CPP14Parser::DecltypespecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleDecltypespecifier;
}

antlrcpp::Any CPP14Parser::DecltypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitDecltypespecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DecltypespecifierContext* CPP14Parser::decltypespecifier() {
  DecltypespecifierContext *_localctx = _tracker.createInstance<DecltypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 154, CPP14Parser::RuleDecltypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1329);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1320);
      match(CPP14Parser::Decltype);
      setState(1321);
      match(CPP14Parser::LeftParen);
      setState(1322);
      expression(0);
      setState(1323);
      match(CPP14Parser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1325);
      match(CPP14Parser::Decltype);
      setState(1326);
      match(CPP14Parser::LeftParen);
      setState(1327);
      match(CPP14Parser::Auto);
      setState(1328);
      match(CPP14Parser::RightParen);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElaboratedtypespecifierContext ------------------------------------------------------------------

CPP14Parser::ElaboratedtypespecifierContext::ElaboratedtypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ClasskeyContext* CPP14Parser::ElaboratedtypespecifierContext::classkey() {
  return getRuleContext<CPP14Parser::ClasskeyContext>(0);
}

tree::TerminalNode* CPP14Parser::ElaboratedtypespecifierContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::ElaboratedtypespecifierContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::ElaboratedtypespecifierContext::nestednamespecifier() {
  return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::ElaboratedtypespecifierContext::simpletemplateid() {
  return getRuleContext<CPP14Parser::SimpletemplateidContext>(0);
}

tree::TerminalNode* CPP14Parser::ElaboratedtypespecifierContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}

tree::TerminalNode* CPP14Parser::ElaboratedtypespecifierContext::Enum() {
  return getToken(CPP14Parser::Enum, 0);
}


size_t CPP14Parser::ElaboratedtypespecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleElaboratedtypespecifier;
}

antlrcpp::Any CPP14Parser::ElaboratedtypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitElaboratedtypespecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ElaboratedtypespecifierContext* CPP14Parser::elaboratedtypespecifier() {
  ElaboratedtypespecifierContext *_localctx = _tracker.createInstance<ElaboratedtypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 156, CPP14Parser::RuleElaboratedtypespecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1355);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1331);
      classkey();
      setState(1333);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(1332);
        attributespecifierseq(0);
      }
      setState(1336);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx)) {
      case 1: {
        setState(1335);
        nestednamespecifier(0);
        break;
      }

      }
      setState(1338);
      match(CPP14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1340);
      classkey();
      setState(1341);
      simpletemplateid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1343);
      classkey();
      setState(1344);
      nestednamespecifier(0);
      setState(1346);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Template) {
        setState(1345);
        match(CPP14Parser::Template);
      }
      setState(1348);
      simpletemplateid();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1350);
      match(CPP14Parser::Enum);
      setState(1352);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 124, _ctx)) {
      case 1: {
        setState(1351);
        nestednamespecifier(0);
        break;
      }

      }
      setState(1354);
      match(CPP14Parser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumnameContext ------------------------------------------------------------------

CPP14Parser::EnumnameContext::EnumnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::EnumnameContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::EnumnameContext::getRuleIndex() const {
  return CPP14Parser::RuleEnumname;
}

antlrcpp::Any CPP14Parser::EnumnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitEnumname(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EnumnameContext* CPP14Parser::enumname() {
  EnumnameContext *_localctx = _tracker.createInstance<EnumnameContext>(_ctx, getState());
  enterRule(_localctx, 158, CPP14Parser::RuleEnumname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1357);
    match(CPP14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumspecifierContext ------------------------------------------------------------------

CPP14Parser::EnumspecifierContext::EnumspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::EnumheadContext* CPP14Parser::EnumspecifierContext::enumhead() {
  return getRuleContext<CPP14Parser::EnumheadContext>(0);
}

CPP14Parser::EnumeratorlistContext* CPP14Parser::EnumspecifierContext::enumeratorlist() {
  return getRuleContext<CPP14Parser::EnumeratorlistContext>(0);
}


size_t CPP14Parser::EnumspecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleEnumspecifier;
}

antlrcpp::Any CPP14Parser::EnumspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitEnumspecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EnumspecifierContext* CPP14Parser::enumspecifier() {
  EnumspecifierContext *_localctx = _tracker.createInstance<EnumspecifierContext>(_ctx, getState());
  enterRule(_localctx, 160, CPP14Parser::RuleEnumspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1372);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 127, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1359);
      enumhead();
      setState(1360);
      match(CPP14Parser::LeftBrace);
      setState(1362);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Identifier) {
        setState(1361);
        enumeratorlist(0);
      }
      setState(1364);
      match(CPP14Parser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1366);
      enumhead();
      setState(1367);
      match(CPP14Parser::LeftBrace);
      setState(1368);
      enumeratorlist(0);
      setState(1369);
      match(CPP14Parser::Comma);
      setState(1370);
      match(CPP14Parser::RightBrace);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumheadContext ------------------------------------------------------------------

CPP14Parser::EnumheadContext::EnumheadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::EnumkeyContext* CPP14Parser::EnumheadContext::enumkey() {
  return getRuleContext<CPP14Parser::EnumkeyContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::EnumheadContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* CPP14Parser::EnumheadContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::EnumbaseContext* CPP14Parser::EnumheadContext::enumbase() {
  return getRuleContext<CPP14Parser::EnumbaseContext>(0);
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::EnumheadContext::nestednamespecifier() {
  return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);
}


size_t CPP14Parser::EnumheadContext::getRuleIndex() const {
  return CPP14Parser::RuleEnumhead;
}

antlrcpp::Any CPP14Parser::EnumheadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitEnumhead(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EnumheadContext* CPP14Parser::enumhead() {
  EnumheadContext *_localctx = _tracker.createInstance<EnumheadContext>(_ctx, getState());
  enterRule(_localctx, 162, CPP14Parser::RuleEnumhead);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1393);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1374);
      enumkey();
      setState(1376);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(1375);
        attributespecifierseq(0);
      }
      setState(1379);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Identifier) {
        setState(1378);
        match(CPP14Parser::Identifier);
      }
      setState(1382);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Colon) {
        setState(1381);
        enumbase();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1384);
      enumkey();
      setState(1386);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(1385);
        attributespecifierseq(0);
      }
      setState(1388);
      nestednamespecifier(0);
      setState(1389);
      match(CPP14Parser::Identifier);
      setState(1391);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Colon) {
        setState(1390);
        enumbase();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpaqueenumdeclarationContext ------------------------------------------------------------------

CPP14Parser::OpaqueenumdeclarationContext::OpaqueenumdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::EnumkeyContext* CPP14Parser::OpaqueenumdeclarationContext::enumkey() {
  return getRuleContext<CPP14Parser::EnumkeyContext>(0);
}

tree::TerminalNode* CPP14Parser::OpaqueenumdeclarationContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::OpaqueenumdeclarationContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::EnumbaseContext* CPP14Parser::OpaqueenumdeclarationContext::enumbase() {
  return getRuleContext<CPP14Parser::EnumbaseContext>(0);
}


size_t CPP14Parser::OpaqueenumdeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleOpaqueenumdeclaration;
}

antlrcpp::Any CPP14Parser::OpaqueenumdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitOpaqueenumdeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::OpaqueenumdeclarationContext* CPP14Parser::opaqueenumdeclaration() {
  OpaqueenumdeclarationContext *_localctx = _tracker.createInstance<OpaqueenumdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 164, CPP14Parser::RuleOpaqueenumdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1395);
    enumkey();
    setState(1397);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
      setState(1396);
      attributespecifierseq(0);
    }
    setState(1399);
    match(CPP14Parser::Identifier);
    setState(1401);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Colon) {
      setState(1400);
      enumbase();
    }
    setState(1403);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumkeyContext ------------------------------------------------------------------

CPP14Parser::EnumkeyContext::EnumkeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::EnumkeyContext::Enum() {
  return getToken(CPP14Parser::Enum, 0);
}

tree::TerminalNode* CPP14Parser::EnumkeyContext::Class() {
  return getToken(CPP14Parser::Class, 0);
}

tree::TerminalNode* CPP14Parser::EnumkeyContext::Struct() {
  return getToken(CPP14Parser::Struct, 0);
}


size_t CPP14Parser::EnumkeyContext::getRuleIndex() const {
  return CPP14Parser::RuleEnumkey;
}

antlrcpp::Any CPP14Parser::EnumkeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitEnumkey(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EnumkeyContext* CPP14Parser::enumkey() {
  EnumkeyContext *_localctx = _tracker.createInstance<EnumkeyContext>(_ctx, getState());
  enterRule(_localctx, 166, CPP14Parser::RuleEnumkey);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1410);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1405);
      match(CPP14Parser::Enum);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1406);
      match(CPP14Parser::Enum);
      setState(1407);
      match(CPP14Parser::Class);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1408);
      match(CPP14Parser::Enum);
      setState(1409);
      match(CPP14Parser::Struct);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumbaseContext ------------------------------------------------------------------

CPP14Parser::EnumbaseContext::EnumbaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TypespecifierseqContext* CPP14Parser::EnumbaseContext::typespecifierseq() {
  return getRuleContext<CPP14Parser::TypespecifierseqContext>(0);
}


size_t CPP14Parser::EnumbaseContext::getRuleIndex() const {
  return CPP14Parser::RuleEnumbase;
}

antlrcpp::Any CPP14Parser::EnumbaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitEnumbase(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EnumbaseContext* CPP14Parser::enumbase() {
  EnumbaseContext *_localctx = _tracker.createInstance<EnumbaseContext>(_ctx, getState());
  enterRule(_localctx, 168, CPP14Parser::RuleEnumbase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1412);
    match(CPP14Parser::Colon);
    setState(1413);
    typespecifierseq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorlistContext ------------------------------------------------------------------

CPP14Parser::EnumeratorlistContext::EnumeratorlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::EnumeratordefinitionContext* CPP14Parser::EnumeratorlistContext::enumeratordefinition() {
  return getRuleContext<CPP14Parser::EnumeratordefinitionContext>(0);
}

CPP14Parser::EnumeratorlistContext* CPP14Parser::EnumeratorlistContext::enumeratorlist() {
  return getRuleContext<CPP14Parser::EnumeratorlistContext>(0);
}


size_t CPP14Parser::EnumeratorlistContext::getRuleIndex() const {
  return CPP14Parser::RuleEnumeratorlist;
}

antlrcpp::Any CPP14Parser::EnumeratorlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitEnumeratorlist(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::EnumeratorlistContext* CPP14Parser::enumeratorlist() {
   return enumeratorlist(0);
}

CPP14Parser::EnumeratorlistContext* CPP14Parser::enumeratorlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::EnumeratorlistContext *_localctx = _tracker.createInstance<EnumeratorlistContext>(_ctx, parentState);
  CPP14Parser::EnumeratorlistContext *previousContext = _localctx;
  size_t startState = 170;
  enterRecursionRule(_localctx, 170, CPP14Parser::RuleEnumeratorlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1416);
    enumeratordefinition();
    _ctx->stop = _input->LT(-1);
    setState(1423);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EnumeratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEnumeratorlist);
        setState(1418);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1419);
        match(CPP14Parser::Comma);
        setState(1420);
        enumeratordefinition(); 
      }
      setState(1425);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EnumeratordefinitionContext ------------------------------------------------------------------

CPP14Parser::EnumeratordefinitionContext::EnumeratordefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::EnumeratorContext* CPP14Parser::EnumeratordefinitionContext::enumerator() {
  return getRuleContext<CPP14Parser::EnumeratorContext>(0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::EnumeratordefinitionContext::constantexpression() {
  return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);
}


size_t CPP14Parser::EnumeratordefinitionContext::getRuleIndex() const {
  return CPP14Parser::RuleEnumeratordefinition;
}

antlrcpp::Any CPP14Parser::EnumeratordefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitEnumeratordefinition(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EnumeratordefinitionContext* CPP14Parser::enumeratordefinition() {
  EnumeratordefinitionContext *_localctx = _tracker.createInstance<EnumeratordefinitionContext>(_ctx, getState());
  enterRule(_localctx, 172, CPP14Parser::RuleEnumeratordefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1431);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 138, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1426);
      enumerator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1427);
      enumerator();
      setState(1428);
      match(CPP14Parser::Assign);
      setState(1429);
      constantexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorContext ------------------------------------------------------------------

CPP14Parser::EnumeratorContext::EnumeratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::EnumeratorContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::EnumeratorContext::getRuleIndex() const {
  return CPP14Parser::RuleEnumerator;
}

antlrcpp::Any CPP14Parser::EnumeratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitEnumerator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EnumeratorContext* CPP14Parser::enumerator() {
  EnumeratorContext *_localctx = _tracker.createInstance<EnumeratorContext>(_ctx, getState());
  enterRule(_localctx, 174, CPP14Parser::RuleEnumerator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1433);
    match(CPP14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacenameContext ------------------------------------------------------------------

CPP14Parser::NamespacenameContext::NamespacenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::OriginalnamespacenameContext* CPP14Parser::NamespacenameContext::originalnamespacename() {
  return getRuleContext<CPP14Parser::OriginalnamespacenameContext>(0);
}

CPP14Parser::NamespacealiasContext* CPP14Parser::NamespacenameContext::namespacealias() {
  return getRuleContext<CPP14Parser::NamespacealiasContext>(0);
}


size_t CPP14Parser::NamespacenameContext::getRuleIndex() const {
  return CPP14Parser::RuleNamespacename;
}

antlrcpp::Any CPP14Parser::NamespacenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNamespacename(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NamespacenameContext* CPP14Parser::namespacename() {
  NamespacenameContext *_localctx = _tracker.createInstance<NamespacenameContext>(_ctx, getState());
  enterRule(_localctx, 176, CPP14Parser::RuleNamespacename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1437);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1435);
      originalnamespacename();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1436);
      namespacealias();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OriginalnamespacenameContext ------------------------------------------------------------------

CPP14Parser::OriginalnamespacenameContext::OriginalnamespacenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::OriginalnamespacenameContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::OriginalnamespacenameContext::getRuleIndex() const {
  return CPP14Parser::RuleOriginalnamespacename;
}

antlrcpp::Any CPP14Parser::OriginalnamespacenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitOriginalnamespacename(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::OriginalnamespacenameContext* CPP14Parser::originalnamespacename() {
  OriginalnamespacenameContext *_localctx = _tracker.createInstance<OriginalnamespacenameContext>(_ctx, getState());
  enterRule(_localctx, 178, CPP14Parser::RuleOriginalnamespacename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1439);
    match(CPP14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacedefinitionContext ------------------------------------------------------------------

CPP14Parser::NamespacedefinitionContext::NamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::NamednamespacedefinitionContext* CPP14Parser::NamespacedefinitionContext::namednamespacedefinition() {
  return getRuleContext<CPP14Parser::NamednamespacedefinitionContext>(0);
}

CPP14Parser::UnnamednamespacedefinitionContext* CPP14Parser::NamespacedefinitionContext::unnamednamespacedefinition() {
  return getRuleContext<CPP14Parser::UnnamednamespacedefinitionContext>(0);
}


size_t CPP14Parser::NamespacedefinitionContext::getRuleIndex() const {
  return CPP14Parser::RuleNamespacedefinition;
}

antlrcpp::Any CPP14Parser::NamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NamespacedefinitionContext* CPP14Parser::namespacedefinition() {
  NamespacedefinitionContext *_localctx = _tracker.createInstance<NamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 180, CPP14Parser::RuleNamespacedefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1443);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 140, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1441);
      namednamespacedefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1442);
      unnamednamespacedefinition();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamednamespacedefinitionContext ------------------------------------------------------------------

CPP14Parser::NamednamespacedefinitionContext::NamednamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::OriginalnamespacedefinitionContext* CPP14Parser::NamednamespacedefinitionContext::originalnamespacedefinition() {
  return getRuleContext<CPP14Parser::OriginalnamespacedefinitionContext>(0);
}

CPP14Parser::ExtensionnamespacedefinitionContext* CPP14Parser::NamednamespacedefinitionContext::extensionnamespacedefinition() {
  return getRuleContext<CPP14Parser::ExtensionnamespacedefinitionContext>(0);
}


size_t CPP14Parser::NamednamespacedefinitionContext::getRuleIndex() const {
  return CPP14Parser::RuleNamednamespacedefinition;
}

antlrcpp::Any CPP14Parser::NamednamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNamednamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NamednamespacedefinitionContext* CPP14Parser::namednamespacedefinition() {
  NamednamespacedefinitionContext *_localctx = _tracker.createInstance<NamednamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 182, CPP14Parser::RuleNamednamespacedefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1447);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1445);
      originalnamespacedefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1446);
      extensionnamespacedefinition();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OriginalnamespacedefinitionContext ------------------------------------------------------------------

CPP14Parser::OriginalnamespacedefinitionContext::OriginalnamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::OriginalnamespacedefinitionContext::Namespace() {
  return getToken(CPP14Parser::Namespace, 0);
}

tree::TerminalNode* CPP14Parser::OriginalnamespacedefinitionContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::NamespacebodyContext* CPP14Parser::OriginalnamespacedefinitionContext::namespacebody() {
  return getRuleContext<CPP14Parser::NamespacebodyContext>(0);
}

tree::TerminalNode* CPP14Parser::OriginalnamespacedefinitionContext::Inline() {
  return getToken(CPP14Parser::Inline, 0);
}


size_t CPP14Parser::OriginalnamespacedefinitionContext::getRuleIndex() const {
  return CPP14Parser::RuleOriginalnamespacedefinition;
}

antlrcpp::Any CPP14Parser::OriginalnamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitOriginalnamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::OriginalnamespacedefinitionContext* CPP14Parser::originalnamespacedefinition() {
  OriginalnamespacedefinitionContext *_localctx = _tracker.createInstance<OriginalnamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 184, CPP14Parser::RuleOriginalnamespacedefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1450);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Inline) {
      setState(1449);
      match(CPP14Parser::Inline);
    }
    setState(1452);
    match(CPP14Parser::Namespace);
    setState(1453);
    match(CPP14Parser::Identifier);
    setState(1454);
    match(CPP14Parser::LeftBrace);
    setState(1455);
    namespacebody();
    setState(1456);
    match(CPP14Parser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExtensionnamespacedefinitionContext ------------------------------------------------------------------

CPP14Parser::ExtensionnamespacedefinitionContext::ExtensionnamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ExtensionnamespacedefinitionContext::Namespace() {
  return getToken(CPP14Parser::Namespace, 0);
}

CPP14Parser::OriginalnamespacenameContext* CPP14Parser::ExtensionnamespacedefinitionContext::originalnamespacename() {
  return getRuleContext<CPP14Parser::OriginalnamespacenameContext>(0);
}

CPP14Parser::NamespacebodyContext* CPP14Parser::ExtensionnamespacedefinitionContext::namespacebody() {
  return getRuleContext<CPP14Parser::NamespacebodyContext>(0);
}

tree::TerminalNode* CPP14Parser::ExtensionnamespacedefinitionContext::Inline() {
  return getToken(CPP14Parser::Inline, 0);
}


size_t CPP14Parser::ExtensionnamespacedefinitionContext::getRuleIndex() const {
  return CPP14Parser::RuleExtensionnamespacedefinition;
}

antlrcpp::Any CPP14Parser::ExtensionnamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitExtensionnamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ExtensionnamespacedefinitionContext* CPP14Parser::extensionnamespacedefinition() {
  ExtensionnamespacedefinitionContext *_localctx = _tracker.createInstance<ExtensionnamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 186, CPP14Parser::RuleExtensionnamespacedefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1459);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Inline) {
      setState(1458);
      match(CPP14Parser::Inline);
    }
    setState(1461);
    match(CPP14Parser::Namespace);
    setState(1462);
    originalnamespacename();
    setState(1463);
    match(CPP14Parser::LeftBrace);
    setState(1464);
    namespacebody();
    setState(1465);
    match(CPP14Parser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnnamednamespacedefinitionContext ------------------------------------------------------------------

CPP14Parser::UnnamednamespacedefinitionContext::UnnamednamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::UnnamednamespacedefinitionContext::Namespace() {
  return getToken(CPP14Parser::Namespace, 0);
}

CPP14Parser::NamespacebodyContext* CPP14Parser::UnnamednamespacedefinitionContext::namespacebody() {
  return getRuleContext<CPP14Parser::NamespacebodyContext>(0);
}

tree::TerminalNode* CPP14Parser::UnnamednamespacedefinitionContext::Inline() {
  return getToken(CPP14Parser::Inline, 0);
}


size_t CPP14Parser::UnnamednamespacedefinitionContext::getRuleIndex() const {
  return CPP14Parser::RuleUnnamednamespacedefinition;
}

antlrcpp::Any CPP14Parser::UnnamednamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitUnnamednamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::UnnamednamespacedefinitionContext* CPP14Parser::unnamednamespacedefinition() {
  UnnamednamespacedefinitionContext *_localctx = _tracker.createInstance<UnnamednamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 188, CPP14Parser::RuleUnnamednamespacedefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1468);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Inline) {
      setState(1467);
      match(CPP14Parser::Inline);
    }
    setState(1470);
    match(CPP14Parser::Namespace);
    setState(1471);
    match(CPP14Parser::LeftBrace);
    setState(1472);
    namespacebody();
    setState(1473);
    match(CPP14Parser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacebodyContext ------------------------------------------------------------------

CPP14Parser::NamespacebodyContext::NamespacebodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DeclarationseqContext* CPP14Parser::NamespacebodyContext::declarationseq() {
  return getRuleContext<CPP14Parser::DeclarationseqContext>(0);
}


size_t CPP14Parser::NamespacebodyContext::getRuleIndex() const {
  return CPP14Parser::RuleNamespacebody;
}

antlrcpp::Any CPP14Parser::NamespacebodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNamespacebody(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NamespacebodyContext* CPP14Parser::namespacebody() {
  NamespacebodyContext *_localctx = _tracker.createInstance<NamespacebodyContext>(_ctx, getState());
  enterRule(_localctx, 190, CPP14Parser::RuleNamespacebody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1476);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CPP14Parser::Alignas)
      | (1ULL << CPP14Parser::Asm)
      | (1ULL << CPP14Parser::Auto)
      | (1ULL << CPP14Parser::Bool)
      | (1ULL << CPP14Parser::Char)
      | (1ULL << CPP14Parser::Char16)
      | (1ULL << CPP14Parser::Char32)
      | (1ULL << CPP14Parser::Class)
      | (1ULL << CPP14Parser::Const)
      | (1ULL << CPP14Parser::Constexpr)
      | (1ULL << CPP14Parser::Decltype)
      | (1ULL << CPP14Parser::Double)
      | (1ULL << CPP14Parser::Enum)
      | (1ULL << CPP14Parser::Explicit)
      | (1ULL << CPP14Parser::Extern)
      | (1ULL << CPP14Parser::Float)
      | (1ULL << CPP14Parser::Friend)
      | (1ULL << CPP14Parser::Inline)
      | (1ULL << CPP14Parser::Int)
      | (1ULL << CPP14Parser::Long)
      | (1ULL << CPP14Parser::Mutable)
      | (1ULL << CPP14Parser::Namespace)
      | (1ULL << CPP14Parser::Operator)
      | (1ULL << CPP14Parser::Register)
      | (1ULL << CPP14Parser::Short)
      | (1ULL << CPP14Parser::Signed)
      | (1ULL << CPP14Parser::Static)
      | (1ULL << CPP14Parser::Static_assert)
      | (1ULL << CPP14Parser::Struct)
      | (1ULL << CPP14Parser::Template)
      | (1ULL << CPP14Parser::Thread_local))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (CPP14Parser::Typedef - 67))
      | (1ULL << (CPP14Parser::Typename - 67))
      | (1ULL << (CPP14Parser::Union - 67))
      | (1ULL << (CPP14Parser::Unsigned - 67))
      | (1ULL << (CPP14Parser::Using - 67))
      | (1ULL << (CPP14Parser::Virtual - 67))
      | (1ULL << (CPP14Parser::Void - 67))
      | (1ULL << (CPP14Parser::Volatile - 67))
      | (1ULL << (CPP14Parser::Wchar - 67))
      | (1ULL << (CPP14Parser::LeftParen - 67))
      | (1ULL << (CPP14Parser::LeftBracket - 67))
      | (1ULL << (CPP14Parser::Star - 67))
      | (1ULL << (CPP14Parser::And - 67))
      | (1ULL << (CPP14Parser::Tilde - 67))
      | (1ULL << (CPP14Parser::AndAnd - 67))
      | (1ULL << (CPP14Parser::Doublecolon - 67))
      | (1ULL << (CPP14Parser::Semi - 67))
      | (1ULL << (CPP14Parser::Ellipsis - 67))
      | (1ULL << (CPP14Parser::Identifier - 67)))) != 0)) {
      setState(1475);
      declarationseq(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacealiasContext ------------------------------------------------------------------

CPP14Parser::NamespacealiasContext::NamespacealiasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::NamespacealiasContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::NamespacealiasContext::getRuleIndex() const {
  return CPP14Parser::RuleNamespacealias;
}

antlrcpp::Any CPP14Parser::NamespacealiasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNamespacealias(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NamespacealiasContext* CPP14Parser::namespacealias() {
  NamespacealiasContext *_localctx = _tracker.createInstance<NamespacealiasContext>(_ctx, getState());
  enterRule(_localctx, 192, CPP14Parser::RuleNamespacealias);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1478);
    match(CPP14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacealiasdefinitionContext ------------------------------------------------------------------

CPP14Parser::NamespacealiasdefinitionContext::NamespacealiasdefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::NamespacealiasdefinitionContext::Namespace() {
  return getToken(CPP14Parser::Namespace, 0);
}

tree::TerminalNode* CPP14Parser::NamespacealiasdefinitionContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::QualifiednamespacespecifierContext* CPP14Parser::NamespacealiasdefinitionContext::qualifiednamespacespecifier() {
  return getRuleContext<CPP14Parser::QualifiednamespacespecifierContext>(0);
}


size_t CPP14Parser::NamespacealiasdefinitionContext::getRuleIndex() const {
  return CPP14Parser::RuleNamespacealiasdefinition;
}

antlrcpp::Any CPP14Parser::NamespacealiasdefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNamespacealiasdefinition(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NamespacealiasdefinitionContext* CPP14Parser::namespacealiasdefinition() {
  NamespacealiasdefinitionContext *_localctx = _tracker.createInstance<NamespacealiasdefinitionContext>(_ctx, getState());
  enterRule(_localctx, 194, CPP14Parser::RuleNamespacealiasdefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1480);
    match(CPP14Parser::Namespace);
    setState(1481);
    match(CPP14Parser::Identifier);
    setState(1482);
    match(CPP14Parser::Assign);
    setState(1483);
    qualifiednamespacespecifier();
    setState(1484);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiednamespacespecifierContext ------------------------------------------------------------------

CPP14Parser::QualifiednamespacespecifierContext::QualifiednamespacespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::NamespacenameContext* CPP14Parser::QualifiednamespacespecifierContext::namespacename() {
  return getRuleContext<CPP14Parser::NamespacenameContext>(0);
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::QualifiednamespacespecifierContext::nestednamespecifier() {
  return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);
}


size_t CPP14Parser::QualifiednamespacespecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleQualifiednamespacespecifier;
}

antlrcpp::Any CPP14Parser::QualifiednamespacespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitQualifiednamespacespecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::QualifiednamespacespecifierContext* CPP14Parser::qualifiednamespacespecifier() {
  QualifiednamespacespecifierContext *_localctx = _tracker.createInstance<QualifiednamespacespecifierContext>(_ctx, getState());
  enterRule(_localctx, 196, CPP14Parser::RuleQualifiednamespacespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1487);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 146, _ctx)) {
    case 1: {
      setState(1486);
      nestednamespecifier(0);
      break;
    }

    }
    setState(1489);
    namespacename();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsingdeclarationContext ------------------------------------------------------------------

CPP14Parser::UsingdeclarationContext::UsingdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::UsingdeclarationContext::Using() {
  return getToken(CPP14Parser::Using, 0);
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::UsingdeclarationContext::nestednamespecifier() {
  return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);
}

CPP14Parser::UnqualifiedidContext* CPP14Parser::UsingdeclarationContext::unqualifiedid() {
  return getRuleContext<CPP14Parser::UnqualifiedidContext>(0);
}

tree::TerminalNode* CPP14Parser::UsingdeclarationContext::Typename() {
  return getToken(CPP14Parser::Typename, 0);
}


size_t CPP14Parser::UsingdeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleUsingdeclaration;
}

antlrcpp::Any CPP14Parser::UsingdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitUsingdeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::UsingdeclarationContext* CPP14Parser::usingdeclaration() {
  UsingdeclarationContext *_localctx = _tracker.createInstance<UsingdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 198, CPP14Parser::RuleUsingdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1504);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 148, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1491);
      match(CPP14Parser::Using);
      setState(1493);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Typename) {
        setState(1492);
        match(CPP14Parser::Typename);
      }
      setState(1495);
      nestednamespecifier(0);
      setState(1496);
      unqualifiedid();
      setState(1497);
      match(CPP14Parser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1499);
      match(CPP14Parser::Using);
      setState(1500);
      match(CPP14Parser::Doublecolon);
      setState(1501);
      unqualifiedid();
      setState(1502);
      match(CPP14Parser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsingdirectiveContext ------------------------------------------------------------------

CPP14Parser::UsingdirectiveContext::UsingdirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::UsingdirectiveContext::Using() {
  return getToken(CPP14Parser::Using, 0);
}

tree::TerminalNode* CPP14Parser::UsingdirectiveContext::Namespace() {
  return getToken(CPP14Parser::Namespace, 0);
}

CPP14Parser::NamespacenameContext* CPP14Parser::UsingdirectiveContext::namespacename() {
  return getRuleContext<CPP14Parser::NamespacenameContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::UsingdirectiveContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::UsingdirectiveContext::nestednamespecifier() {
  return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);
}


size_t CPP14Parser::UsingdirectiveContext::getRuleIndex() const {
  return CPP14Parser::RuleUsingdirective;
}

antlrcpp::Any CPP14Parser::UsingdirectiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitUsingdirective(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::UsingdirectiveContext* CPP14Parser::usingdirective() {
  UsingdirectiveContext *_localctx = _tracker.createInstance<UsingdirectiveContext>(_ctx, getState());
  enterRule(_localctx, 200, CPP14Parser::RuleUsingdirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1507);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
      setState(1506);
      attributespecifierseq(0);
    }
    setState(1509);
    match(CPP14Parser::Using);
    setState(1510);
    match(CPP14Parser::Namespace);
    setState(1512);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx)) {
    case 1: {
      setState(1511);
      nestednamespecifier(0);
      break;
    }

    }
    setState(1514);
    namespacename();
    setState(1515);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AsmdefinitionContext ------------------------------------------------------------------

CPP14Parser::AsmdefinitionContext::AsmdefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::AsmdefinitionContext::Asm() {
  return getToken(CPP14Parser::Asm, 0);
}

tree::TerminalNode* CPP14Parser::AsmdefinitionContext::Stringliteral() {
  return getToken(CPP14Parser::Stringliteral, 0);
}


size_t CPP14Parser::AsmdefinitionContext::getRuleIndex() const {
  return CPP14Parser::RuleAsmdefinition;
}

antlrcpp::Any CPP14Parser::AsmdefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAsmdefinition(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AsmdefinitionContext* CPP14Parser::asmdefinition() {
  AsmdefinitionContext *_localctx = _tracker.createInstance<AsmdefinitionContext>(_ctx, getState());
  enterRule(_localctx, 202, CPP14Parser::RuleAsmdefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1517);
    match(CPP14Parser::Asm);
    setState(1518);
    match(CPP14Parser::LeftParen);
    setState(1519);
    match(CPP14Parser::Stringliteral);
    setState(1520);
    match(CPP14Parser::RightParen);
    setState(1521);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LinkagespecificationContext ------------------------------------------------------------------

CPP14Parser::LinkagespecificationContext::LinkagespecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::LinkagespecificationContext::Extern() {
  return getToken(CPP14Parser::Extern, 0);
}

tree::TerminalNode* CPP14Parser::LinkagespecificationContext::Stringliteral() {
  return getToken(CPP14Parser::Stringliteral, 0);
}

CPP14Parser::DeclarationseqContext* CPP14Parser::LinkagespecificationContext::declarationseq() {
  return getRuleContext<CPP14Parser::DeclarationseqContext>(0);
}

CPP14Parser::DeclarationContext* CPP14Parser::LinkagespecificationContext::declaration() {
  return getRuleContext<CPP14Parser::DeclarationContext>(0);
}


size_t CPP14Parser::LinkagespecificationContext::getRuleIndex() const {
  return CPP14Parser::RuleLinkagespecification;
}

antlrcpp::Any CPP14Parser::LinkagespecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitLinkagespecification(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::LinkagespecificationContext* CPP14Parser::linkagespecification() {
  LinkagespecificationContext *_localctx = _tracker.createInstance<LinkagespecificationContext>(_ctx, getState());
  enterRule(_localctx, 204, CPP14Parser::RuleLinkagespecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1533);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1523);
      match(CPP14Parser::Extern);
      setState(1524);
      match(CPP14Parser::Stringliteral);
      setState(1525);
      match(CPP14Parser::LeftBrace);
      setState(1527);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CPP14Parser::Alignas)
        | (1ULL << CPP14Parser::Asm)
        | (1ULL << CPP14Parser::Auto)
        | (1ULL << CPP14Parser::Bool)
        | (1ULL << CPP14Parser::Char)
        | (1ULL << CPP14Parser::Char16)
        | (1ULL << CPP14Parser::Char32)
        | (1ULL << CPP14Parser::Class)
        | (1ULL << CPP14Parser::Const)
        | (1ULL << CPP14Parser::Constexpr)
        | (1ULL << CPP14Parser::Decltype)
        | (1ULL << CPP14Parser::Double)
        | (1ULL << CPP14Parser::Enum)
        | (1ULL << CPP14Parser::Explicit)
        | (1ULL << CPP14Parser::Extern)
        | (1ULL << CPP14Parser::Float)
        | (1ULL << CPP14Parser::Friend)
        | (1ULL << CPP14Parser::Inline)
        | (1ULL << CPP14Parser::Int)
        | (1ULL << CPP14Parser::Long)
        | (1ULL << CPP14Parser::Mutable)
        | (1ULL << CPP14Parser::Namespace)
        | (1ULL << CPP14Parser::Operator)
        | (1ULL << CPP14Parser::Register)
        | (1ULL << CPP14Parser::Short)
        | (1ULL << CPP14Parser::Signed)
        | (1ULL << CPP14Parser::Static)
        | (1ULL << CPP14Parser::Static_assert)
        | (1ULL << CPP14Parser::Struct)
        | (1ULL << CPP14Parser::Template)
        | (1ULL << CPP14Parser::Thread_local))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 67)) & ((1ULL << (CPP14Parser::Typedef - 67))
        | (1ULL << (CPP14Parser::Typename - 67))
        | (1ULL << (CPP14Parser::Union - 67))
        | (1ULL << (CPP14Parser::Unsigned - 67))
        | (1ULL << (CPP14Parser::Using - 67))
        | (1ULL << (CPP14Parser::Virtual - 67))
        | (1ULL << (CPP14Parser::Void - 67))
        | (1ULL << (CPP14Parser::Volatile - 67))
        | (1ULL << (CPP14Parser::Wchar - 67))
        | (1ULL << (CPP14Parser::LeftParen - 67))
        | (1ULL << (CPP14Parser::LeftBracket - 67))
        | (1ULL << (CPP14Parser::Star - 67))
        | (1ULL << (CPP14Parser::And - 67))
        | (1ULL << (CPP14Parser::Tilde - 67))
        | (1ULL << (CPP14Parser::AndAnd - 67))
        | (1ULL << (CPP14Parser::Doublecolon - 67))
        | (1ULL << (CPP14Parser::Semi - 67))
        | (1ULL << (CPP14Parser::Ellipsis - 67))
        | (1ULL << (CPP14Parser::Identifier - 67)))) != 0)) {
        setState(1526);
        declarationseq(0);
      }
      setState(1529);
      match(CPP14Parser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1530);
      match(CPP14Parser::Extern);
      setState(1531);
      match(CPP14Parser::Stringliteral);
      setState(1532);
      declaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributespecifierseqContext ------------------------------------------------------------------

CPP14Parser::AttributespecifierseqContext::AttributespecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::AttributespecifierContext* CPP14Parser::AttributespecifierseqContext::attributespecifier() {
  return getRuleContext<CPP14Parser::AttributespecifierContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::AttributespecifierseqContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}


size_t CPP14Parser::AttributespecifierseqContext::getRuleIndex() const {
  return CPP14Parser::RuleAttributespecifierseq;
}

antlrcpp::Any CPP14Parser::AttributespecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAttributespecifierseq(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::AttributespecifierseqContext* CPP14Parser::attributespecifierseq() {
   return attributespecifierseq(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::attributespecifierseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::AttributespecifierseqContext *_localctx = _tracker.createInstance<AttributespecifierseqContext>(_ctx, parentState);
  CPP14Parser::AttributespecifierseqContext *previousContext = _localctx;
  size_t startState = 206;
  enterRecursionRule(_localctx, 206, CPP14Parser::RuleAttributespecifierseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1536);
    attributespecifier();
    _ctx->stop = _input->LT(-1);
    setState(1542);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AttributespecifierseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAttributespecifierseq);
        setState(1538);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1539);
        attributespecifier(); 
      }
      setState(1544);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AttributespecifierContext ------------------------------------------------------------------

CPP14Parser::AttributespecifierContext::AttributespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::AttributelistContext* CPP14Parser::AttributespecifierContext::attributelist() {
  return getRuleContext<CPP14Parser::AttributelistContext>(0);
}

CPP14Parser::AlignmentspecifierContext* CPP14Parser::AttributespecifierContext::alignmentspecifier() {
  return getRuleContext<CPP14Parser::AlignmentspecifierContext>(0);
}


size_t CPP14Parser::AttributespecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleAttributespecifier;
}

antlrcpp::Any CPP14Parser::AttributespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAttributespecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AttributespecifierContext* CPP14Parser::attributespecifier() {
  AttributespecifierContext *_localctx = _tracker.createInstance<AttributespecifierContext>(_ctx, getState());
  enterRule(_localctx, 208, CPP14Parser::RuleAttributespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1552);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1545);
        match(CPP14Parser::LeftBracket);
        setState(1546);
        match(CPP14Parser::LeftBracket);
        setState(1547);
        attributelist(0);
        setState(1548);
        match(CPP14Parser::RightBracket);
        setState(1549);
        match(CPP14Parser::RightBracket);
        break;
      }

      case CPP14Parser::Alignas: {
        enterOuterAlt(_localctx, 2);
        setState(1551);
        alignmentspecifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AlignmentspecifierContext ------------------------------------------------------------------

CPP14Parser::AlignmentspecifierContext::AlignmentspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::AlignmentspecifierContext::Alignas() {
  return getToken(CPP14Parser::Alignas, 0);
}

CPP14Parser::ThetypeidContext* CPP14Parser::AlignmentspecifierContext::thetypeid() {
  return getRuleContext<CPP14Parser::ThetypeidContext>(0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::AlignmentspecifierContext::constantexpression() {
  return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);
}


size_t CPP14Parser::AlignmentspecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleAlignmentspecifier;
}

antlrcpp::Any CPP14Parser::AlignmentspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAlignmentspecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AlignmentspecifierContext* CPP14Parser::alignmentspecifier() {
  AlignmentspecifierContext *_localctx = _tracker.createInstance<AlignmentspecifierContext>(_ctx, getState());
  enterRule(_localctx, 210, CPP14Parser::RuleAlignmentspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1570);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1554);
      match(CPP14Parser::Alignas);
      setState(1555);
      match(CPP14Parser::LeftParen);
      setState(1556);
      thetypeid();
      setState(1558);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Ellipsis) {
        setState(1557);
        match(CPP14Parser::Ellipsis);
      }
      setState(1560);
      match(CPP14Parser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1562);
      match(CPP14Parser::Alignas);
      setState(1563);
      match(CPP14Parser::LeftParen);
      setState(1564);
      constantexpression();
      setState(1566);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Ellipsis) {
        setState(1565);
        match(CPP14Parser::Ellipsis);
      }
      setState(1568);
      match(CPP14Parser::RightParen);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributelistContext ------------------------------------------------------------------

CPP14Parser::AttributelistContext::AttributelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::AttributeContext* CPP14Parser::AttributelistContext::attribute() {
  return getRuleContext<CPP14Parser::AttributeContext>(0);
}

CPP14Parser::AttributelistContext* CPP14Parser::AttributelistContext::attributelist() {
  return getRuleContext<CPP14Parser::AttributelistContext>(0);
}


size_t CPP14Parser::AttributelistContext::getRuleIndex() const {
  return CPP14Parser::RuleAttributelist;
}

antlrcpp::Any CPP14Parser::AttributelistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAttributelist(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::AttributelistContext* CPP14Parser::attributelist() {
   return attributelist(0);
}

CPP14Parser::AttributelistContext* CPP14Parser::attributelist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::AttributelistContext *_localctx = _tracker.createInstance<AttributelistContext>(_ctx, parentState);
  CPP14Parser::AttributelistContext *previousContext = _localctx;
  size_t startState = 212;
  enterRecursionRule(_localctx, 212, CPP14Parser::RuleAttributelist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1579);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx)) {
    case 1: {
      setState(1574);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, _ctx)) {
      case 1: {
        setState(1573);
        attribute();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(1576);
      attribute();
      setState(1577);
      match(CPP14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1593);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1591);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 161, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AttributelistContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAttributelist);
          setState(1581);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1582);
          match(CPP14Parser::Comma);
          setState(1584);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx)) {
          case 1: {
            setState(1583);
            attribute();
            break;
          }

          }
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AttributelistContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAttributelist);
          setState(1586);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1587);
          match(CPP14Parser::Comma);
          setState(1588);
          attribute();
          setState(1589);
          match(CPP14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(1595);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

CPP14Parser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::AttributetokenContext* CPP14Parser::AttributeContext::attributetoken() {
  return getRuleContext<CPP14Parser::AttributetokenContext>(0);
}

CPP14Parser::AttributeargumentclauseContext* CPP14Parser::AttributeContext::attributeargumentclause() {
  return getRuleContext<CPP14Parser::AttributeargumentclauseContext>(0);
}


size_t CPP14Parser::AttributeContext::getRuleIndex() const {
  return CPP14Parser::RuleAttribute;
}

antlrcpp::Any CPP14Parser::AttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAttribute(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AttributeContext* CPP14Parser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 214, CPP14Parser::RuleAttribute);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1596);
    attributetoken();
    setState(1598);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx)) {
    case 1: {
      setState(1597);
      attributeargumentclause();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributetokenContext ------------------------------------------------------------------

CPP14Parser::AttributetokenContext::AttributetokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::AttributetokenContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::AttributescopedtokenContext* CPP14Parser::AttributetokenContext::attributescopedtoken() {
  return getRuleContext<CPP14Parser::AttributescopedtokenContext>(0);
}


size_t CPP14Parser::AttributetokenContext::getRuleIndex() const {
  return CPP14Parser::RuleAttributetoken;
}

antlrcpp::Any CPP14Parser::AttributetokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAttributetoken(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AttributetokenContext* CPP14Parser::attributetoken() {
  AttributetokenContext *_localctx = _tracker.createInstance<AttributetokenContext>(_ctx, getState());
  enterRule(_localctx, 216, CPP14Parser::RuleAttributetoken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1602);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1600);
      match(CPP14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1601);
      attributescopedtoken();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributescopedtokenContext ------------------------------------------------------------------

CPP14Parser::AttributescopedtokenContext::AttributescopedtokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::AttributenamespaceContext* CPP14Parser::AttributescopedtokenContext::attributenamespace() {
  return getRuleContext<CPP14Parser::AttributenamespaceContext>(0);
}

tree::TerminalNode* CPP14Parser::AttributescopedtokenContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::AttributescopedtokenContext::getRuleIndex() const {
  return CPP14Parser::RuleAttributescopedtoken;
}

antlrcpp::Any CPP14Parser::AttributescopedtokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAttributescopedtoken(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AttributescopedtokenContext* CPP14Parser::attributescopedtoken() {
  AttributescopedtokenContext *_localctx = _tracker.createInstance<AttributescopedtokenContext>(_ctx, getState());
  enterRule(_localctx, 218, CPP14Parser::RuleAttributescopedtoken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1604);
    attributenamespace();
    setState(1605);
    match(CPP14Parser::Doublecolon);
    setState(1606);
    match(CPP14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributenamespaceContext ------------------------------------------------------------------

CPP14Parser::AttributenamespaceContext::AttributenamespaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::AttributenamespaceContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::AttributenamespaceContext::getRuleIndex() const {
  return CPP14Parser::RuleAttributenamespace;
}

antlrcpp::Any CPP14Parser::AttributenamespaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAttributenamespace(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AttributenamespaceContext* CPP14Parser::attributenamespace() {
  AttributenamespaceContext *_localctx = _tracker.createInstance<AttributenamespaceContext>(_ctx, getState());
  enterRule(_localctx, 220, CPP14Parser::RuleAttributenamespace);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1608);
    match(CPP14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeargumentclauseContext ------------------------------------------------------------------

CPP14Parser::AttributeargumentclauseContext::AttributeargumentclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::BalancedtokenseqContext* CPP14Parser::AttributeargumentclauseContext::balancedtokenseq() {
  return getRuleContext<CPP14Parser::BalancedtokenseqContext>(0);
}


size_t CPP14Parser::AttributeargumentclauseContext::getRuleIndex() const {
  return CPP14Parser::RuleAttributeargumentclause;
}

antlrcpp::Any CPP14Parser::AttributeargumentclauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAttributeargumentclause(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AttributeargumentclauseContext* CPP14Parser::attributeargumentclause() {
  AttributeargumentclauseContext *_localctx = _tracker.createInstance<AttributeargumentclauseContext>(_ctx, getState());
  enterRule(_localctx, 222, CPP14Parser::RuleAttributeargumentclause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1610);
    match(CPP14Parser::LeftParen);
    setState(1611);
    balancedtokenseq(0);
    setState(1612);
    match(CPP14Parser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BalancedtokenseqContext ------------------------------------------------------------------

CPP14Parser::BalancedtokenseqContext::BalancedtokenseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::BalancedtokenContext* CPP14Parser::BalancedtokenseqContext::balancedtoken() {
  return getRuleContext<CPP14Parser::BalancedtokenContext>(0);
}

CPP14Parser::BalancedtokenseqContext* CPP14Parser::BalancedtokenseqContext::balancedtokenseq() {
  return getRuleContext<CPP14Parser::BalancedtokenseqContext>(0);
}


size_t CPP14Parser::BalancedtokenseqContext::getRuleIndex() const {
  return CPP14Parser::RuleBalancedtokenseq;
}

antlrcpp::Any CPP14Parser::BalancedtokenseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitBalancedtokenseq(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::BalancedtokenseqContext* CPP14Parser::balancedtokenseq() {
   return balancedtokenseq(0);
}

CPP14Parser::BalancedtokenseqContext* CPP14Parser::balancedtokenseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::BalancedtokenseqContext *_localctx = _tracker.createInstance<BalancedtokenseqContext>(_ctx, parentState);
  CPP14Parser::BalancedtokenseqContext *previousContext = _localctx;
  size_t startState = 224;
  enterRecursionRule(_localctx, 224, CPP14Parser::RuleBalancedtokenseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1616);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx)) {
    case 1: {
      setState(1615);
      balancedtoken();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1622);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BalancedtokenseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBalancedtokenseq);
        setState(1618);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1619);
        balancedtoken(); 
      }
      setState(1624);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BalancedtokenContext ------------------------------------------------------------------

CPP14Parser::BalancedtokenContext::BalancedtokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::BalancedtokenseqContext* CPP14Parser::BalancedtokenContext::balancedtokenseq() {
  return getRuleContext<CPP14Parser::BalancedtokenseqContext>(0);
}


size_t CPP14Parser::BalancedtokenContext::getRuleIndex() const {
  return CPP14Parser::RuleBalancedtoken;
}

antlrcpp::Any CPP14Parser::BalancedtokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitBalancedtoken(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::BalancedtokenContext* CPP14Parser::balancedtoken() {
  BalancedtokenContext *_localctx = _tracker.createInstance<BalancedtokenContext>(_ctx, getState());
  enterRule(_localctx, 226, CPP14Parser::RuleBalancedtoken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1637);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::LeftParen: {
        enterOuterAlt(_localctx, 1);
        setState(1625);
        match(CPP14Parser::LeftParen);
        setState(1626);
        balancedtokenseq(0);
        setState(1627);
        match(CPP14Parser::RightParen);
        break;
      }

      case CPP14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(1629);
        match(CPP14Parser::LeftBracket);
        setState(1630);
        balancedtokenseq(0);
        setState(1631);
        match(CPP14Parser::RightBracket);
        break;
      }

      case CPP14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 3);
        setState(1633);
        match(CPP14Parser::LeftBrace);
        setState(1634);
        balancedtokenseq(0);
        setState(1635);
        match(CPP14Parser::RightBrace);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitdeclaratorlistContext ------------------------------------------------------------------

CPP14Parser::InitdeclaratorlistContext::InitdeclaratorlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::InitdeclaratorContext* CPP14Parser::InitdeclaratorlistContext::initdeclarator() {
  return getRuleContext<CPP14Parser::InitdeclaratorContext>(0);
}

CPP14Parser::InitdeclaratorlistContext* CPP14Parser::InitdeclaratorlistContext::initdeclaratorlist() {
  return getRuleContext<CPP14Parser::InitdeclaratorlistContext>(0);
}


size_t CPP14Parser::InitdeclaratorlistContext::getRuleIndex() const {
  return CPP14Parser::RuleInitdeclaratorlist;
}

antlrcpp::Any CPP14Parser::InitdeclaratorlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitInitdeclaratorlist(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::InitdeclaratorlistContext* CPP14Parser::initdeclaratorlist() {
   return initdeclaratorlist(0);
}

CPP14Parser::InitdeclaratorlistContext* CPP14Parser::initdeclaratorlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::InitdeclaratorlistContext *_localctx = _tracker.createInstance<InitdeclaratorlistContext>(_ctx, parentState);
  CPP14Parser::InitdeclaratorlistContext *previousContext = _localctx;
  size_t startState = 228;
  enterRecursionRule(_localctx, 228, CPP14Parser::RuleInitdeclaratorlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1640);
    initdeclarator();
    _ctx->stop = _input->LT(-1);
    setState(1647);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 168, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitdeclaratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitdeclaratorlist);
        setState(1642);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1643);
        match(CPP14Parser::Comma);
        setState(1644);
        initdeclarator(); 
      }
      setState(1649);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 168, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InitdeclaratorContext ------------------------------------------------------------------

CPP14Parser::InitdeclaratorContext::InitdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DeclaratorContext* CPP14Parser::InitdeclaratorContext::declarator() {
  return getRuleContext<CPP14Parser::DeclaratorContext>(0);
}

CPP14Parser::InitializerContext* CPP14Parser::InitdeclaratorContext::initializer() {
  return getRuleContext<CPP14Parser::InitializerContext>(0);
}


size_t CPP14Parser::InitdeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleInitdeclarator;
}

antlrcpp::Any CPP14Parser::InitdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitInitdeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::InitdeclaratorContext* CPP14Parser::initdeclarator() {
  InitdeclaratorContext *_localctx = _tracker.createInstance<InitdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 230, CPP14Parser::RuleInitdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1650);
    declarator();
    setState(1652);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, _ctx)) {
    case 1: {
      setState(1651);
      initializer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratorContext ------------------------------------------------------------------

CPP14Parser::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::PtrdeclaratorContext* CPP14Parser::DeclaratorContext::ptrdeclarator() {
  return getRuleContext<CPP14Parser::PtrdeclaratorContext>(0);
}

CPP14Parser::NoptrdeclaratorContext* CPP14Parser::DeclaratorContext::noptrdeclarator() {
  return getRuleContext<CPP14Parser::NoptrdeclaratorContext>(0);
}

CPP14Parser::ParametersandqualifiersContext* CPP14Parser::DeclaratorContext::parametersandqualifiers() {
  return getRuleContext<CPP14Parser::ParametersandqualifiersContext>(0);
}

CPP14Parser::TrailingreturntypeContext* CPP14Parser::DeclaratorContext::trailingreturntype() {
  return getRuleContext<CPP14Parser::TrailingreturntypeContext>(0);
}


size_t CPP14Parser::DeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleDeclarator;
}

antlrcpp::Any CPP14Parser::DeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DeclaratorContext* CPP14Parser::declarator() {
  DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 232, CPP14Parser::RuleDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1659);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 170, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1654);
      ptrdeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1655);
      noptrdeclarator(0);
      setState(1656);
      parametersandqualifiers();
      setState(1657);
      trailingreturntype();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtrdeclaratorContext ------------------------------------------------------------------

CPP14Parser::PtrdeclaratorContext::PtrdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::NoptrdeclaratorContext* CPP14Parser::PtrdeclaratorContext::noptrdeclarator() {
  return getRuleContext<CPP14Parser::NoptrdeclaratorContext>(0);
}

CPP14Parser::PtroperatorContext* CPP14Parser::PtrdeclaratorContext::ptroperator() {
  return getRuleContext<CPP14Parser::PtroperatorContext>(0);
}

CPP14Parser::PtrdeclaratorContext* CPP14Parser::PtrdeclaratorContext::ptrdeclarator() {
  return getRuleContext<CPP14Parser::PtrdeclaratorContext>(0);
}


size_t CPP14Parser::PtrdeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RulePtrdeclarator;
}

antlrcpp::Any CPP14Parser::PtrdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitPtrdeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::PtrdeclaratorContext* CPP14Parser::ptrdeclarator() {
  PtrdeclaratorContext *_localctx = _tracker.createInstance<PtrdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 234, CPP14Parser::RulePtrdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1665);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1661);
      noptrdeclarator(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1662);
      ptroperator();
      setState(1663);
      ptrdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoptrdeclaratorContext ------------------------------------------------------------------

CPP14Parser::NoptrdeclaratorContext::NoptrdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DeclaratoridContext* CPP14Parser::NoptrdeclaratorContext::declaratorid() {
  return getRuleContext<CPP14Parser::DeclaratoridContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::NoptrdeclaratorContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::PtrdeclaratorContext* CPP14Parser::NoptrdeclaratorContext::ptrdeclarator() {
  return getRuleContext<CPP14Parser::PtrdeclaratorContext>(0);
}

CPP14Parser::NoptrdeclaratorContext* CPP14Parser::NoptrdeclaratorContext::noptrdeclarator() {
  return getRuleContext<CPP14Parser::NoptrdeclaratorContext>(0);
}

CPP14Parser::ParametersandqualifiersContext* CPP14Parser::NoptrdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<CPP14Parser::ParametersandqualifiersContext>(0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::NoptrdeclaratorContext::constantexpression() {
  return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);
}


size_t CPP14Parser::NoptrdeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleNoptrdeclarator;
}

antlrcpp::Any CPP14Parser::NoptrdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNoptrdeclarator(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::NoptrdeclaratorContext* CPP14Parser::noptrdeclarator() {
   return noptrdeclarator(0);
}

CPP14Parser::NoptrdeclaratorContext* CPP14Parser::noptrdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::NoptrdeclaratorContext *_localctx = _tracker.createInstance<NoptrdeclaratorContext>(_ctx, parentState);
  CPP14Parser::NoptrdeclaratorContext *previousContext = _localctx;
  size_t startState = 236;
  enterRecursionRule(_localctx, 236, CPP14Parser::RuleNoptrdeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1676);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Decltype:
      case CPP14Parser::Operator:
      case CPP14Parser::Tilde:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Ellipsis:
      case CPP14Parser::Identifier: {
        setState(1668);
        declaratorid();
        setState(1670);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx)) {
        case 1: {
          setState(1669);
          attributespecifierseq(0);
          break;
        }

        }
        break;
      }

      case CPP14Parser::LeftParen: {
        setState(1672);
        match(CPP14Parser::LeftParen);
        setState(1673);
        ptrdeclarator();
        setState(1674);
        match(CPP14Parser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(1691);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 177, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1689);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 176, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrdeclarator);
          setState(1678);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1679);
          parametersandqualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrdeclarator);
          setState(1680);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1681);
          match(CPP14Parser::LeftBracket);
          setState(1683);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CPP14Parser::Alignof)
            | (1ULL << CPP14Parser::Auto)
            | (1ULL << CPP14Parser::Bool)
            | (1ULL << CPP14Parser::Char)
            | (1ULL << CPP14Parser::Char16)
            | (1ULL << CPP14Parser::Char32)
            | (1ULL << CPP14Parser::Const_cast)
            | (1ULL << CPP14Parser::Decltype)
            | (1ULL << CPP14Parser::Delete)
            | (1ULL << CPP14Parser::Double)
            | (1ULL << CPP14Parser::Dynamic_cast)
            | (1ULL << CPP14Parser::False)
            | (1ULL << CPP14Parser::Float)
            | (1ULL << CPP14Parser::Int)
            | (1ULL << CPP14Parser::Long)
            | (1ULL << CPP14Parser::New)
            | (1ULL << CPP14Parser::Noexcept)
            | (1ULL << CPP14Parser::Nullptr)
            | (1ULL << CPP14Parser::Operator)
            | (1ULL << CPP14Parser::Reinterpret_cast)
            | (1ULL << CPP14Parser::Short)
            | (1ULL << CPP14Parser::Signed)
            | (1ULL << CPP14Parser::Sizeof)
            | (1ULL << CPP14Parser::Static_cast)
            | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::True - 65))
            | (1ULL << (CPP14Parser::Typeid - 65))
            | (1ULL << (CPP14Parser::Typename - 65))
            | (1ULL << (CPP14Parser::Unsigned - 65))
            | (1ULL << (CPP14Parser::Void - 65))
            | (1ULL << (CPP14Parser::Wchar - 65))
            | (1ULL << (CPP14Parser::LeftParen - 65))
            | (1ULL << (CPP14Parser::LeftBracket - 65))
            | (1ULL << (CPP14Parser::Plus - 65))
            | (1ULL << (CPP14Parser::Minus - 65))
            | (1ULL << (CPP14Parser::Star - 65))
            | (1ULL << (CPP14Parser::And - 65))
            | (1ULL << (CPP14Parser::Or - 65))
            | (1ULL << (CPP14Parser::Tilde - 65))
            | (1ULL << (CPP14Parser::Not - 65))
            | (1ULL << (CPP14Parser::PlusPlus - 65))
            | (1ULL << (CPP14Parser::MinusMinus - 65))
            | (1ULL << (CPP14Parser::Doublecolon - 65))
            | (1ULL << (CPP14Parser::Identifier - 65))
            | (1ULL << (CPP14Parser::Integerliteral - 65)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 132)) & ((1ULL << (CPP14Parser::Characterliteral - 132))
            | (1ULL << (CPP14Parser::Floatingliteral - 132))
            | (1ULL << (CPP14Parser::Stringliteral - 132))
            | (1ULL << (CPP14Parser::Userdefinedintegerliteral - 132))
            | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 132))
            | (1ULL << (CPP14Parser::Userdefinedstringliteral - 132))
            | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 132)))) != 0)) {
            setState(1682);
            constantexpression();
          }
          setState(1685);
          match(CPP14Parser::RightBracket);
          setState(1687);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 175, _ctx)) {
          case 1: {
            setState(1686);
            attributespecifierseq(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1693);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 177, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParametersandqualifiersContext ------------------------------------------------------------------

CPP14Parser::ParametersandqualifiersContext::ParametersandqualifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ParameterdeclarationclauseContext* CPP14Parser::ParametersandqualifiersContext::parameterdeclarationclause() {
  return getRuleContext<CPP14Parser::ParameterdeclarationclauseContext>(0);
}

CPP14Parser::CvqualifierseqContext* CPP14Parser::ParametersandqualifiersContext::cvqualifierseq() {
  return getRuleContext<CPP14Parser::CvqualifierseqContext>(0);
}

CPP14Parser::RefqualifierContext* CPP14Parser::ParametersandqualifiersContext::refqualifier() {
  return getRuleContext<CPP14Parser::RefqualifierContext>(0);
}

CPP14Parser::ExceptionspecificationContext* CPP14Parser::ParametersandqualifiersContext::exceptionspecification() {
  return getRuleContext<CPP14Parser::ExceptionspecificationContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::ParametersandqualifiersContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}


size_t CPP14Parser::ParametersandqualifiersContext::getRuleIndex() const {
  return CPP14Parser::RuleParametersandqualifiers;
}

antlrcpp::Any CPP14Parser::ParametersandqualifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitParametersandqualifiers(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ParametersandqualifiersContext* CPP14Parser::parametersandqualifiers() {
  ParametersandqualifiersContext *_localctx = _tracker.createInstance<ParametersandqualifiersContext>(_ctx, getState());
  enterRule(_localctx, 238, CPP14Parser::RuleParametersandqualifiers);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1694);
    match(CPP14Parser::LeftParen);
    setState(1695);
    parameterdeclarationclause();
    setState(1696);
    match(CPP14Parser::RightParen);
    setState(1698);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, _ctx)) {
    case 1: {
      setState(1697);
      cvqualifierseq();
      break;
    }

    }
    setState(1701);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 179, _ctx)) {
    case 1: {
      setState(1700);
      refqualifier();
      break;
    }

    }
    setState(1704);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 180, _ctx)) {
    case 1: {
      setState(1703);
      exceptionspecification();
      break;
    }

    }
    setState(1707);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 181, _ctx)) {
    case 1: {
      setState(1706);
      attributespecifierseq(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingreturntypeContext ------------------------------------------------------------------

CPP14Parser::TrailingreturntypeContext::TrailingreturntypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TrailingtypespecifierseqContext* CPP14Parser::TrailingreturntypeContext::trailingtypespecifierseq() {
  return getRuleContext<CPP14Parser::TrailingtypespecifierseqContext>(0);
}

CPP14Parser::AbstractdeclaratorContext* CPP14Parser::TrailingreturntypeContext::abstractdeclarator() {
  return getRuleContext<CPP14Parser::AbstractdeclaratorContext>(0);
}


size_t CPP14Parser::TrailingreturntypeContext::getRuleIndex() const {
  return CPP14Parser::RuleTrailingreturntype;
}

antlrcpp::Any CPP14Parser::TrailingreturntypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTrailingreturntype(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TrailingreturntypeContext* CPP14Parser::trailingreturntype() {
  TrailingreturntypeContext *_localctx = _tracker.createInstance<TrailingreturntypeContext>(_ctx, getState());
  enterRule(_localctx, 240, CPP14Parser::RuleTrailingreturntype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1709);
    match(CPP14Parser::Arrow);
    setState(1710);
    trailingtypespecifierseq();
    setState(1712);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 182, _ctx)) {
    case 1: {
      setState(1711);
      abstractdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtroperatorContext ------------------------------------------------------------------

CPP14Parser::PtroperatorContext::PtroperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::PtroperatorContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::CvqualifierseqContext* CPP14Parser::PtroperatorContext::cvqualifierseq() {
  return getRuleContext<CPP14Parser::CvqualifierseqContext>(0);
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::PtroperatorContext::nestednamespecifier() {
  return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);
}


size_t CPP14Parser::PtroperatorContext::getRuleIndex() const {
  return CPP14Parser::RulePtroperator;
}

antlrcpp::Any CPP14Parser::PtroperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitPtroperator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::PtroperatorContext* CPP14Parser::ptroperator() {
  PtroperatorContext *_localctx = _tracker.createInstance<PtroperatorContext>(_ctx, getState());
  enterRule(_localctx, 242, CPP14Parser::RulePtroperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1737);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Star: {
        enterOuterAlt(_localctx, 1);
        setState(1714);
        match(CPP14Parser::Star);
        setState(1716);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 183, _ctx)) {
        case 1: {
          setState(1715);
          attributespecifierseq(0);
          break;
        }

        }
        setState(1719);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 184, _ctx)) {
        case 1: {
          setState(1718);
          cvqualifierseq();
          break;
        }

        }
        break;
      }

      case CPP14Parser::And: {
        enterOuterAlt(_localctx, 2);
        setState(1721);
        match(CPP14Parser::And);
        setState(1723);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 185, _ctx)) {
        case 1: {
          setState(1722);
          attributespecifierseq(0);
          break;
        }

        }
        break;
      }

      case CPP14Parser::AndAnd: {
        enterOuterAlt(_localctx, 3);
        setState(1725);
        match(CPP14Parser::AndAnd);
        setState(1727);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx)) {
        case 1: {
          setState(1726);
          attributespecifierseq(0);
          break;
        }

        }
        break;
      }

      case CPP14Parser::Decltype:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 4);
        setState(1729);
        nestednamespecifier(0);
        setState(1730);
        match(CPP14Parser::Star);
        setState(1732);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 187, _ctx)) {
        case 1: {
          setState(1731);
          attributespecifierseq(0);
          break;
        }

        }
        setState(1735);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 188, _ctx)) {
        case 1: {
          setState(1734);
          cvqualifierseq();
          break;
        }

        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CvqualifierseqContext ------------------------------------------------------------------

CPP14Parser::CvqualifierseqContext::CvqualifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::CvqualifierContext* CPP14Parser::CvqualifierseqContext::cvqualifier() {
  return getRuleContext<CPP14Parser::CvqualifierContext>(0);
}

CPP14Parser::CvqualifierseqContext* CPP14Parser::CvqualifierseqContext::cvqualifierseq() {
  return getRuleContext<CPP14Parser::CvqualifierseqContext>(0);
}


size_t CPP14Parser::CvqualifierseqContext::getRuleIndex() const {
  return CPP14Parser::RuleCvqualifierseq;
}

antlrcpp::Any CPP14Parser::CvqualifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitCvqualifierseq(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::CvqualifierseqContext* CPP14Parser::cvqualifierseq() {
  CvqualifierseqContext *_localctx = _tracker.createInstance<CvqualifierseqContext>(_ctx, getState());
  enterRule(_localctx, 244, CPP14Parser::RuleCvqualifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1739);
    cvqualifier();
    setState(1741);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 190, _ctx)) {
    case 1: {
      setState(1740);
      cvqualifierseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CvqualifierContext ------------------------------------------------------------------

CPP14Parser::CvqualifierContext::CvqualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::CvqualifierContext::Const() {
  return getToken(CPP14Parser::Const, 0);
}

tree::TerminalNode* CPP14Parser::CvqualifierContext::Volatile() {
  return getToken(CPP14Parser::Volatile, 0);
}


size_t CPP14Parser::CvqualifierContext::getRuleIndex() const {
  return CPP14Parser::RuleCvqualifier;
}

antlrcpp::Any CPP14Parser::CvqualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitCvqualifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::CvqualifierContext* CPP14Parser::cvqualifier() {
  CvqualifierContext *_localctx = _tracker.createInstance<CvqualifierContext>(_ctx, getState());
  enterRule(_localctx, 246, CPP14Parser::RuleCvqualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1743);
    _la = _input->LA(1);
    if (!(_la == CPP14Parser::Const

    || _la == CPP14Parser::Volatile)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RefqualifierContext ------------------------------------------------------------------

CPP14Parser::RefqualifierContext::RefqualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CPP14Parser::RefqualifierContext::getRuleIndex() const {
  return CPP14Parser::RuleRefqualifier;
}

antlrcpp::Any CPP14Parser::RefqualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitRefqualifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::RefqualifierContext* CPP14Parser::refqualifier() {
  RefqualifierContext *_localctx = _tracker.createInstance<RefqualifierContext>(_ctx, getState());
  enterRule(_localctx, 248, CPP14Parser::RuleRefqualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1745);
    _la = _input->LA(1);
    if (!(_la == CPP14Parser::And

    || _la == CPP14Parser::AndAnd)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratoridContext ------------------------------------------------------------------

CPP14Parser::DeclaratoridContext::DeclaratoridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::IdexpressionContext* CPP14Parser::DeclaratoridContext::idexpression() {
  return getRuleContext<CPP14Parser::IdexpressionContext>(0);
}


size_t CPP14Parser::DeclaratoridContext::getRuleIndex() const {
  return CPP14Parser::RuleDeclaratorid;
}

antlrcpp::Any CPP14Parser::DeclaratoridContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitDeclaratorid(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DeclaratoridContext* CPP14Parser::declaratorid() {
  DeclaratoridContext *_localctx = _tracker.createInstance<DeclaratoridContext>(_ctx, getState());
  enterRule(_localctx, 250, CPP14Parser::RuleDeclaratorid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1748);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Ellipsis) {
      setState(1747);
      match(CPP14Parser::Ellipsis);
    }
    setState(1750);
    idexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThetypeidContext ------------------------------------------------------------------

CPP14Parser::ThetypeidContext::ThetypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TypespecifierseqContext* CPP14Parser::ThetypeidContext::typespecifierseq() {
  return getRuleContext<CPP14Parser::TypespecifierseqContext>(0);
}

CPP14Parser::AbstractdeclaratorContext* CPP14Parser::ThetypeidContext::abstractdeclarator() {
  return getRuleContext<CPP14Parser::AbstractdeclaratorContext>(0);
}


size_t CPP14Parser::ThetypeidContext::getRuleIndex() const {
  return CPP14Parser::RuleThetypeid;
}

antlrcpp::Any CPP14Parser::ThetypeidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitThetypeid(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ThetypeidContext* CPP14Parser::thetypeid() {
  ThetypeidContext *_localctx = _tracker.createInstance<ThetypeidContext>(_ctx, getState());
  enterRule(_localctx, 252, CPP14Parser::RuleThetypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1752);
    typespecifierseq();
    setState(1754);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 192, _ctx)) {
    case 1: {
      setState(1753);
      abstractdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbstractdeclaratorContext ------------------------------------------------------------------

CPP14Parser::AbstractdeclaratorContext::AbstractdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::PtrabstractdeclaratorContext* CPP14Parser::AbstractdeclaratorContext::ptrabstractdeclarator() {
  return getRuleContext<CPP14Parser::PtrabstractdeclaratorContext>(0);
}

CPP14Parser::ParametersandqualifiersContext* CPP14Parser::AbstractdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<CPP14Parser::ParametersandqualifiersContext>(0);
}

CPP14Parser::TrailingreturntypeContext* CPP14Parser::AbstractdeclaratorContext::trailingreturntype() {
  return getRuleContext<CPP14Parser::TrailingreturntypeContext>(0);
}

CPP14Parser::NoptrabstractdeclaratorContext* CPP14Parser::AbstractdeclaratorContext::noptrabstractdeclarator() {
  return getRuleContext<CPP14Parser::NoptrabstractdeclaratorContext>(0);
}

CPP14Parser::AbstractpackdeclaratorContext* CPP14Parser::AbstractdeclaratorContext::abstractpackdeclarator() {
  return getRuleContext<CPP14Parser::AbstractpackdeclaratorContext>(0);
}


size_t CPP14Parser::AbstractdeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleAbstractdeclarator;
}

antlrcpp::Any CPP14Parser::AbstractdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAbstractdeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AbstractdeclaratorContext* CPP14Parser::abstractdeclarator() {
  AbstractdeclaratorContext *_localctx = _tracker.createInstance<AbstractdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 254, CPP14Parser::RuleAbstractdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1764);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 194, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1756);
      ptrabstractdeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1758);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx)) {
      case 1: {
        setState(1757);
        noptrabstractdeclarator(0);
        break;
      }

      }
      setState(1760);
      parametersandqualifiers();
      setState(1761);
      trailingreturntype();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1763);
      abstractpackdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtrabstractdeclaratorContext ------------------------------------------------------------------

CPP14Parser::PtrabstractdeclaratorContext::PtrabstractdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::NoptrabstractdeclaratorContext* CPP14Parser::PtrabstractdeclaratorContext::noptrabstractdeclarator() {
  return getRuleContext<CPP14Parser::NoptrabstractdeclaratorContext>(0);
}

CPP14Parser::PtroperatorContext* CPP14Parser::PtrabstractdeclaratorContext::ptroperator() {
  return getRuleContext<CPP14Parser::PtroperatorContext>(0);
}

CPP14Parser::PtrabstractdeclaratorContext* CPP14Parser::PtrabstractdeclaratorContext::ptrabstractdeclarator() {
  return getRuleContext<CPP14Parser::PtrabstractdeclaratorContext>(0);
}


size_t CPP14Parser::PtrabstractdeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RulePtrabstractdeclarator;
}

antlrcpp::Any CPP14Parser::PtrabstractdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitPtrabstractdeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::PtrabstractdeclaratorContext* CPP14Parser::ptrabstractdeclarator() {
  PtrabstractdeclaratorContext *_localctx = _tracker.createInstance<PtrabstractdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 256, CPP14Parser::RulePtrabstractdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1771);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::LeftParen:
      case CPP14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1766);
        noptrabstractdeclarator(0);
        break;
      }

      case CPP14Parser::Decltype:
      case CPP14Parser::Star:
      case CPP14Parser::And:
      case CPP14Parser::AndAnd:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1767);
        ptroperator();
        setState(1769);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx)) {
        case 1: {
          setState(1768);
          ptrabstractdeclarator();
          break;
        }

        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoptrabstractdeclaratorContext ------------------------------------------------------------------

CPP14Parser::NoptrabstractdeclaratorContext::NoptrabstractdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ParametersandqualifiersContext* CPP14Parser::NoptrabstractdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<CPP14Parser::ParametersandqualifiersContext>(0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::NoptrabstractdeclaratorContext::constantexpression() {
  return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::NoptrabstractdeclaratorContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::PtrabstractdeclaratorContext* CPP14Parser::NoptrabstractdeclaratorContext::ptrabstractdeclarator() {
  return getRuleContext<CPP14Parser::PtrabstractdeclaratorContext>(0);
}

CPP14Parser::NoptrabstractdeclaratorContext* CPP14Parser::NoptrabstractdeclaratorContext::noptrabstractdeclarator() {
  return getRuleContext<CPP14Parser::NoptrabstractdeclaratorContext>(0);
}


size_t CPP14Parser::NoptrabstractdeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleNoptrabstractdeclarator;
}

antlrcpp::Any CPP14Parser::NoptrabstractdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNoptrabstractdeclarator(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::NoptrabstractdeclaratorContext* CPP14Parser::noptrabstractdeclarator() {
   return noptrabstractdeclarator(0);
}

CPP14Parser::NoptrabstractdeclaratorContext* CPP14Parser::noptrabstractdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::NoptrabstractdeclaratorContext *_localctx = _tracker.createInstance<NoptrabstractdeclaratorContext>(_ctx, parentState);
  CPP14Parser::NoptrabstractdeclaratorContext *previousContext = _localctx;
  size_t startState = 258;
  enterRecursionRule(_localctx, 258, CPP14Parser::RuleNoptrabstractdeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1787);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 199, _ctx)) {
    case 1: {
      setState(1774);
      parametersandqualifiers();
      break;
    }

    case 2: {
      setState(1775);
      match(CPP14Parser::LeftBracket);
      setState(1777);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CPP14Parser::Alignof)
        | (1ULL << CPP14Parser::Auto)
        | (1ULL << CPP14Parser::Bool)
        | (1ULL << CPP14Parser::Char)
        | (1ULL << CPP14Parser::Char16)
        | (1ULL << CPP14Parser::Char32)
        | (1ULL << CPP14Parser::Const_cast)
        | (1ULL << CPP14Parser::Decltype)
        | (1ULL << CPP14Parser::Delete)
        | (1ULL << CPP14Parser::Double)
        | (1ULL << CPP14Parser::Dynamic_cast)
        | (1ULL << CPP14Parser::False)
        | (1ULL << CPP14Parser::Float)
        | (1ULL << CPP14Parser::Int)
        | (1ULL << CPP14Parser::Long)
        | (1ULL << CPP14Parser::New)
        | (1ULL << CPP14Parser::Noexcept)
        | (1ULL << CPP14Parser::Nullptr)
        | (1ULL << CPP14Parser::Operator)
        | (1ULL << CPP14Parser::Reinterpret_cast)
        | (1ULL << CPP14Parser::Short)
        | (1ULL << CPP14Parser::Signed)
        | (1ULL << CPP14Parser::Sizeof)
        | (1ULL << CPP14Parser::Static_cast)
        | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::True - 65))
        | (1ULL << (CPP14Parser::Typeid - 65))
        | (1ULL << (CPP14Parser::Typename - 65))
        | (1ULL << (CPP14Parser::Unsigned - 65))
        | (1ULL << (CPP14Parser::Void - 65))
        | (1ULL << (CPP14Parser::Wchar - 65))
        | (1ULL << (CPP14Parser::LeftParen - 65))
        | (1ULL << (CPP14Parser::LeftBracket - 65))
        | (1ULL << (CPP14Parser::Plus - 65))
        | (1ULL << (CPP14Parser::Minus - 65))
        | (1ULL << (CPP14Parser::Star - 65))
        | (1ULL << (CPP14Parser::And - 65))
        | (1ULL << (CPP14Parser::Or - 65))
        | (1ULL << (CPP14Parser::Tilde - 65))
        | (1ULL << (CPP14Parser::Not - 65))
        | (1ULL << (CPP14Parser::PlusPlus - 65))
        | (1ULL << (CPP14Parser::MinusMinus - 65))
        | (1ULL << (CPP14Parser::Doublecolon - 65))
        | (1ULL << (CPP14Parser::Identifier - 65))
        | (1ULL << (CPP14Parser::Integerliteral - 65)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 132)) & ((1ULL << (CPP14Parser::Characterliteral - 132))
        | (1ULL << (CPP14Parser::Floatingliteral - 132))
        | (1ULL << (CPP14Parser::Stringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedintegerliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedstringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 132)))) != 0)) {
        setState(1776);
        constantexpression();
      }
      setState(1779);
      match(CPP14Parser::RightBracket);
      setState(1781);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 198, _ctx)) {
      case 1: {
        setState(1780);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 3: {
      setState(1783);
      match(CPP14Parser::LeftParen);
      setState(1784);
      ptrabstractdeclarator();
      setState(1785);
      match(CPP14Parser::RightParen);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1802);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1800);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 202, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrabstractdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractdeclarator);
          setState(1789);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(1790);
          parametersandqualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrabstractdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractdeclarator);
          setState(1791);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1792);
          match(CPP14Parser::LeftBracket);
          setState(1794);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CPP14Parser::Alignof)
            | (1ULL << CPP14Parser::Auto)
            | (1ULL << CPP14Parser::Bool)
            | (1ULL << CPP14Parser::Char)
            | (1ULL << CPP14Parser::Char16)
            | (1ULL << CPP14Parser::Char32)
            | (1ULL << CPP14Parser::Const_cast)
            | (1ULL << CPP14Parser::Decltype)
            | (1ULL << CPP14Parser::Delete)
            | (1ULL << CPP14Parser::Double)
            | (1ULL << CPP14Parser::Dynamic_cast)
            | (1ULL << CPP14Parser::False)
            | (1ULL << CPP14Parser::Float)
            | (1ULL << CPP14Parser::Int)
            | (1ULL << CPP14Parser::Long)
            | (1ULL << CPP14Parser::New)
            | (1ULL << CPP14Parser::Noexcept)
            | (1ULL << CPP14Parser::Nullptr)
            | (1ULL << CPP14Parser::Operator)
            | (1ULL << CPP14Parser::Reinterpret_cast)
            | (1ULL << CPP14Parser::Short)
            | (1ULL << CPP14Parser::Signed)
            | (1ULL << CPP14Parser::Sizeof)
            | (1ULL << CPP14Parser::Static_cast)
            | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::True - 65))
            | (1ULL << (CPP14Parser::Typeid - 65))
            | (1ULL << (CPP14Parser::Typename - 65))
            | (1ULL << (CPP14Parser::Unsigned - 65))
            | (1ULL << (CPP14Parser::Void - 65))
            | (1ULL << (CPP14Parser::Wchar - 65))
            | (1ULL << (CPP14Parser::LeftParen - 65))
            | (1ULL << (CPP14Parser::LeftBracket - 65))
            | (1ULL << (CPP14Parser::Plus - 65))
            | (1ULL << (CPP14Parser::Minus - 65))
            | (1ULL << (CPP14Parser::Star - 65))
            | (1ULL << (CPP14Parser::And - 65))
            | (1ULL << (CPP14Parser::Or - 65))
            | (1ULL << (CPP14Parser::Tilde - 65))
            | (1ULL << (CPP14Parser::Not - 65))
            | (1ULL << (CPP14Parser::PlusPlus - 65))
            | (1ULL << (CPP14Parser::MinusMinus - 65))
            | (1ULL << (CPP14Parser::Doublecolon - 65))
            | (1ULL << (CPP14Parser::Identifier - 65))
            | (1ULL << (CPP14Parser::Integerliteral - 65)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 132)) & ((1ULL << (CPP14Parser::Characterliteral - 132))
            | (1ULL << (CPP14Parser::Floatingliteral - 132))
            | (1ULL << (CPP14Parser::Stringliteral - 132))
            | (1ULL << (CPP14Parser::Userdefinedintegerliteral - 132))
            | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 132))
            | (1ULL << (CPP14Parser::Userdefinedstringliteral - 132))
            | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 132)))) != 0)) {
            setState(1793);
            constantexpression();
          }
          setState(1796);
          match(CPP14Parser::RightBracket);
          setState(1798);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 201, _ctx)) {
          case 1: {
            setState(1797);
            attributespecifierseq(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1804);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AbstractpackdeclaratorContext ------------------------------------------------------------------

CPP14Parser::AbstractpackdeclaratorContext::AbstractpackdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::NoptrabstractpackdeclaratorContext* CPP14Parser::AbstractpackdeclaratorContext::noptrabstractpackdeclarator() {
  return getRuleContext<CPP14Parser::NoptrabstractpackdeclaratorContext>(0);
}

CPP14Parser::PtroperatorContext* CPP14Parser::AbstractpackdeclaratorContext::ptroperator() {
  return getRuleContext<CPP14Parser::PtroperatorContext>(0);
}

CPP14Parser::AbstractpackdeclaratorContext* CPP14Parser::AbstractpackdeclaratorContext::abstractpackdeclarator() {
  return getRuleContext<CPP14Parser::AbstractpackdeclaratorContext>(0);
}


size_t CPP14Parser::AbstractpackdeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleAbstractpackdeclarator;
}

antlrcpp::Any CPP14Parser::AbstractpackdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAbstractpackdeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AbstractpackdeclaratorContext* CPP14Parser::abstractpackdeclarator() {
  AbstractpackdeclaratorContext *_localctx = _tracker.createInstance<AbstractpackdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 260, CPP14Parser::RuleAbstractpackdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1809);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Ellipsis: {
        enterOuterAlt(_localctx, 1);
        setState(1805);
        noptrabstractpackdeclarator(0);
        break;
      }

      case CPP14Parser::Decltype:
      case CPP14Parser::Star:
      case CPP14Parser::And:
      case CPP14Parser::AndAnd:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1806);
        ptroperator();
        setState(1807);
        abstractpackdeclarator();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoptrabstractpackdeclaratorContext ------------------------------------------------------------------

CPP14Parser::NoptrabstractpackdeclaratorContext::NoptrabstractpackdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::NoptrabstractpackdeclaratorContext* CPP14Parser::NoptrabstractpackdeclaratorContext::noptrabstractpackdeclarator() {
  return getRuleContext<CPP14Parser::NoptrabstractpackdeclaratorContext>(0);
}

CPP14Parser::ParametersandqualifiersContext* CPP14Parser::NoptrabstractpackdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<CPP14Parser::ParametersandqualifiersContext>(0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::NoptrabstractpackdeclaratorContext::constantexpression() {
  return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::NoptrabstractpackdeclaratorContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}


size_t CPP14Parser::NoptrabstractpackdeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleNoptrabstractpackdeclarator;
}

antlrcpp::Any CPP14Parser::NoptrabstractpackdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNoptrabstractpackdeclarator(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::NoptrabstractpackdeclaratorContext* CPP14Parser::noptrabstractpackdeclarator() {
   return noptrabstractpackdeclarator(0);
}

CPP14Parser::NoptrabstractpackdeclaratorContext* CPP14Parser::noptrabstractpackdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::NoptrabstractpackdeclaratorContext *_localctx = _tracker.createInstance<NoptrabstractpackdeclaratorContext>(_ctx, parentState);
  CPP14Parser::NoptrabstractpackdeclaratorContext *previousContext = _localctx;
  size_t startState = 262;
  enterRecursionRule(_localctx, 262, CPP14Parser::RuleNoptrabstractpackdeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1812);
    match(CPP14Parser::Ellipsis);
    _ctx->stop = _input->LT(-1);
    setState(1827);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 208, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1825);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 207, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrabstractpackdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractpackdeclarator);
          setState(1814);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1815);
          parametersandqualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrabstractpackdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractpackdeclarator);
          setState(1816);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1817);
          match(CPP14Parser::LeftBracket);
          setState(1819);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CPP14Parser::Alignof)
            | (1ULL << CPP14Parser::Auto)
            | (1ULL << CPP14Parser::Bool)
            | (1ULL << CPP14Parser::Char)
            | (1ULL << CPP14Parser::Char16)
            | (1ULL << CPP14Parser::Char32)
            | (1ULL << CPP14Parser::Const_cast)
            | (1ULL << CPP14Parser::Decltype)
            | (1ULL << CPP14Parser::Delete)
            | (1ULL << CPP14Parser::Double)
            | (1ULL << CPP14Parser::Dynamic_cast)
            | (1ULL << CPP14Parser::False)
            | (1ULL << CPP14Parser::Float)
            | (1ULL << CPP14Parser::Int)
            | (1ULL << CPP14Parser::Long)
            | (1ULL << CPP14Parser::New)
            | (1ULL << CPP14Parser::Noexcept)
            | (1ULL << CPP14Parser::Nullptr)
            | (1ULL << CPP14Parser::Operator)
            | (1ULL << CPP14Parser::Reinterpret_cast)
            | (1ULL << CPP14Parser::Short)
            | (1ULL << CPP14Parser::Signed)
            | (1ULL << CPP14Parser::Sizeof)
            | (1ULL << CPP14Parser::Static_cast)
            | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::True - 65))
            | (1ULL << (CPP14Parser::Typeid - 65))
            | (1ULL << (CPP14Parser::Typename - 65))
            | (1ULL << (CPP14Parser::Unsigned - 65))
            | (1ULL << (CPP14Parser::Void - 65))
            | (1ULL << (CPP14Parser::Wchar - 65))
            | (1ULL << (CPP14Parser::LeftParen - 65))
            | (1ULL << (CPP14Parser::LeftBracket - 65))
            | (1ULL << (CPP14Parser::Plus - 65))
            | (1ULL << (CPP14Parser::Minus - 65))
            | (1ULL << (CPP14Parser::Star - 65))
            | (1ULL << (CPP14Parser::And - 65))
            | (1ULL << (CPP14Parser::Or - 65))
            | (1ULL << (CPP14Parser::Tilde - 65))
            | (1ULL << (CPP14Parser::Not - 65))
            | (1ULL << (CPP14Parser::PlusPlus - 65))
            | (1ULL << (CPP14Parser::MinusMinus - 65))
            | (1ULL << (CPP14Parser::Doublecolon - 65))
            | (1ULL << (CPP14Parser::Identifier - 65))
            | (1ULL << (CPP14Parser::Integerliteral - 65)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 132)) & ((1ULL << (CPP14Parser::Characterliteral - 132))
            | (1ULL << (CPP14Parser::Floatingliteral - 132))
            | (1ULL << (CPP14Parser::Stringliteral - 132))
            | (1ULL << (CPP14Parser::Userdefinedintegerliteral - 132))
            | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 132))
            | (1ULL << (CPP14Parser::Userdefinedstringliteral - 132))
            | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 132)))) != 0)) {
            setState(1818);
            constantexpression();
          }
          setState(1821);
          match(CPP14Parser::RightBracket);
          setState(1823);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 206, _ctx)) {
          case 1: {
            setState(1822);
            attributespecifierseq(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1829);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 208, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParameterdeclarationclauseContext ------------------------------------------------------------------

CPP14Parser::ParameterdeclarationclauseContext::ParameterdeclarationclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ParameterdeclarationlistContext* CPP14Parser::ParameterdeclarationclauseContext::parameterdeclarationlist() {
  return getRuleContext<CPP14Parser::ParameterdeclarationlistContext>(0);
}


size_t CPP14Parser::ParameterdeclarationclauseContext::getRuleIndex() const {
  return CPP14Parser::RuleParameterdeclarationclause;
}

antlrcpp::Any CPP14Parser::ParameterdeclarationclauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitParameterdeclarationclause(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ParameterdeclarationclauseContext* CPP14Parser::parameterdeclarationclause() {
  ParameterdeclarationclauseContext *_localctx = _tracker.createInstance<ParameterdeclarationclauseContext>(_ctx, getState());
  enterRule(_localctx, 264, CPP14Parser::RuleParameterdeclarationclause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1840);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 211, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1831);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CPP14Parser::Alignas)
        | (1ULL << CPP14Parser::Auto)
        | (1ULL << CPP14Parser::Bool)
        | (1ULL << CPP14Parser::Char)
        | (1ULL << CPP14Parser::Char16)
        | (1ULL << CPP14Parser::Char32)
        | (1ULL << CPP14Parser::Class)
        | (1ULL << CPP14Parser::Const)
        | (1ULL << CPP14Parser::Constexpr)
        | (1ULL << CPP14Parser::Decltype)
        | (1ULL << CPP14Parser::Double)
        | (1ULL << CPP14Parser::Enum)
        | (1ULL << CPP14Parser::Explicit)
        | (1ULL << CPP14Parser::Extern)
        | (1ULL << CPP14Parser::Float)
        | (1ULL << CPP14Parser::Friend)
        | (1ULL << CPP14Parser::Inline)
        | (1ULL << CPP14Parser::Int)
        | (1ULL << CPP14Parser::Long)
        | (1ULL << CPP14Parser::Mutable)
        | (1ULL << CPP14Parser::Register)
        | (1ULL << CPP14Parser::Short)
        | (1ULL << CPP14Parser::Signed)
        | (1ULL << CPP14Parser::Static)
        | (1ULL << CPP14Parser::Struct)
        | (1ULL << CPP14Parser::Thread_local))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 67)) & ((1ULL << (CPP14Parser::Typedef - 67))
        | (1ULL << (CPP14Parser::Typename - 67))
        | (1ULL << (CPP14Parser::Union - 67))
        | (1ULL << (CPP14Parser::Unsigned - 67))
        | (1ULL << (CPP14Parser::Virtual - 67))
        | (1ULL << (CPP14Parser::Void - 67))
        | (1ULL << (CPP14Parser::Volatile - 67))
        | (1ULL << (CPP14Parser::Wchar - 67))
        | (1ULL << (CPP14Parser::LeftBracket - 67))
        | (1ULL << (CPP14Parser::Doublecolon - 67))
        | (1ULL << (CPP14Parser::Identifier - 67)))) != 0)) {
        setState(1830);
        parameterdeclarationlist(0);
      }
      setState(1834);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Ellipsis) {
        setState(1833);
        match(CPP14Parser::Ellipsis);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1836);
      parameterdeclarationlist(0);
      setState(1837);
      match(CPP14Parser::Comma);
      setState(1838);
      match(CPP14Parser::Ellipsis);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterdeclarationlistContext ------------------------------------------------------------------

CPP14Parser::ParameterdeclarationlistContext::ParameterdeclarationlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ParameterdeclarationContext* CPP14Parser::ParameterdeclarationlistContext::parameterdeclaration() {
  return getRuleContext<CPP14Parser::ParameterdeclarationContext>(0);
}

CPP14Parser::ParameterdeclarationlistContext* CPP14Parser::ParameterdeclarationlistContext::parameterdeclarationlist() {
  return getRuleContext<CPP14Parser::ParameterdeclarationlistContext>(0);
}


size_t CPP14Parser::ParameterdeclarationlistContext::getRuleIndex() const {
  return CPP14Parser::RuleParameterdeclarationlist;
}

antlrcpp::Any CPP14Parser::ParameterdeclarationlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitParameterdeclarationlist(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::ParameterdeclarationlistContext* CPP14Parser::parameterdeclarationlist() {
   return parameterdeclarationlist(0);
}

CPP14Parser::ParameterdeclarationlistContext* CPP14Parser::parameterdeclarationlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::ParameterdeclarationlistContext *_localctx = _tracker.createInstance<ParameterdeclarationlistContext>(_ctx, parentState);
  CPP14Parser::ParameterdeclarationlistContext *previousContext = _localctx;
  size_t startState = 266;
  enterRecursionRule(_localctx, 266, CPP14Parser::RuleParameterdeclarationlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1843);
    parameterdeclaration();
    _ctx->stop = _input->LT(-1);
    setState(1850);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 212, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ParameterdeclarationlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleParameterdeclarationlist);
        setState(1845);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1846);
        match(CPP14Parser::Comma);
        setState(1847);
        parameterdeclaration(); 
      }
      setState(1852);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 212, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParameterdeclarationContext ------------------------------------------------------------------

CPP14Parser::ParameterdeclarationContext::ParameterdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DeclspecifierseqContext* CPP14Parser::ParameterdeclarationContext::declspecifierseq() {
  return getRuleContext<CPP14Parser::DeclspecifierseqContext>(0);
}

CPP14Parser::DeclaratorContext* CPP14Parser::ParameterdeclarationContext::declarator() {
  return getRuleContext<CPP14Parser::DeclaratorContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::ParameterdeclarationContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::InitializerclauseContext* CPP14Parser::ParameterdeclarationContext::initializerclause() {
  return getRuleContext<CPP14Parser::InitializerclauseContext>(0);
}

CPP14Parser::AbstractdeclaratorContext* CPP14Parser::ParameterdeclarationContext::abstractdeclarator() {
  return getRuleContext<CPP14Parser::AbstractdeclaratorContext>(0);
}


size_t CPP14Parser::ParameterdeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleParameterdeclaration;
}

antlrcpp::Any CPP14Parser::ParameterdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitParameterdeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ParameterdeclarationContext* CPP14Parser::parameterdeclaration() {
  ParameterdeclarationContext *_localctx = _tracker.createInstance<ParameterdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 268, CPP14Parser::RuleParameterdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1884);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 219, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1854);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(1853);
        attributespecifierseq(0);
      }
      setState(1856);
      declspecifierseq();
      setState(1857);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1860);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(1859);
        attributespecifierseq(0);
      }
      setState(1862);
      declspecifierseq();
      setState(1863);
      declarator();
      setState(1864);
      match(CPP14Parser::Assign);
      setState(1865);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1868);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(1867);
        attributespecifierseq(0);
      }
      setState(1870);
      declspecifierseq();
      setState(1872);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 216, _ctx)) {
      case 1: {
        setState(1871);
        abstractdeclarator();
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1875);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(1874);
        attributespecifierseq(0);
      }
      setState(1877);
      declspecifierseq();
      setState(1879);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Decltype || ((((_la - 78) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 78)) & ((1ULL << (CPP14Parser::LeftParen - 78))
        | (1ULL << (CPP14Parser::LeftBracket - 78))
        | (1ULL << (CPP14Parser::Star - 78))
        | (1ULL << (CPP14Parser::And - 78))
        | (1ULL << (CPP14Parser::AndAnd - 78))
        | (1ULL << (CPP14Parser::Doublecolon - 78))
        | (1ULL << (CPP14Parser::Ellipsis - 78))
        | (1ULL << (CPP14Parser::Identifier - 78)))) != 0)) {
        setState(1878);
        abstractdeclarator();
      }
      setState(1881);
      match(CPP14Parser::Assign);
      setState(1882);
      initializerclause();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiondefinitionContext ------------------------------------------------------------------

CPP14Parser::FunctiondefinitionContext::FunctiondefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DeclaratorContext* CPP14Parser::FunctiondefinitionContext::declarator() {
  return getRuleContext<CPP14Parser::DeclaratorContext>(0);
}

CPP14Parser::FunctionbodyContext* CPP14Parser::FunctiondefinitionContext::functionbody() {
  return getRuleContext<CPP14Parser::FunctionbodyContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::FunctiondefinitionContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::DeclspecifierseqContext* CPP14Parser::FunctiondefinitionContext::declspecifierseq() {
  return getRuleContext<CPP14Parser::DeclspecifierseqContext>(0);
}

CPP14Parser::VirtspecifierseqContext* CPP14Parser::FunctiondefinitionContext::virtspecifierseq() {
  return getRuleContext<CPP14Parser::VirtspecifierseqContext>(0);
}


size_t CPP14Parser::FunctiondefinitionContext::getRuleIndex() const {
  return CPP14Parser::RuleFunctiondefinition;
}

antlrcpp::Any CPP14Parser::FunctiondefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitFunctiondefinition(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::FunctiondefinitionContext* CPP14Parser::functiondefinition() {
  FunctiondefinitionContext *_localctx = _tracker.createInstance<FunctiondefinitionContext>(_ctx, getState());
  enterRule(_localctx, 270, CPP14Parser::RuleFunctiondefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1887);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
      setState(1886);
      attributespecifierseq(0);
    }
    setState(1890);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 221, _ctx)) {
    case 1: {
      setState(1889);
      declspecifierseq();
      break;
    }

    }
    setState(1892);
    declarator();
    setState(1894);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Final

    || _la == CPP14Parser::Override) {
      setState(1893);
      virtspecifierseq(0);
    }
    setState(1896);
    functionbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionbodyContext ------------------------------------------------------------------

CPP14Parser::FunctionbodyContext::FunctionbodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::CompoundstatementContext* CPP14Parser::FunctionbodyContext::compoundstatement() {
  return getRuleContext<CPP14Parser::CompoundstatementContext>(0);
}

CPP14Parser::CtorinitializerContext* CPP14Parser::FunctionbodyContext::ctorinitializer() {
  return getRuleContext<CPP14Parser::CtorinitializerContext>(0);
}

CPP14Parser::FunctiontryblockContext* CPP14Parser::FunctionbodyContext::functiontryblock() {
  return getRuleContext<CPP14Parser::FunctiontryblockContext>(0);
}

tree::TerminalNode* CPP14Parser::FunctionbodyContext::Default() {
  return getToken(CPP14Parser::Default, 0);
}

tree::TerminalNode* CPP14Parser::FunctionbodyContext::Delete() {
  return getToken(CPP14Parser::Delete, 0);
}


size_t CPP14Parser::FunctionbodyContext::getRuleIndex() const {
  return CPP14Parser::RuleFunctionbody;
}

antlrcpp::Any CPP14Parser::FunctionbodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitFunctionbody(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::FunctionbodyContext* CPP14Parser::functionbody() {
  FunctionbodyContext *_localctx = _tracker.createInstance<FunctionbodyContext>(_ctx, getState());
  enterRule(_localctx, 272, CPP14Parser::RuleFunctionbody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1909);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 224, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1899);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Colon) {
        setState(1898);
        ctorinitializer();
      }
      setState(1901);
      compoundstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1902);
      functiontryblock();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1903);
      match(CPP14Parser::Assign);
      setState(1904);
      match(CPP14Parser::Default);
      setState(1905);
      match(CPP14Parser::Semi);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1906);
      match(CPP14Parser::Assign);
      setState(1907);
      match(CPP14Parser::Delete);
      setState(1908);
      match(CPP14Parser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerContext ------------------------------------------------------------------

CPP14Parser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::BraceorequalinitializerContext* CPP14Parser::InitializerContext::braceorequalinitializer() {
  return getRuleContext<CPP14Parser::BraceorequalinitializerContext>(0);
}

CPP14Parser::ExpressionlistContext* CPP14Parser::InitializerContext::expressionlist() {
  return getRuleContext<CPP14Parser::ExpressionlistContext>(0);
}


size_t CPP14Parser::InitializerContext::getRuleIndex() const {
  return CPP14Parser::RuleInitializer;
}

antlrcpp::Any CPP14Parser::InitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitInitializer(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::InitializerContext* CPP14Parser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 274, CPP14Parser::RuleInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1916);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::LeftBrace:
      case CPP14Parser::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(1911);
        braceorequalinitializer();
        break;
      }

      case CPP14Parser::LeftParen: {
        enterOuterAlt(_localctx, 2);
        setState(1912);
        match(CPP14Parser::LeftParen);
        setState(1913);
        expressionlist();
        setState(1914);
        match(CPP14Parser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BraceorequalinitializerContext ------------------------------------------------------------------

CPP14Parser::BraceorequalinitializerContext::BraceorequalinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::InitializerclauseContext* CPP14Parser::BraceorequalinitializerContext::initializerclause() {
  return getRuleContext<CPP14Parser::InitializerclauseContext>(0);
}

CPP14Parser::BracedinitlistContext* CPP14Parser::BraceorequalinitializerContext::bracedinitlist() {
  return getRuleContext<CPP14Parser::BracedinitlistContext>(0);
}


size_t CPP14Parser::BraceorequalinitializerContext::getRuleIndex() const {
  return CPP14Parser::RuleBraceorequalinitializer;
}

antlrcpp::Any CPP14Parser::BraceorequalinitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitBraceorequalinitializer(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::BraceorequalinitializerContext* CPP14Parser::braceorequalinitializer() {
  BraceorequalinitializerContext *_localctx = _tracker.createInstance<BraceorequalinitializerContext>(_ctx, getState());
  enterRule(_localctx, 276, CPP14Parser::RuleBraceorequalinitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1921);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(1918);
        match(CPP14Parser::Assign);
        setState(1919);
        initializerclause();
        break;
      }

      case CPP14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1920);
        bracedinitlist();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerclauseContext ------------------------------------------------------------------

CPP14Parser::InitializerclauseContext::InitializerclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::AssignmentexpressionContext* CPP14Parser::InitializerclauseContext::assignmentexpression() {
  return getRuleContext<CPP14Parser::AssignmentexpressionContext>(0);
}

CPP14Parser::BracedinitlistContext* CPP14Parser::InitializerclauseContext::bracedinitlist() {
  return getRuleContext<CPP14Parser::BracedinitlistContext>(0);
}


size_t CPP14Parser::InitializerclauseContext::getRuleIndex() const {
  return CPP14Parser::RuleInitializerclause;
}

antlrcpp::Any CPP14Parser::InitializerclauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitInitializerclause(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::InitializerclauseContext* CPP14Parser::initializerclause() {
  InitializerclauseContext *_localctx = _tracker.createInstance<InitializerclauseContext>(_ctx, getState());
  enterRule(_localctx, 278, CPP14Parser::RuleInitializerclause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1925);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Alignof:
      case CPP14Parser::Auto:
      case CPP14Parser::Bool:
      case CPP14Parser::Char:
      case CPP14Parser::Char16:
      case CPP14Parser::Char32:
      case CPP14Parser::Const_cast:
      case CPP14Parser::Decltype:
      case CPP14Parser::Delete:
      case CPP14Parser::Double:
      case CPP14Parser::Dynamic_cast:
      case CPP14Parser::False:
      case CPP14Parser::Float:
      case CPP14Parser::Int:
      case CPP14Parser::Long:
      case CPP14Parser::New:
      case CPP14Parser::Noexcept:
      case CPP14Parser::Nullptr:
      case CPP14Parser::Operator:
      case CPP14Parser::Reinterpret_cast:
      case CPP14Parser::Short:
      case CPP14Parser::Signed:
      case CPP14Parser::Sizeof:
      case CPP14Parser::Static_cast:
      case CPP14Parser::This:
      case CPP14Parser::Throw:
      case CPP14Parser::True:
      case CPP14Parser::Typeid:
      case CPP14Parser::Typename:
      case CPP14Parser::Unsigned:
      case CPP14Parser::Void:
      case CPP14Parser::Wchar:
      case CPP14Parser::LeftParen:
      case CPP14Parser::LeftBracket:
      case CPP14Parser::Plus:
      case CPP14Parser::Minus:
      case CPP14Parser::Star:
      case CPP14Parser::And:
      case CPP14Parser::Or:
      case CPP14Parser::Tilde:
      case CPP14Parser::Not:
      case CPP14Parser::PlusPlus:
      case CPP14Parser::MinusMinus:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier:
      case CPP14Parser::Integerliteral:
      case CPP14Parser::Characterliteral:
      case CPP14Parser::Floatingliteral:
      case CPP14Parser::Stringliteral:
      case CPP14Parser::Userdefinedintegerliteral:
      case CPP14Parser::Userdefinedfloatingliteral:
      case CPP14Parser::Userdefinedstringliteral:
      case CPP14Parser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 1);
        setState(1923);
        assignmentexpression();
        break;
      }

      case CPP14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1924);
        bracedinitlist();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerlistContext ------------------------------------------------------------------

CPP14Parser::InitializerlistContext::InitializerlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::InitializerclauseContext* CPP14Parser::InitializerlistContext::initializerclause() {
  return getRuleContext<CPP14Parser::InitializerclauseContext>(0);
}

CPP14Parser::InitializerlistContext* CPP14Parser::InitializerlistContext::initializerlist() {
  return getRuleContext<CPP14Parser::InitializerlistContext>(0);
}


size_t CPP14Parser::InitializerlistContext::getRuleIndex() const {
  return CPP14Parser::RuleInitializerlist;
}

antlrcpp::Any CPP14Parser::InitializerlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitInitializerlist(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::InitializerlistContext* CPP14Parser::initializerlist() {
   return initializerlist(0);
}

CPP14Parser::InitializerlistContext* CPP14Parser::initializerlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::InitializerlistContext *_localctx = _tracker.createInstance<InitializerlistContext>(_ctx, parentState);
  CPP14Parser::InitializerlistContext *previousContext = _localctx;
  size_t startState = 280;
  enterRecursionRule(_localctx, 280, CPP14Parser::RuleInitializerlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1928);
    initializerclause();
    setState(1930);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 228, _ctx)) {
    case 1: {
      setState(1929);
      match(CPP14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1940);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 230, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitializerlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitializerlist);
        setState(1932);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1933);
        match(CPP14Parser::Comma);
        setState(1934);
        initializerclause();
        setState(1936);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 229, _ctx)) {
        case 1: {
          setState(1935);
          match(CPP14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(1942);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 230, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BracedinitlistContext ------------------------------------------------------------------

CPP14Parser::BracedinitlistContext::BracedinitlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::InitializerlistContext* CPP14Parser::BracedinitlistContext::initializerlist() {
  return getRuleContext<CPP14Parser::InitializerlistContext>(0);
}


size_t CPP14Parser::BracedinitlistContext::getRuleIndex() const {
  return CPP14Parser::RuleBracedinitlist;
}

antlrcpp::Any CPP14Parser::BracedinitlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitBracedinitlist(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::BracedinitlistContext* CPP14Parser::bracedinitlist() {
  BracedinitlistContext *_localctx = _tracker.createInstance<BracedinitlistContext>(_ctx, getState());
  enterRule(_localctx, 282, CPP14Parser::RuleBracedinitlist);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1952);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 232, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1943);
      match(CPP14Parser::LeftBrace);
      setState(1944);
      initializerlist(0);
      setState(1946);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Comma) {
        setState(1945);
        match(CPP14Parser::Comma);
      }
      setState(1948);
      match(CPP14Parser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1950);
      match(CPP14Parser::LeftBrace);
      setState(1951);
      match(CPP14Parser::RightBrace);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassnameContext ------------------------------------------------------------------

CPP14Parser::ClassnameContext::ClassnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ClassnameContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::ClassnameContext::simpletemplateid() {
  return getRuleContext<CPP14Parser::SimpletemplateidContext>(0);
}


size_t CPP14Parser::ClassnameContext::getRuleIndex() const {
  return CPP14Parser::RuleClassname;
}

antlrcpp::Any CPP14Parser::ClassnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitClassname(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ClassnameContext* CPP14Parser::classname() {
  ClassnameContext *_localctx = _tracker.createInstance<ClassnameContext>(_ctx, getState());
  enterRule(_localctx, 284, CPP14Parser::RuleClassname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1956);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 233, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1954);
      match(CPP14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1955);
      simpletemplateid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassspecifierContext ------------------------------------------------------------------

CPP14Parser::ClassspecifierContext::ClassspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ClassheadContext* CPP14Parser::ClassspecifierContext::classhead() {
  return getRuleContext<CPP14Parser::ClassheadContext>(0);
}

CPP14Parser::MemberspecificationContext* CPP14Parser::ClassspecifierContext::memberspecification() {
  return getRuleContext<CPP14Parser::MemberspecificationContext>(0);
}


size_t CPP14Parser::ClassspecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleClassspecifier;
}

antlrcpp::Any CPP14Parser::ClassspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitClassspecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ClassspecifierContext* CPP14Parser::classspecifier() {
  ClassspecifierContext *_localctx = _tracker.createInstance<ClassspecifierContext>(_ctx, getState());
  enterRule(_localctx, 286, CPP14Parser::RuleClassspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1958);
    classhead();
    setState(1959);
    match(CPP14Parser::LeftBrace);
    setState(1961);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CPP14Parser::Alignas)
      | (1ULL << CPP14Parser::Auto)
      | (1ULL << CPP14Parser::Bool)
      | (1ULL << CPP14Parser::Char)
      | (1ULL << CPP14Parser::Char16)
      | (1ULL << CPP14Parser::Char32)
      | (1ULL << CPP14Parser::Class)
      | (1ULL << CPP14Parser::Const)
      | (1ULL << CPP14Parser::Constexpr)
      | (1ULL << CPP14Parser::Decltype)
      | (1ULL << CPP14Parser::Double)
      | (1ULL << CPP14Parser::Enum)
      | (1ULL << CPP14Parser::Explicit)
      | (1ULL << CPP14Parser::Extern)
      | (1ULL << CPP14Parser::Float)
      | (1ULL << CPP14Parser::Friend)
      | (1ULL << CPP14Parser::Inline)
      | (1ULL << CPP14Parser::Int)
      | (1ULL << CPP14Parser::Long)
      | (1ULL << CPP14Parser::Mutable)
      | (1ULL << CPP14Parser::Operator)
      | (1ULL << CPP14Parser::Private)
      | (1ULL << CPP14Parser::Protected)
      | (1ULL << CPP14Parser::Public)
      | (1ULL << CPP14Parser::Register)
      | (1ULL << CPP14Parser::Short)
      | (1ULL << CPP14Parser::Signed)
      | (1ULL << CPP14Parser::Static)
      | (1ULL << CPP14Parser::Static_assert)
      | (1ULL << CPP14Parser::Struct)
      | (1ULL << CPP14Parser::Template)
      | (1ULL << CPP14Parser::Thread_local))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (CPP14Parser::Typedef - 67))
      | (1ULL << (CPP14Parser::Typename - 67))
      | (1ULL << (CPP14Parser::Union - 67))
      | (1ULL << (CPP14Parser::Unsigned - 67))
      | (1ULL << (CPP14Parser::Using - 67))
      | (1ULL << (CPP14Parser::Virtual - 67))
      | (1ULL << (CPP14Parser::Void - 67))
      | (1ULL << (CPP14Parser::Volatile - 67))
      | (1ULL << (CPP14Parser::Wchar - 67))
      | (1ULL << (CPP14Parser::LeftParen - 67))
      | (1ULL << (CPP14Parser::LeftBracket - 67))
      | (1ULL << (CPP14Parser::Star - 67))
      | (1ULL << (CPP14Parser::And - 67))
      | (1ULL << (CPP14Parser::Tilde - 67))
      | (1ULL << (CPP14Parser::AndAnd - 67))
      | (1ULL << (CPP14Parser::Colon - 67))
      | (1ULL << (CPP14Parser::Doublecolon - 67))
      | (1ULL << (CPP14Parser::Semi - 67))
      | (1ULL << (CPP14Parser::Ellipsis - 67))
      | (1ULL << (CPP14Parser::Identifier - 67)))) != 0)) {
      setState(1960);
      memberspecification();
    }
    setState(1963);
    match(CPP14Parser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassheadContext ------------------------------------------------------------------

CPP14Parser::ClassheadContext::ClassheadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ClasskeyContext* CPP14Parser::ClassheadContext::classkey() {
  return getRuleContext<CPP14Parser::ClasskeyContext>(0);
}

CPP14Parser::ClassheadnameContext* CPP14Parser::ClassheadContext::classheadname() {
  return getRuleContext<CPP14Parser::ClassheadnameContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::ClassheadContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::ClassvirtspecifierContext* CPP14Parser::ClassheadContext::classvirtspecifier() {
  return getRuleContext<CPP14Parser::ClassvirtspecifierContext>(0);
}

CPP14Parser::BaseclauseContext* CPP14Parser::ClassheadContext::baseclause() {
  return getRuleContext<CPP14Parser::BaseclauseContext>(0);
}


size_t CPP14Parser::ClassheadContext::getRuleIndex() const {
  return CPP14Parser::RuleClasshead;
}

antlrcpp::Any CPP14Parser::ClassheadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitClasshead(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ClassheadContext* CPP14Parser::classhead() {
  ClassheadContext *_localctx = _tracker.createInstance<ClassheadContext>(_ctx, getState());
  enterRule(_localctx, 288, CPP14Parser::RuleClasshead);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1983);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 240, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1965);
      classkey();
      setState(1967);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(1966);
        attributespecifierseq(0);
      }
      setState(1969);
      classheadname();
      setState(1971);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Final) {
        setState(1970);
        classvirtspecifier();
      }
      setState(1974);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Colon) {
        setState(1973);
        baseclause();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1976);
      classkey();
      setState(1978);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(1977);
        attributespecifierseq(0);
      }
      setState(1981);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Colon) {
        setState(1980);
        baseclause();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassheadnameContext ------------------------------------------------------------------

CPP14Parser::ClassheadnameContext::ClassheadnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ClassnameContext* CPP14Parser::ClassheadnameContext::classname() {
  return getRuleContext<CPP14Parser::ClassnameContext>(0);
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::ClassheadnameContext::nestednamespecifier() {
  return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);
}


size_t CPP14Parser::ClassheadnameContext::getRuleIndex() const {
  return CPP14Parser::RuleClassheadname;
}

antlrcpp::Any CPP14Parser::ClassheadnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitClassheadname(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ClassheadnameContext* CPP14Parser::classheadname() {
  ClassheadnameContext *_localctx = _tracker.createInstance<ClassheadnameContext>(_ctx, getState());
  enterRule(_localctx, 290, CPP14Parser::RuleClassheadname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1986);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 241, _ctx)) {
    case 1: {
      setState(1985);
      nestednamespecifier(0);
      break;
    }

    }
    setState(1988);
    classname();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassvirtspecifierContext ------------------------------------------------------------------

CPP14Parser::ClassvirtspecifierContext::ClassvirtspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ClassvirtspecifierContext::Final() {
  return getToken(CPP14Parser::Final, 0);
}


size_t CPP14Parser::ClassvirtspecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleClassvirtspecifier;
}

antlrcpp::Any CPP14Parser::ClassvirtspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitClassvirtspecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ClassvirtspecifierContext* CPP14Parser::classvirtspecifier() {
  ClassvirtspecifierContext *_localctx = _tracker.createInstance<ClassvirtspecifierContext>(_ctx, getState());
  enterRule(_localctx, 292, CPP14Parser::RuleClassvirtspecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1990);
    match(CPP14Parser::Final);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClasskeyContext ------------------------------------------------------------------

CPP14Parser::ClasskeyContext::ClasskeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ClasskeyContext::Class() {
  return getToken(CPP14Parser::Class, 0);
}

tree::TerminalNode* CPP14Parser::ClasskeyContext::Struct() {
  return getToken(CPP14Parser::Struct, 0);
}

tree::TerminalNode* CPP14Parser::ClasskeyContext::Union() {
  return getToken(CPP14Parser::Union, 0);
}


size_t CPP14Parser::ClasskeyContext::getRuleIndex() const {
  return CPP14Parser::RuleClasskey;
}

antlrcpp::Any CPP14Parser::ClasskeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitClasskey(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ClasskeyContext* CPP14Parser::classkey() {
  ClasskeyContext *_localctx = _tracker.createInstance<ClasskeyContext>(_ctx, getState());
  enterRule(_localctx, 294, CPP14Parser::RuleClasskey);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1992);
    _la = _input->LA(1);
    if (!(((((_la - 14) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 14)) & ((1ULL << (CPP14Parser::Class - 14))
      | (1ULL << (CPP14Parser::Struct - 14))
      | (1ULL << (CPP14Parser::Union - 14)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberspecificationContext ------------------------------------------------------------------

CPP14Parser::MemberspecificationContext::MemberspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::MemberdeclarationContext* CPP14Parser::MemberspecificationContext::memberdeclaration() {
  return getRuleContext<CPP14Parser::MemberdeclarationContext>(0);
}

CPP14Parser::MemberspecificationContext* CPP14Parser::MemberspecificationContext::memberspecification() {
  return getRuleContext<CPP14Parser::MemberspecificationContext>(0);
}

CPP14Parser::AccessspecifierContext* CPP14Parser::MemberspecificationContext::accessspecifier() {
  return getRuleContext<CPP14Parser::AccessspecifierContext>(0);
}


size_t CPP14Parser::MemberspecificationContext::getRuleIndex() const {
  return CPP14Parser::RuleMemberspecification;
}

antlrcpp::Any CPP14Parser::MemberspecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitMemberspecification(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::MemberspecificationContext* CPP14Parser::memberspecification() {
  MemberspecificationContext *_localctx = _tracker.createInstance<MemberspecificationContext>(_ctx, getState());
  enterRule(_localctx, 296, CPP14Parser::RuleMemberspecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2003);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Alignas:
      case CPP14Parser::Auto:
      case CPP14Parser::Bool:
      case CPP14Parser::Char:
      case CPP14Parser::Char16:
      case CPP14Parser::Char32:
      case CPP14Parser::Class:
      case CPP14Parser::Const:
      case CPP14Parser::Constexpr:
      case CPP14Parser::Decltype:
      case CPP14Parser::Double:
      case CPP14Parser::Enum:
      case CPP14Parser::Explicit:
      case CPP14Parser::Extern:
      case CPP14Parser::Float:
      case CPP14Parser::Friend:
      case CPP14Parser::Inline:
      case CPP14Parser::Int:
      case CPP14Parser::Long:
      case CPP14Parser::Mutable:
      case CPP14Parser::Operator:
      case CPP14Parser::Register:
      case CPP14Parser::Short:
      case CPP14Parser::Signed:
      case CPP14Parser::Static:
      case CPP14Parser::Static_assert:
      case CPP14Parser::Struct:
      case CPP14Parser::Template:
      case CPP14Parser::Thread_local:
      case CPP14Parser::Typedef:
      case CPP14Parser::Typename:
      case CPP14Parser::Union:
      case CPP14Parser::Unsigned:
      case CPP14Parser::Using:
      case CPP14Parser::Virtual:
      case CPP14Parser::Void:
      case CPP14Parser::Volatile:
      case CPP14Parser::Wchar:
      case CPP14Parser::LeftParen:
      case CPP14Parser::LeftBracket:
      case CPP14Parser::Star:
      case CPP14Parser::And:
      case CPP14Parser::Tilde:
      case CPP14Parser::AndAnd:
      case CPP14Parser::Colon:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Semi:
      case CPP14Parser::Ellipsis:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1994);
        memberdeclaration();
        setState(1996);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CPP14Parser::Alignas)
          | (1ULL << CPP14Parser::Auto)
          | (1ULL << CPP14Parser::Bool)
          | (1ULL << CPP14Parser::Char)
          | (1ULL << CPP14Parser::Char16)
          | (1ULL << CPP14Parser::Char32)
          | (1ULL << CPP14Parser::Class)
          | (1ULL << CPP14Parser::Const)
          | (1ULL << CPP14Parser::Constexpr)
          | (1ULL << CPP14Parser::Decltype)
          | (1ULL << CPP14Parser::Double)
          | (1ULL << CPP14Parser::Enum)
          | (1ULL << CPP14Parser::Explicit)
          | (1ULL << CPP14Parser::Extern)
          | (1ULL << CPP14Parser::Float)
          | (1ULL << CPP14Parser::Friend)
          | (1ULL << CPP14Parser::Inline)
          | (1ULL << CPP14Parser::Int)
          | (1ULL << CPP14Parser::Long)
          | (1ULL << CPP14Parser::Mutable)
          | (1ULL << CPP14Parser::Operator)
          | (1ULL << CPP14Parser::Private)
          | (1ULL << CPP14Parser::Protected)
          | (1ULL << CPP14Parser::Public)
          | (1ULL << CPP14Parser::Register)
          | (1ULL << CPP14Parser::Short)
          | (1ULL << CPP14Parser::Signed)
          | (1ULL << CPP14Parser::Static)
          | (1ULL << CPP14Parser::Static_assert)
          | (1ULL << CPP14Parser::Struct)
          | (1ULL << CPP14Parser::Template)
          | (1ULL << CPP14Parser::Thread_local))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 67)) & ((1ULL << (CPP14Parser::Typedef - 67))
          | (1ULL << (CPP14Parser::Typename - 67))
          | (1ULL << (CPP14Parser::Union - 67))
          | (1ULL << (CPP14Parser::Unsigned - 67))
          | (1ULL << (CPP14Parser::Using - 67))
          | (1ULL << (CPP14Parser::Virtual - 67))
          | (1ULL << (CPP14Parser::Void - 67))
          | (1ULL << (CPP14Parser::Volatile - 67))
          | (1ULL << (CPP14Parser::Wchar - 67))
          | (1ULL << (CPP14Parser::LeftParen - 67))
          | (1ULL << (CPP14Parser::LeftBracket - 67))
          | (1ULL << (CPP14Parser::Star - 67))
          | (1ULL << (CPP14Parser::And - 67))
          | (1ULL << (CPP14Parser::Tilde - 67))
          | (1ULL << (CPP14Parser::AndAnd - 67))
          | (1ULL << (CPP14Parser::Colon - 67))
          | (1ULL << (CPP14Parser::Doublecolon - 67))
          | (1ULL << (CPP14Parser::Semi - 67))
          | (1ULL << (CPP14Parser::Ellipsis - 67))
          | (1ULL << (CPP14Parser::Identifier - 67)))) != 0)) {
          setState(1995);
          memberspecification();
        }
        break;
      }

      case CPP14Parser::Private:
      case CPP14Parser::Protected:
      case CPP14Parser::Public: {
        enterOuterAlt(_localctx, 2);
        setState(1998);
        accessspecifier();
        setState(1999);
        match(CPP14Parser::Colon);
        setState(2001);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CPP14Parser::Alignas)
          | (1ULL << CPP14Parser::Auto)
          | (1ULL << CPP14Parser::Bool)
          | (1ULL << CPP14Parser::Char)
          | (1ULL << CPP14Parser::Char16)
          | (1ULL << CPP14Parser::Char32)
          | (1ULL << CPP14Parser::Class)
          | (1ULL << CPP14Parser::Const)
          | (1ULL << CPP14Parser::Constexpr)
          | (1ULL << CPP14Parser::Decltype)
          | (1ULL << CPP14Parser::Double)
          | (1ULL << CPP14Parser::Enum)
          | (1ULL << CPP14Parser::Explicit)
          | (1ULL << CPP14Parser::Extern)
          | (1ULL << CPP14Parser::Float)
          | (1ULL << CPP14Parser::Friend)
          | (1ULL << CPP14Parser::Inline)
          | (1ULL << CPP14Parser::Int)
          | (1ULL << CPP14Parser::Long)
          | (1ULL << CPP14Parser::Mutable)
          | (1ULL << CPP14Parser::Operator)
          | (1ULL << CPP14Parser::Private)
          | (1ULL << CPP14Parser::Protected)
          | (1ULL << CPP14Parser::Public)
          | (1ULL << CPP14Parser::Register)
          | (1ULL << CPP14Parser::Short)
          | (1ULL << CPP14Parser::Signed)
          | (1ULL << CPP14Parser::Static)
          | (1ULL << CPP14Parser::Static_assert)
          | (1ULL << CPP14Parser::Struct)
          | (1ULL << CPP14Parser::Template)
          | (1ULL << CPP14Parser::Thread_local))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 67)) & ((1ULL << (CPP14Parser::Typedef - 67))
          | (1ULL << (CPP14Parser::Typename - 67))
          | (1ULL << (CPP14Parser::Union - 67))
          | (1ULL << (CPP14Parser::Unsigned - 67))
          | (1ULL << (CPP14Parser::Using - 67))
          | (1ULL << (CPP14Parser::Virtual - 67))
          | (1ULL << (CPP14Parser::Void - 67))
          | (1ULL << (CPP14Parser::Volatile - 67))
          | (1ULL << (CPP14Parser::Wchar - 67))
          | (1ULL << (CPP14Parser::LeftParen - 67))
          | (1ULL << (CPP14Parser::LeftBracket - 67))
          | (1ULL << (CPP14Parser::Star - 67))
          | (1ULL << (CPP14Parser::And - 67))
          | (1ULL << (CPP14Parser::Tilde - 67))
          | (1ULL << (CPP14Parser::AndAnd - 67))
          | (1ULL << (CPP14Parser::Colon - 67))
          | (1ULL << (CPP14Parser::Doublecolon - 67))
          | (1ULL << (CPP14Parser::Semi - 67))
          | (1ULL << (CPP14Parser::Ellipsis - 67))
          | (1ULL << (CPP14Parser::Identifier - 67)))) != 0)) {
          setState(2000);
          memberspecification();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberdeclarationContext ------------------------------------------------------------------

CPP14Parser::MemberdeclarationContext::MemberdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::MemberdeclarationContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::DeclspecifierseqContext* CPP14Parser::MemberdeclarationContext::declspecifierseq() {
  return getRuleContext<CPP14Parser::DeclspecifierseqContext>(0);
}

CPP14Parser::MemberdeclaratorlistContext* CPP14Parser::MemberdeclarationContext::memberdeclaratorlist() {
  return getRuleContext<CPP14Parser::MemberdeclaratorlistContext>(0);
}

CPP14Parser::FunctiondefinitionContext* CPP14Parser::MemberdeclarationContext::functiondefinition() {
  return getRuleContext<CPP14Parser::FunctiondefinitionContext>(0);
}

CPP14Parser::UsingdeclarationContext* CPP14Parser::MemberdeclarationContext::usingdeclaration() {
  return getRuleContext<CPP14Parser::UsingdeclarationContext>(0);
}

CPP14Parser::Static_assertdeclarationContext* CPP14Parser::MemberdeclarationContext::static_assertdeclaration() {
  return getRuleContext<CPP14Parser::Static_assertdeclarationContext>(0);
}

CPP14Parser::TemplatedeclarationContext* CPP14Parser::MemberdeclarationContext::templatedeclaration() {
  return getRuleContext<CPP14Parser::TemplatedeclarationContext>(0);
}

CPP14Parser::AliasdeclarationContext* CPP14Parser::MemberdeclarationContext::aliasdeclaration() {
  return getRuleContext<CPP14Parser::AliasdeclarationContext>(0);
}

CPP14Parser::EmptydeclarationContext* CPP14Parser::MemberdeclarationContext::emptydeclaration() {
  return getRuleContext<CPP14Parser::EmptydeclarationContext>(0);
}


size_t CPP14Parser::MemberdeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleMemberdeclaration;
}

antlrcpp::Any CPP14Parser::MemberdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitMemberdeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::MemberdeclarationContext* CPP14Parser::memberdeclaration() {
  MemberdeclarationContext *_localctx = _tracker.createInstance<MemberdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 298, CPP14Parser::RuleMemberdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2021);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 248, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2006);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 245, _ctx)) {
      case 1: {
        setState(2005);
        attributespecifierseq(0);
        break;
      }

      }
      setState(2009);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 246, _ctx)) {
      case 1: {
        setState(2008);
        declspecifierseq();
        break;
      }

      }
      setState(2012);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CPP14Parser::Alignas)
        | (1ULL << CPP14Parser::Decltype)
        | (1ULL << CPP14Parser::Operator))) != 0) || ((((_la - 78) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 78)) & ((1ULL << (CPP14Parser::LeftParen - 78))
        | (1ULL << (CPP14Parser::LeftBracket - 78))
        | (1ULL << (CPP14Parser::Star - 78))
        | (1ULL << (CPP14Parser::And - 78))
        | (1ULL << (CPP14Parser::Tilde - 78))
        | (1ULL << (CPP14Parser::AndAnd - 78))
        | (1ULL << (CPP14Parser::Colon - 78))
        | (1ULL << (CPP14Parser::Doublecolon - 78))
        | (1ULL << (CPP14Parser::Ellipsis - 78))
        | (1ULL << (CPP14Parser::Identifier - 78)))) != 0)) {
        setState(2011);
        memberdeclaratorlist(0);
      }
      setState(2014);
      match(CPP14Parser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2015);
      functiondefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2016);
      usingdeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2017);
      static_assertdeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2018);
      templatedeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2019);
      aliasdeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2020);
      emptydeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberdeclaratorlistContext ------------------------------------------------------------------

CPP14Parser::MemberdeclaratorlistContext::MemberdeclaratorlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::MemberdeclaratorContext* CPP14Parser::MemberdeclaratorlistContext::memberdeclarator() {
  return getRuleContext<CPP14Parser::MemberdeclaratorContext>(0);
}

CPP14Parser::MemberdeclaratorlistContext* CPP14Parser::MemberdeclaratorlistContext::memberdeclaratorlist() {
  return getRuleContext<CPP14Parser::MemberdeclaratorlistContext>(0);
}


size_t CPP14Parser::MemberdeclaratorlistContext::getRuleIndex() const {
  return CPP14Parser::RuleMemberdeclaratorlist;
}

antlrcpp::Any CPP14Parser::MemberdeclaratorlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitMemberdeclaratorlist(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::MemberdeclaratorlistContext* CPP14Parser::memberdeclaratorlist() {
   return memberdeclaratorlist(0);
}

CPP14Parser::MemberdeclaratorlistContext* CPP14Parser::memberdeclaratorlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::MemberdeclaratorlistContext *_localctx = _tracker.createInstance<MemberdeclaratorlistContext>(_ctx, parentState);
  CPP14Parser::MemberdeclaratorlistContext *previousContext = _localctx;
  size_t startState = 300;
  enterRecursionRule(_localctx, 300, CPP14Parser::RuleMemberdeclaratorlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2024);
    memberdeclarator();
    _ctx->stop = _input->LT(-1);
    setState(2031);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 249, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MemberdeclaratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMemberdeclaratorlist);
        setState(2026);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2027);
        match(CPP14Parser::Comma);
        setState(2028);
        memberdeclarator(); 
      }
      setState(2033);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 249, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MemberdeclaratorContext ------------------------------------------------------------------

CPP14Parser::MemberdeclaratorContext::MemberdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DeclaratorContext* CPP14Parser::MemberdeclaratorContext::declarator() {
  return getRuleContext<CPP14Parser::DeclaratorContext>(0);
}

CPP14Parser::VirtspecifierseqContext* CPP14Parser::MemberdeclaratorContext::virtspecifierseq() {
  return getRuleContext<CPP14Parser::VirtspecifierseqContext>(0);
}

CPP14Parser::PurespecifierContext* CPP14Parser::MemberdeclaratorContext::purespecifier() {
  return getRuleContext<CPP14Parser::PurespecifierContext>(0);
}

CPP14Parser::BraceorequalinitializerContext* CPP14Parser::MemberdeclaratorContext::braceorequalinitializer() {
  return getRuleContext<CPP14Parser::BraceorequalinitializerContext>(0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::MemberdeclaratorContext::constantexpression() {
  return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::MemberdeclaratorContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::MemberdeclaratorContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}


size_t CPP14Parser::MemberdeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleMemberdeclarator;
}

antlrcpp::Any CPP14Parser::MemberdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitMemberdeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::MemberdeclaratorContext* CPP14Parser::memberdeclarator() {
  MemberdeclaratorContext *_localctx = _tracker.createInstance<MemberdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 302, CPP14Parser::RuleMemberdeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2053);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 255, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2034);
      declarator();
      setState(2036);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 250, _ctx)) {
      case 1: {
        setState(2035);
        virtspecifierseq(0);
        break;
      }

      }
      setState(2039);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 251, _ctx)) {
      case 1: {
        setState(2038);
        purespecifier();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2041);
      declarator();
      setState(2043);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 252, _ctx)) {
      case 1: {
        setState(2042);
        braceorequalinitializer();
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2046);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Identifier) {
        setState(2045);
        match(CPP14Parser::Identifier);
      }
      setState(2049);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(2048);
        attributespecifierseq(0);
      }
      setState(2051);
      match(CPP14Parser::Colon);
      setState(2052);
      constantexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VirtspecifierseqContext ------------------------------------------------------------------

CPP14Parser::VirtspecifierseqContext::VirtspecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::VirtspecifierContext* CPP14Parser::VirtspecifierseqContext::virtspecifier() {
  return getRuleContext<CPP14Parser::VirtspecifierContext>(0);
}

CPP14Parser::VirtspecifierseqContext* CPP14Parser::VirtspecifierseqContext::virtspecifierseq() {
  return getRuleContext<CPP14Parser::VirtspecifierseqContext>(0);
}


size_t CPP14Parser::VirtspecifierseqContext::getRuleIndex() const {
  return CPP14Parser::RuleVirtspecifierseq;
}

antlrcpp::Any CPP14Parser::VirtspecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitVirtspecifierseq(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::VirtspecifierseqContext* CPP14Parser::virtspecifierseq() {
   return virtspecifierseq(0);
}

CPP14Parser::VirtspecifierseqContext* CPP14Parser::virtspecifierseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::VirtspecifierseqContext *_localctx = _tracker.createInstance<VirtspecifierseqContext>(_ctx, parentState);
  CPP14Parser::VirtspecifierseqContext *previousContext = _localctx;
  size_t startState = 304;
  enterRecursionRule(_localctx, 304, CPP14Parser::RuleVirtspecifierseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2056);
    virtspecifier();
    _ctx->stop = _input->LT(-1);
    setState(2062);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 256, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<VirtspecifierseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleVirtspecifierseq);
        setState(2058);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2059);
        virtspecifier(); 
      }
      setState(2064);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 256, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VirtspecifierContext ------------------------------------------------------------------

CPP14Parser::VirtspecifierContext::VirtspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::VirtspecifierContext::Override() {
  return getToken(CPP14Parser::Override, 0);
}

tree::TerminalNode* CPP14Parser::VirtspecifierContext::Final() {
  return getToken(CPP14Parser::Final, 0);
}


size_t CPP14Parser::VirtspecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleVirtspecifier;
}

antlrcpp::Any CPP14Parser::VirtspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitVirtspecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::VirtspecifierContext* CPP14Parser::virtspecifier() {
  VirtspecifierContext *_localctx = _tracker.createInstance<VirtspecifierContext>(_ctx, getState());
  enterRule(_localctx, 306, CPP14Parser::RuleVirtspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2065);
    _la = _input->LA(1);
    if (!(_la == CPP14Parser::Final

    || _la == CPP14Parser::Override)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PurespecifierContext ------------------------------------------------------------------

CPP14Parser::PurespecifierContext::PurespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::PurespecifierContext::Assign() {
  return getToken(CPP14Parser::Assign, 0);
}

tree::TerminalNode* CPP14Parser::PurespecifierContext::Octalliteral() {
  return getToken(CPP14Parser::Octalliteral, 0);
}


size_t CPP14Parser::PurespecifierContext::getRuleIndex() const {
  return CPP14Parser::RulePurespecifier;
}

antlrcpp::Any CPP14Parser::PurespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitPurespecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::PurespecifierContext* CPP14Parser::purespecifier() {
  PurespecifierContext *_localctx = _tracker.createInstance<PurespecifierContext>(_ctx, getState());
  enterRule(_localctx, 308, CPP14Parser::RulePurespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2067);
    match(CPP14Parser::Assign);
    setState(2068);
    dynamic_cast<PurespecifierContext *>(_localctx)->val = match(CPP14Parser::Octalliteral);
    if((dynamic_cast<PurespecifierContext *>(_localctx)->val != nullptr ? dynamic_cast<PurespecifierContext *>(_localctx)->val->getText() : "").compare("0")!=0) throw new InputMismatchException(this);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseclauseContext ------------------------------------------------------------------

CPP14Parser::BaseclauseContext::BaseclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::BasespecifierlistContext* CPP14Parser::BaseclauseContext::basespecifierlist() {
  return getRuleContext<CPP14Parser::BasespecifierlistContext>(0);
}


size_t CPP14Parser::BaseclauseContext::getRuleIndex() const {
  return CPP14Parser::RuleBaseclause;
}

antlrcpp::Any CPP14Parser::BaseclauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitBaseclause(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::BaseclauseContext* CPP14Parser::baseclause() {
  BaseclauseContext *_localctx = _tracker.createInstance<BaseclauseContext>(_ctx, getState());
  enterRule(_localctx, 310, CPP14Parser::RuleBaseclause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2071);
    match(CPP14Parser::Colon);
    setState(2072);
    basespecifierlist(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasespecifierlistContext ------------------------------------------------------------------

CPP14Parser::BasespecifierlistContext::BasespecifierlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::BasespecifierContext* CPP14Parser::BasespecifierlistContext::basespecifier() {
  return getRuleContext<CPP14Parser::BasespecifierContext>(0);
}

CPP14Parser::BasespecifierlistContext* CPP14Parser::BasespecifierlistContext::basespecifierlist() {
  return getRuleContext<CPP14Parser::BasespecifierlistContext>(0);
}


size_t CPP14Parser::BasespecifierlistContext::getRuleIndex() const {
  return CPP14Parser::RuleBasespecifierlist;
}

antlrcpp::Any CPP14Parser::BasespecifierlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitBasespecifierlist(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::BasespecifierlistContext* CPP14Parser::basespecifierlist() {
   return basespecifierlist(0);
}

CPP14Parser::BasespecifierlistContext* CPP14Parser::basespecifierlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::BasespecifierlistContext *_localctx = _tracker.createInstance<BasespecifierlistContext>(_ctx, parentState);
  CPP14Parser::BasespecifierlistContext *previousContext = _localctx;
  size_t startState = 312;
  enterRecursionRule(_localctx, 312, CPP14Parser::RuleBasespecifierlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2075);
    basespecifier();
    setState(2077);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 257, _ctx)) {
    case 1: {
      setState(2076);
      match(CPP14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2087);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 259, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BasespecifierlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBasespecifierlist);
        setState(2079);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2080);
        match(CPP14Parser::Comma);
        setState(2081);
        basespecifier();
        setState(2083);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 258, _ctx)) {
        case 1: {
          setState(2082);
          match(CPP14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(2089);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 259, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BasespecifierContext ------------------------------------------------------------------

CPP14Parser::BasespecifierContext::BasespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::BasetypespecifierContext* CPP14Parser::BasespecifierContext::basetypespecifier() {
  return getRuleContext<CPP14Parser::BasetypespecifierContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::BasespecifierContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* CPP14Parser::BasespecifierContext::Virtual() {
  return getToken(CPP14Parser::Virtual, 0);
}

CPP14Parser::AccessspecifierContext* CPP14Parser::BasespecifierContext::accessspecifier() {
  return getRuleContext<CPP14Parser::AccessspecifierContext>(0);
}


size_t CPP14Parser::BasespecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleBasespecifier;
}

antlrcpp::Any CPP14Parser::BasespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitBasespecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::BasespecifierContext* CPP14Parser::basespecifier() {
  BasespecifierContext *_localctx = _tracker.createInstance<BasespecifierContext>(_ctx, getState());
  enterRule(_localctx, 314, CPP14Parser::RuleBasespecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2111);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 265, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2091);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(2090);
        attributespecifierseq(0);
      }
      setState(2093);
      basetypespecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2095);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(2094);
        attributespecifierseq(0);
      }
      setState(2097);
      match(CPP14Parser::Virtual);
      setState(2099);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CPP14Parser::Private)
        | (1ULL << CPP14Parser::Protected)
        | (1ULL << CPP14Parser::Public))) != 0)) {
        setState(2098);
        accessspecifier();
      }
      setState(2101);
      basetypespecifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2103);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(2102);
        attributespecifierseq(0);
      }
      setState(2105);
      accessspecifier();
      setState(2107);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Virtual) {
        setState(2106);
        match(CPP14Parser::Virtual);
      }
      setState(2109);
      basetypespecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassordecltypeContext ------------------------------------------------------------------

CPP14Parser::ClassordecltypeContext::ClassordecltypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ClassnameContext* CPP14Parser::ClassordecltypeContext::classname() {
  return getRuleContext<CPP14Parser::ClassnameContext>(0);
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::ClassordecltypeContext::nestednamespecifier() {
  return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);
}

CPP14Parser::DecltypespecifierContext* CPP14Parser::ClassordecltypeContext::decltypespecifier() {
  return getRuleContext<CPP14Parser::DecltypespecifierContext>(0);
}


size_t CPP14Parser::ClassordecltypeContext::getRuleIndex() const {
  return CPP14Parser::RuleClassordecltype;
}

antlrcpp::Any CPP14Parser::ClassordecltypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitClassordecltype(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ClassordecltypeContext* CPP14Parser::classordecltype() {
  ClassordecltypeContext *_localctx = _tracker.createInstance<ClassordecltypeContext>(_ctx, getState());
  enterRule(_localctx, 316, CPP14Parser::RuleClassordecltype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2118);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 267, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2114);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 266, _ctx)) {
      case 1: {
        setState(2113);
        nestednamespecifier(0);
        break;
      }

      }
      setState(2116);
      classname();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2117);
      decltypespecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasetypespecifierContext ------------------------------------------------------------------

CPP14Parser::BasetypespecifierContext::BasetypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ClassordecltypeContext* CPP14Parser::BasetypespecifierContext::classordecltype() {
  return getRuleContext<CPP14Parser::ClassordecltypeContext>(0);
}


size_t CPP14Parser::BasetypespecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleBasetypespecifier;
}

antlrcpp::Any CPP14Parser::BasetypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitBasetypespecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::BasetypespecifierContext* CPP14Parser::basetypespecifier() {
  BasetypespecifierContext *_localctx = _tracker.createInstance<BasetypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 318, CPP14Parser::RuleBasetypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2120);
    classordecltype();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessspecifierContext ------------------------------------------------------------------

CPP14Parser::AccessspecifierContext::AccessspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::AccessspecifierContext::Private() {
  return getToken(CPP14Parser::Private, 0);
}

tree::TerminalNode* CPP14Parser::AccessspecifierContext::Protected() {
  return getToken(CPP14Parser::Protected, 0);
}

tree::TerminalNode* CPP14Parser::AccessspecifierContext::Public() {
  return getToken(CPP14Parser::Public, 0);
}


size_t CPP14Parser::AccessspecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleAccessspecifier;
}

antlrcpp::Any CPP14Parser::AccessspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitAccessspecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AccessspecifierContext* CPP14Parser::accessspecifier() {
  AccessspecifierContext *_localctx = _tracker.createInstance<AccessspecifierContext>(_ctx, getState());
  enterRule(_localctx, 320, CPP14Parser::RuleAccessspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2122);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CPP14Parser::Private)
      | (1ULL << CPP14Parser::Protected)
      | (1ULL << CPP14Parser::Public))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversionfunctionidContext ------------------------------------------------------------------

CPP14Parser::ConversionfunctionidContext::ConversionfunctionidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ConversionfunctionidContext::Operator() {
  return getToken(CPP14Parser::Operator, 0);
}

CPP14Parser::ConversiontypeidContext* CPP14Parser::ConversionfunctionidContext::conversiontypeid() {
  return getRuleContext<CPP14Parser::ConversiontypeidContext>(0);
}


size_t CPP14Parser::ConversionfunctionidContext::getRuleIndex() const {
  return CPP14Parser::RuleConversionfunctionid;
}

antlrcpp::Any CPP14Parser::ConversionfunctionidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitConversionfunctionid(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ConversionfunctionidContext* CPP14Parser::conversionfunctionid() {
  ConversionfunctionidContext *_localctx = _tracker.createInstance<ConversionfunctionidContext>(_ctx, getState());
  enterRule(_localctx, 322, CPP14Parser::RuleConversionfunctionid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2124);
    match(CPP14Parser::Operator);
    setState(2125);
    conversiontypeid();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversiontypeidContext ------------------------------------------------------------------

CPP14Parser::ConversiontypeidContext::ConversiontypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TypespecifierseqContext* CPP14Parser::ConversiontypeidContext::typespecifierseq() {
  return getRuleContext<CPP14Parser::TypespecifierseqContext>(0);
}

CPP14Parser::ConversiondeclaratorContext* CPP14Parser::ConversiontypeidContext::conversiondeclarator() {
  return getRuleContext<CPP14Parser::ConversiondeclaratorContext>(0);
}


size_t CPP14Parser::ConversiontypeidContext::getRuleIndex() const {
  return CPP14Parser::RuleConversiontypeid;
}

antlrcpp::Any CPP14Parser::ConversiontypeidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitConversiontypeid(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ConversiontypeidContext* CPP14Parser::conversiontypeid() {
  ConversiontypeidContext *_localctx = _tracker.createInstance<ConversiontypeidContext>(_ctx, getState());
  enterRule(_localctx, 324, CPP14Parser::RuleConversiontypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2127);
    typespecifierseq();
    setState(2129);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 268, _ctx)) {
    case 1: {
      setState(2128);
      conversiondeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversiondeclaratorContext ------------------------------------------------------------------

CPP14Parser::ConversiondeclaratorContext::ConversiondeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::PtroperatorContext* CPP14Parser::ConversiondeclaratorContext::ptroperator() {
  return getRuleContext<CPP14Parser::PtroperatorContext>(0);
}

CPP14Parser::ConversiondeclaratorContext* CPP14Parser::ConversiondeclaratorContext::conversiondeclarator() {
  return getRuleContext<CPP14Parser::ConversiondeclaratorContext>(0);
}


size_t CPP14Parser::ConversiondeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleConversiondeclarator;
}

antlrcpp::Any CPP14Parser::ConversiondeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitConversiondeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ConversiondeclaratorContext* CPP14Parser::conversiondeclarator() {
  ConversiondeclaratorContext *_localctx = _tracker.createInstance<ConversiondeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 326, CPP14Parser::RuleConversiondeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2131);
    ptroperator();
    setState(2133);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 269, _ctx)) {
    case 1: {
      setState(2132);
      conversiondeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CtorinitializerContext ------------------------------------------------------------------

CPP14Parser::CtorinitializerContext::CtorinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::MeminitializerlistContext* CPP14Parser::CtorinitializerContext::meminitializerlist() {
  return getRuleContext<CPP14Parser::MeminitializerlistContext>(0);
}


size_t CPP14Parser::CtorinitializerContext::getRuleIndex() const {
  return CPP14Parser::RuleCtorinitializer;
}

antlrcpp::Any CPP14Parser::CtorinitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitCtorinitializer(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::CtorinitializerContext* CPP14Parser::ctorinitializer() {
  CtorinitializerContext *_localctx = _tracker.createInstance<CtorinitializerContext>(_ctx, getState());
  enterRule(_localctx, 328, CPP14Parser::RuleCtorinitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2135);
    match(CPP14Parser::Colon);
    setState(2136);
    meminitializerlist();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeminitializerlistContext ------------------------------------------------------------------

CPP14Parser::MeminitializerlistContext::MeminitializerlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::MeminitializerContext* CPP14Parser::MeminitializerlistContext::meminitializer() {
  return getRuleContext<CPP14Parser::MeminitializerContext>(0);
}

CPP14Parser::MeminitializerlistContext* CPP14Parser::MeminitializerlistContext::meminitializerlist() {
  return getRuleContext<CPP14Parser::MeminitializerlistContext>(0);
}


size_t CPP14Parser::MeminitializerlistContext::getRuleIndex() const {
  return CPP14Parser::RuleMeminitializerlist;
}

antlrcpp::Any CPP14Parser::MeminitializerlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitMeminitializerlist(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::MeminitializerlistContext* CPP14Parser::meminitializerlist() {
  MeminitializerlistContext *_localctx = _tracker.createInstance<MeminitializerlistContext>(_ctx, getState());
  enterRule(_localctx, 330, CPP14Parser::RuleMeminitializerlist);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2149);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 272, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2138);
      meminitializer();
      setState(2140);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Ellipsis) {
        setState(2139);
        match(CPP14Parser::Ellipsis);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2142);
      meminitializer();
      setState(2144);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Ellipsis) {
        setState(2143);
        match(CPP14Parser::Ellipsis);
      }
      setState(2146);
      match(CPP14Parser::Comma);
      setState(2147);
      meminitializerlist();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeminitializerContext ------------------------------------------------------------------

CPP14Parser::MeminitializerContext::MeminitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::MeminitializeridContext* CPP14Parser::MeminitializerContext::meminitializerid() {
  return getRuleContext<CPP14Parser::MeminitializeridContext>(0);
}

CPP14Parser::ExpressionlistContext* CPP14Parser::MeminitializerContext::expressionlist() {
  return getRuleContext<CPP14Parser::ExpressionlistContext>(0);
}

CPP14Parser::BracedinitlistContext* CPP14Parser::MeminitializerContext::bracedinitlist() {
  return getRuleContext<CPP14Parser::BracedinitlistContext>(0);
}


size_t CPP14Parser::MeminitializerContext::getRuleIndex() const {
  return CPP14Parser::RuleMeminitializer;
}

antlrcpp::Any CPP14Parser::MeminitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitMeminitializer(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::MeminitializerContext* CPP14Parser::meminitializer() {
  MeminitializerContext *_localctx = _tracker.createInstance<MeminitializerContext>(_ctx, getState());
  enterRule(_localctx, 332, CPP14Parser::RuleMeminitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2161);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 274, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2151);
      meminitializerid();
      setState(2152);
      match(CPP14Parser::LeftParen);
      setState(2154);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CPP14Parser::Alignof)
        | (1ULL << CPP14Parser::Auto)
        | (1ULL << CPP14Parser::Bool)
        | (1ULL << CPP14Parser::Char)
        | (1ULL << CPP14Parser::Char16)
        | (1ULL << CPP14Parser::Char32)
        | (1ULL << CPP14Parser::Const_cast)
        | (1ULL << CPP14Parser::Decltype)
        | (1ULL << CPP14Parser::Delete)
        | (1ULL << CPP14Parser::Double)
        | (1ULL << CPP14Parser::Dynamic_cast)
        | (1ULL << CPP14Parser::False)
        | (1ULL << CPP14Parser::Float)
        | (1ULL << CPP14Parser::Int)
        | (1ULL << CPP14Parser::Long)
        | (1ULL << CPP14Parser::New)
        | (1ULL << CPP14Parser::Noexcept)
        | (1ULL << CPP14Parser::Nullptr)
        | (1ULL << CPP14Parser::Operator)
        | (1ULL << CPP14Parser::Reinterpret_cast)
        | (1ULL << CPP14Parser::Short)
        | (1ULL << CPP14Parser::Signed)
        | (1ULL << CPP14Parser::Sizeof)
        | (1ULL << CPP14Parser::Static_cast)
        | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Throw - 64))
        | (1ULL << (CPP14Parser::True - 64))
        | (1ULL << (CPP14Parser::Typeid - 64))
        | (1ULL << (CPP14Parser::Typename - 64))
        | (1ULL << (CPP14Parser::Unsigned - 64))
        | (1ULL << (CPP14Parser::Void - 64))
        | (1ULL << (CPP14Parser::Wchar - 64))
        | (1ULL << (CPP14Parser::LeftParen - 64))
        | (1ULL << (CPP14Parser::LeftBracket - 64))
        | (1ULL << (CPP14Parser::LeftBrace - 64))
        | (1ULL << (CPP14Parser::Plus - 64))
        | (1ULL << (CPP14Parser::Minus - 64))
        | (1ULL << (CPP14Parser::Star - 64))
        | (1ULL << (CPP14Parser::And - 64))
        | (1ULL << (CPP14Parser::Or - 64))
        | (1ULL << (CPP14Parser::Tilde - 64))
        | (1ULL << (CPP14Parser::Not - 64))
        | (1ULL << (CPP14Parser::PlusPlus - 64))
        | (1ULL << (CPP14Parser::MinusMinus - 64))
        | (1ULL << (CPP14Parser::Doublecolon - 64))
        | (1ULL << (CPP14Parser::Identifier - 64))
        | (1ULL << (CPP14Parser::Integerliteral - 64)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 132)) & ((1ULL << (CPP14Parser::Characterliteral - 132))
        | (1ULL << (CPP14Parser::Floatingliteral - 132))
        | (1ULL << (CPP14Parser::Stringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedintegerliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedstringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 132)))) != 0)) {
        setState(2153);
        expressionlist();
      }
      setState(2156);
      match(CPP14Parser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2158);
      meminitializerid();
      setState(2159);
      bracedinitlist();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeminitializeridContext ------------------------------------------------------------------

CPP14Parser::MeminitializeridContext::MeminitializeridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ClassordecltypeContext* CPP14Parser::MeminitializeridContext::classordecltype() {
  return getRuleContext<CPP14Parser::ClassordecltypeContext>(0);
}

tree::TerminalNode* CPP14Parser::MeminitializeridContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::MeminitializeridContext::getRuleIndex() const {
  return CPP14Parser::RuleMeminitializerid;
}

antlrcpp::Any CPP14Parser::MeminitializeridContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitMeminitializerid(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::MeminitializeridContext* CPP14Parser::meminitializerid() {
  MeminitializeridContext *_localctx = _tracker.createInstance<MeminitializeridContext>(_ctx, getState());
  enterRule(_localctx, 334, CPP14Parser::RuleMeminitializerid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2165);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 275, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2163);
      classordecltype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2164);
      match(CPP14Parser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorfunctionidContext ------------------------------------------------------------------

CPP14Parser::OperatorfunctionidContext::OperatorfunctionidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::OperatorfunctionidContext::Operator() {
  return getToken(CPP14Parser::Operator, 0);
}

CPP14Parser::TheoperatorContext* CPP14Parser::OperatorfunctionidContext::theoperator() {
  return getRuleContext<CPP14Parser::TheoperatorContext>(0);
}


size_t CPP14Parser::OperatorfunctionidContext::getRuleIndex() const {
  return CPP14Parser::RuleOperatorfunctionid;
}

antlrcpp::Any CPP14Parser::OperatorfunctionidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitOperatorfunctionid(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::OperatorfunctionidContext* CPP14Parser::operatorfunctionid() {
  OperatorfunctionidContext *_localctx = _tracker.createInstance<OperatorfunctionidContext>(_ctx, getState());
  enterRule(_localctx, 336, CPP14Parser::RuleOperatorfunctionid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2167);
    match(CPP14Parser::Operator);
    setState(2168);
    theoperator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteraloperatoridContext ------------------------------------------------------------------

CPP14Parser::LiteraloperatoridContext::LiteraloperatoridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::LiteraloperatoridContext::Operator() {
  return getToken(CPP14Parser::Operator, 0);
}

tree::TerminalNode* CPP14Parser::LiteraloperatoridContext::Stringliteral() {
  return getToken(CPP14Parser::Stringliteral, 0);
}

tree::TerminalNode* CPP14Parser::LiteraloperatoridContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::LiteraloperatoridContext::Userdefinedstringliteral() {
  return getToken(CPP14Parser::Userdefinedstringliteral, 0);
}


size_t CPP14Parser::LiteraloperatoridContext::getRuleIndex() const {
  return CPP14Parser::RuleLiteraloperatorid;
}

antlrcpp::Any CPP14Parser::LiteraloperatoridContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitLiteraloperatorid(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::LiteraloperatoridContext* CPP14Parser::literaloperatorid() {
  LiteraloperatoridContext *_localctx = _tracker.createInstance<LiteraloperatoridContext>(_ctx, getState());
  enterRule(_localctx, 338, CPP14Parser::RuleLiteraloperatorid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2175);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 276, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2170);
      match(CPP14Parser::Operator);
      setState(2171);
      match(CPP14Parser::Stringliteral);
      setState(2172);
      match(CPP14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2173);
      match(CPP14Parser::Operator);
      setState(2174);
      match(CPP14Parser::Userdefinedstringliteral);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplatedeclarationContext ------------------------------------------------------------------

CPP14Parser::TemplatedeclarationContext::TemplatedeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TemplatedeclarationContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}

CPP14Parser::TemplateparameterlistContext* CPP14Parser::TemplatedeclarationContext::templateparameterlist() {
  return getRuleContext<CPP14Parser::TemplateparameterlistContext>(0);
}

CPP14Parser::DeclarationContext* CPP14Parser::TemplatedeclarationContext::declaration() {
  return getRuleContext<CPP14Parser::DeclarationContext>(0);
}


size_t CPP14Parser::TemplatedeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleTemplatedeclaration;
}

antlrcpp::Any CPP14Parser::TemplatedeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTemplatedeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TemplatedeclarationContext* CPP14Parser::templatedeclaration() {
  TemplatedeclarationContext *_localctx = _tracker.createInstance<TemplatedeclarationContext>(_ctx, getState());
  enterRule(_localctx, 340, CPP14Parser::RuleTemplatedeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2177);
    match(CPP14Parser::Template);
    setState(2178);
    match(CPP14Parser::Less);
    setState(2179);
    templateparameterlist();
    setState(2180);
    match(CPP14Parser::Greater);
    setState(2181);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateparameterlistContext ------------------------------------------------------------------

CPP14Parser::TemplateparameterlistContext::TemplateparameterlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TemplateparameterContext* CPP14Parser::TemplateparameterlistContext::templateparameter() {
  return getRuleContext<CPP14Parser::TemplateparameterContext>(0);
}

CPP14Parser::TemplateparameterlistContext* CPP14Parser::TemplateparameterlistContext::templateparameterlist() {
  return getRuleContext<CPP14Parser::TemplateparameterlistContext>(0);
}


size_t CPP14Parser::TemplateparameterlistContext::getRuleIndex() const {
  return CPP14Parser::RuleTemplateparameterlist;
}

antlrcpp::Any CPP14Parser::TemplateparameterlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTemplateparameterlist(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TemplateparameterlistContext* CPP14Parser::templateparameterlist() {
  TemplateparameterlistContext *_localctx = _tracker.createInstance<TemplateparameterlistContext>(_ctx, getState());
  enterRule(_localctx, 342, CPP14Parser::RuleTemplateparameterlist);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2188);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 277, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2183);
      templateparameter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2184);
      templateparameter();
      setState(2185);
      match(CPP14Parser::Comma);
      setState(2186);
      templateparameterlist();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateparameterContext ------------------------------------------------------------------

CPP14Parser::TemplateparameterContext::TemplateparameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TypeparameterContext* CPP14Parser::TemplateparameterContext::typeparameter() {
  return getRuleContext<CPP14Parser::TypeparameterContext>(0);
}

CPP14Parser::ParameterdeclarationContext* CPP14Parser::TemplateparameterContext::parameterdeclaration() {
  return getRuleContext<CPP14Parser::ParameterdeclarationContext>(0);
}


size_t CPP14Parser::TemplateparameterContext::getRuleIndex() const {
  return CPP14Parser::RuleTemplateparameter;
}

antlrcpp::Any CPP14Parser::TemplateparameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTemplateparameter(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TemplateparameterContext* CPP14Parser::templateparameter() {
  TemplateparameterContext *_localctx = _tracker.createInstance<TemplateparameterContext>(_ctx, getState());
  enterRule(_localctx, 344, CPP14Parser::RuleTemplateparameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2192);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 278, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2190);
      typeparameter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2191);
      parameterdeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeparameterContext ------------------------------------------------------------------

CPP14Parser::TypeparameterContext::TypeparameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TypeparameterContext::Class() {
  return getToken(CPP14Parser::Class, 0);
}

tree::TerminalNode* CPP14Parser::TypeparameterContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::ThetypeidContext* CPP14Parser::TypeparameterContext::thetypeid() {
  return getRuleContext<CPP14Parser::ThetypeidContext>(0);
}

tree::TerminalNode* CPP14Parser::TypeparameterContext::Typename() {
  return getToken(CPP14Parser::Typename, 0);
}

tree::TerminalNode* CPP14Parser::TypeparameterContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}

CPP14Parser::TemplateparameterlistContext* CPP14Parser::TypeparameterContext::templateparameterlist() {
  return getRuleContext<CPP14Parser::TemplateparameterlistContext>(0);
}

CPP14Parser::IdexpressionContext* CPP14Parser::TypeparameterContext::idexpression() {
  return getRuleContext<CPP14Parser::IdexpressionContext>(0);
}


size_t CPP14Parser::TypeparameterContext::getRuleIndex() const {
  return CPP14Parser::RuleTypeparameter;
}

antlrcpp::Any CPP14Parser::TypeparameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTypeparameter(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TypeparameterContext* CPP14Parser::typeparameter() {
  TypeparameterContext *_localctx = _tracker.createInstance<TypeparameterContext>(_ctx, getState());
  enterRule(_localctx, 346, CPP14Parser::RuleTypeparameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2242);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 288, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2194);
      match(CPP14Parser::Class);
      setState(2196);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Ellipsis) {
        setState(2195);
        match(CPP14Parser::Ellipsis);
      }
      setState(2199);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Identifier) {
        setState(2198);
        match(CPP14Parser::Identifier);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2201);
      match(CPP14Parser::Class);
      setState(2203);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Identifier) {
        setState(2202);
        match(CPP14Parser::Identifier);
      }
      setState(2205);
      match(CPP14Parser::Assign);
      setState(2206);
      thetypeid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2207);
      match(CPP14Parser::Typename);
      setState(2209);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Ellipsis) {
        setState(2208);
        match(CPP14Parser::Ellipsis);
      }
      setState(2212);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Identifier) {
        setState(2211);
        match(CPP14Parser::Identifier);
      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2214);
      match(CPP14Parser::Typename);
      setState(2216);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Identifier) {
        setState(2215);
        match(CPP14Parser::Identifier);
      }
      setState(2218);
      match(CPP14Parser::Assign);
      setState(2219);
      thetypeid();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2220);
      match(CPP14Parser::Template);
      setState(2221);
      match(CPP14Parser::Less);
      setState(2222);
      templateparameterlist();
      setState(2223);
      match(CPP14Parser::Greater);
      setState(2224);
      match(CPP14Parser::Class);
      setState(2226);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Ellipsis) {
        setState(2225);
        match(CPP14Parser::Ellipsis);
      }
      setState(2229);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Identifier) {
        setState(2228);
        match(CPP14Parser::Identifier);
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2231);
      match(CPP14Parser::Template);
      setState(2232);
      match(CPP14Parser::Less);
      setState(2233);
      templateparameterlist();
      setState(2234);
      match(CPP14Parser::Greater);
      setState(2235);
      match(CPP14Parser::Class);
      setState(2237);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Identifier) {
        setState(2236);
        match(CPP14Parser::Identifier);
      }
      setState(2239);
      match(CPP14Parser::Assign);
      setState(2240);
      idexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpletemplateidContext ------------------------------------------------------------------

CPP14Parser::SimpletemplateidContext::SimpletemplateidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TemplatenameContext* CPP14Parser::SimpletemplateidContext::templatename() {
  return getRuleContext<CPP14Parser::TemplatenameContext>(0);
}

CPP14Parser::TemplateargumentlistContext* CPP14Parser::SimpletemplateidContext::templateargumentlist() {
  return getRuleContext<CPP14Parser::TemplateargumentlistContext>(0);
}


size_t CPP14Parser::SimpletemplateidContext::getRuleIndex() const {
  return CPP14Parser::RuleSimpletemplateid;
}

antlrcpp::Any CPP14Parser::SimpletemplateidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitSimpletemplateid(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::simpletemplateid() {
  SimpletemplateidContext *_localctx = _tracker.createInstance<SimpletemplateidContext>(_ctx, getState());
  enterRule(_localctx, 348, CPP14Parser::RuleSimpletemplateid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2244);
    templatename();
    setState(2245);
    match(CPP14Parser::Less);
    setState(2247);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CPP14Parser::Alignof)
      | (1ULL << CPP14Parser::Auto)
      | (1ULL << CPP14Parser::Bool)
      | (1ULL << CPP14Parser::Char)
      | (1ULL << CPP14Parser::Char16)
      | (1ULL << CPP14Parser::Char32)
      | (1ULL << CPP14Parser::Class)
      | (1ULL << CPP14Parser::Const)
      | (1ULL << CPP14Parser::Const_cast)
      | (1ULL << CPP14Parser::Decltype)
      | (1ULL << CPP14Parser::Delete)
      | (1ULL << CPP14Parser::Double)
      | (1ULL << CPP14Parser::Dynamic_cast)
      | (1ULL << CPP14Parser::Enum)
      | (1ULL << CPP14Parser::False)
      | (1ULL << CPP14Parser::Float)
      | (1ULL << CPP14Parser::Int)
      | (1ULL << CPP14Parser::Long)
      | (1ULL << CPP14Parser::New)
      | (1ULL << CPP14Parser::Noexcept)
      | (1ULL << CPP14Parser::Nullptr)
      | (1ULL << CPP14Parser::Operator)
      | (1ULL << CPP14Parser::Reinterpret_cast)
      | (1ULL << CPP14Parser::Short)
      | (1ULL << CPP14Parser::Signed)
      | (1ULL << CPP14Parser::Sizeof)
      | (1ULL << CPP14Parser::Static_cast)
      | (1ULL << CPP14Parser::Struct)
      | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::True - 65))
      | (1ULL << (CPP14Parser::Typeid - 65))
      | (1ULL << (CPP14Parser::Typename - 65))
      | (1ULL << (CPP14Parser::Union - 65))
      | (1ULL << (CPP14Parser::Unsigned - 65))
      | (1ULL << (CPP14Parser::Void - 65))
      | (1ULL << (CPP14Parser::Volatile - 65))
      | (1ULL << (CPP14Parser::Wchar - 65))
      | (1ULL << (CPP14Parser::LeftParen - 65))
      | (1ULL << (CPP14Parser::LeftBracket - 65))
      | (1ULL << (CPP14Parser::Plus - 65))
      | (1ULL << (CPP14Parser::Minus - 65))
      | (1ULL << (CPP14Parser::Star - 65))
      | (1ULL << (CPP14Parser::And - 65))
      | (1ULL << (CPP14Parser::Or - 65))
      | (1ULL << (CPP14Parser::Tilde - 65))
      | (1ULL << (CPP14Parser::Not - 65))
      | (1ULL << (CPP14Parser::PlusPlus - 65))
      | (1ULL << (CPP14Parser::MinusMinus - 65))
      | (1ULL << (CPP14Parser::Doublecolon - 65))
      | (1ULL << (CPP14Parser::Identifier - 65))
      | (1ULL << (CPP14Parser::Integerliteral - 65)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 132)) & ((1ULL << (CPP14Parser::Characterliteral - 132))
      | (1ULL << (CPP14Parser::Floatingliteral - 132))
      | (1ULL << (CPP14Parser::Stringliteral - 132))
      | (1ULL << (CPP14Parser::Userdefinedintegerliteral - 132))
      | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 132))
      | (1ULL << (CPP14Parser::Userdefinedstringliteral - 132))
      | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 132)))) != 0)) {
      setState(2246);
      templateargumentlist(0);
    }
    setState(2249);
    match(CPP14Parser::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateidContext ------------------------------------------------------------------

CPP14Parser::TemplateidContext::TemplateidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::TemplateidContext::simpletemplateid() {
  return getRuleContext<CPP14Parser::SimpletemplateidContext>(0);
}

CPP14Parser::OperatorfunctionidContext* CPP14Parser::TemplateidContext::operatorfunctionid() {
  return getRuleContext<CPP14Parser::OperatorfunctionidContext>(0);
}

CPP14Parser::TemplateargumentlistContext* CPP14Parser::TemplateidContext::templateargumentlist() {
  return getRuleContext<CPP14Parser::TemplateargumentlistContext>(0);
}

CPP14Parser::LiteraloperatoridContext* CPP14Parser::TemplateidContext::literaloperatorid() {
  return getRuleContext<CPP14Parser::LiteraloperatoridContext>(0);
}


size_t CPP14Parser::TemplateidContext::getRuleIndex() const {
  return CPP14Parser::RuleTemplateid;
}

antlrcpp::Any CPP14Parser::TemplateidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTemplateid(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TemplateidContext* CPP14Parser::templateid() {
  TemplateidContext *_localctx = _tracker.createInstance<TemplateidContext>(_ctx, getState());
  enterRule(_localctx, 350, CPP14Parser::RuleTemplateid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2266);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 292, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2251);
      simpletemplateid();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2252);
      operatorfunctionid();
      setState(2253);
      match(CPP14Parser::Less);
      setState(2255);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CPP14Parser::Alignof)
        | (1ULL << CPP14Parser::Auto)
        | (1ULL << CPP14Parser::Bool)
        | (1ULL << CPP14Parser::Char)
        | (1ULL << CPP14Parser::Char16)
        | (1ULL << CPP14Parser::Char32)
        | (1ULL << CPP14Parser::Class)
        | (1ULL << CPP14Parser::Const)
        | (1ULL << CPP14Parser::Const_cast)
        | (1ULL << CPP14Parser::Decltype)
        | (1ULL << CPP14Parser::Delete)
        | (1ULL << CPP14Parser::Double)
        | (1ULL << CPP14Parser::Dynamic_cast)
        | (1ULL << CPP14Parser::Enum)
        | (1ULL << CPP14Parser::False)
        | (1ULL << CPP14Parser::Float)
        | (1ULL << CPP14Parser::Int)
        | (1ULL << CPP14Parser::Long)
        | (1ULL << CPP14Parser::New)
        | (1ULL << CPP14Parser::Noexcept)
        | (1ULL << CPP14Parser::Nullptr)
        | (1ULL << CPP14Parser::Operator)
        | (1ULL << CPP14Parser::Reinterpret_cast)
        | (1ULL << CPP14Parser::Short)
        | (1ULL << CPP14Parser::Signed)
        | (1ULL << CPP14Parser::Sizeof)
        | (1ULL << CPP14Parser::Static_cast)
        | (1ULL << CPP14Parser::Struct)
        | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::True - 65))
        | (1ULL << (CPP14Parser::Typeid - 65))
        | (1ULL << (CPP14Parser::Typename - 65))
        | (1ULL << (CPP14Parser::Union - 65))
        | (1ULL << (CPP14Parser::Unsigned - 65))
        | (1ULL << (CPP14Parser::Void - 65))
        | (1ULL << (CPP14Parser::Volatile - 65))
        | (1ULL << (CPP14Parser::Wchar - 65))
        | (1ULL << (CPP14Parser::LeftParen - 65))
        | (1ULL << (CPP14Parser::LeftBracket - 65))
        | (1ULL << (CPP14Parser::Plus - 65))
        | (1ULL << (CPP14Parser::Minus - 65))
        | (1ULL << (CPP14Parser::Star - 65))
        | (1ULL << (CPP14Parser::And - 65))
        | (1ULL << (CPP14Parser::Or - 65))
        | (1ULL << (CPP14Parser::Tilde - 65))
        | (1ULL << (CPP14Parser::Not - 65))
        | (1ULL << (CPP14Parser::PlusPlus - 65))
        | (1ULL << (CPP14Parser::MinusMinus - 65))
        | (1ULL << (CPP14Parser::Doublecolon - 65))
        | (1ULL << (CPP14Parser::Identifier - 65))
        | (1ULL << (CPP14Parser::Integerliteral - 65)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 132)) & ((1ULL << (CPP14Parser::Characterliteral - 132))
        | (1ULL << (CPP14Parser::Floatingliteral - 132))
        | (1ULL << (CPP14Parser::Stringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedintegerliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedstringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 132)))) != 0)) {
        setState(2254);
        templateargumentlist(0);
      }
      setState(2257);
      match(CPP14Parser::Greater);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2259);
      literaloperatorid();
      setState(2260);
      match(CPP14Parser::Less);
      setState(2262);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CPP14Parser::Alignof)
        | (1ULL << CPP14Parser::Auto)
        | (1ULL << CPP14Parser::Bool)
        | (1ULL << CPP14Parser::Char)
        | (1ULL << CPP14Parser::Char16)
        | (1ULL << CPP14Parser::Char32)
        | (1ULL << CPP14Parser::Class)
        | (1ULL << CPP14Parser::Const)
        | (1ULL << CPP14Parser::Const_cast)
        | (1ULL << CPP14Parser::Decltype)
        | (1ULL << CPP14Parser::Delete)
        | (1ULL << CPP14Parser::Double)
        | (1ULL << CPP14Parser::Dynamic_cast)
        | (1ULL << CPP14Parser::Enum)
        | (1ULL << CPP14Parser::False)
        | (1ULL << CPP14Parser::Float)
        | (1ULL << CPP14Parser::Int)
        | (1ULL << CPP14Parser::Long)
        | (1ULL << CPP14Parser::New)
        | (1ULL << CPP14Parser::Noexcept)
        | (1ULL << CPP14Parser::Nullptr)
        | (1ULL << CPP14Parser::Operator)
        | (1ULL << CPP14Parser::Reinterpret_cast)
        | (1ULL << CPP14Parser::Short)
        | (1ULL << CPP14Parser::Signed)
        | (1ULL << CPP14Parser::Sizeof)
        | (1ULL << CPP14Parser::Static_cast)
        | (1ULL << CPP14Parser::Struct)
        | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::True - 65))
        | (1ULL << (CPP14Parser::Typeid - 65))
        | (1ULL << (CPP14Parser::Typename - 65))
        | (1ULL << (CPP14Parser::Union - 65))
        | (1ULL << (CPP14Parser::Unsigned - 65))
        | (1ULL << (CPP14Parser::Void - 65))
        | (1ULL << (CPP14Parser::Volatile - 65))
        | (1ULL << (CPP14Parser::Wchar - 65))
        | (1ULL << (CPP14Parser::LeftParen - 65))
        | (1ULL << (CPP14Parser::LeftBracket - 65))
        | (1ULL << (CPP14Parser::Plus - 65))
        | (1ULL << (CPP14Parser::Minus - 65))
        | (1ULL << (CPP14Parser::Star - 65))
        | (1ULL << (CPP14Parser::And - 65))
        | (1ULL << (CPP14Parser::Or - 65))
        | (1ULL << (CPP14Parser::Tilde - 65))
        | (1ULL << (CPP14Parser::Not - 65))
        | (1ULL << (CPP14Parser::PlusPlus - 65))
        | (1ULL << (CPP14Parser::MinusMinus - 65))
        | (1ULL << (CPP14Parser::Doublecolon - 65))
        | (1ULL << (CPP14Parser::Identifier - 65))
        | (1ULL << (CPP14Parser::Integerliteral - 65)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 132)) & ((1ULL << (CPP14Parser::Characterliteral - 132))
        | (1ULL << (CPP14Parser::Floatingliteral - 132))
        | (1ULL << (CPP14Parser::Stringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedintegerliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedstringliteral - 132))
        | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 132)))) != 0)) {
        setState(2261);
        templateargumentlist(0);
      }
      setState(2264);
      match(CPP14Parser::Greater);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplatenameContext ------------------------------------------------------------------

CPP14Parser::TemplatenameContext::TemplatenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TemplatenameContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::TemplatenameContext::getRuleIndex() const {
  return CPP14Parser::RuleTemplatename;
}

antlrcpp::Any CPP14Parser::TemplatenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTemplatename(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TemplatenameContext* CPP14Parser::templatename() {
  TemplatenameContext *_localctx = _tracker.createInstance<TemplatenameContext>(_ctx, getState());
  enterRule(_localctx, 352, CPP14Parser::RuleTemplatename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2268);
    match(CPP14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateargumentlistContext ------------------------------------------------------------------

CPP14Parser::TemplateargumentlistContext::TemplateargumentlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TemplateargumentContext* CPP14Parser::TemplateargumentlistContext::templateargument() {
  return getRuleContext<CPP14Parser::TemplateargumentContext>(0);
}

CPP14Parser::TemplateargumentlistContext* CPP14Parser::TemplateargumentlistContext::templateargumentlist() {
  return getRuleContext<CPP14Parser::TemplateargumentlistContext>(0);
}


size_t CPP14Parser::TemplateargumentlistContext::getRuleIndex() const {
  return CPP14Parser::RuleTemplateargumentlist;
}

antlrcpp::Any CPP14Parser::TemplateargumentlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTemplateargumentlist(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::TemplateargumentlistContext* CPP14Parser::templateargumentlist() {
   return templateargumentlist(0);
}

CPP14Parser::TemplateargumentlistContext* CPP14Parser::templateargumentlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::TemplateargumentlistContext *_localctx = _tracker.createInstance<TemplateargumentlistContext>(_ctx, parentState);
  CPP14Parser::TemplateargumentlistContext *previousContext = _localctx;
  size_t startState = 354;
  enterRecursionRule(_localctx, 354, CPP14Parser::RuleTemplateargumentlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2271);
    templateargument();
    setState(2273);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 293, _ctx)) {
    case 1: {
      setState(2272);
      match(CPP14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2283);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 295, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TemplateargumentlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTemplateargumentlist);
        setState(2275);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2276);
        match(CPP14Parser::Comma);
        setState(2277);
        templateargument();
        setState(2279);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 294, _ctx)) {
        case 1: {
          setState(2278);
          match(CPP14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(2285);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 295, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TemplateargumentContext ------------------------------------------------------------------

CPP14Parser::TemplateargumentContext::TemplateargumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ThetypeidContext* CPP14Parser::TemplateargumentContext::thetypeid() {
  return getRuleContext<CPP14Parser::ThetypeidContext>(0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::TemplateargumentContext::constantexpression() {
  return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);
}

CPP14Parser::IdexpressionContext* CPP14Parser::TemplateargumentContext::idexpression() {
  return getRuleContext<CPP14Parser::IdexpressionContext>(0);
}


size_t CPP14Parser::TemplateargumentContext::getRuleIndex() const {
  return CPP14Parser::RuleTemplateargument;
}

antlrcpp::Any CPP14Parser::TemplateargumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTemplateargument(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TemplateargumentContext* CPP14Parser::templateargument() {
  TemplateargumentContext *_localctx = _tracker.createInstance<TemplateargumentContext>(_ctx, getState());
  enterRule(_localctx, 356, CPP14Parser::RuleTemplateargument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2289);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 296, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2286);
      thetypeid();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2287);
      constantexpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2288);
      idexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypenamespecifierContext ------------------------------------------------------------------

CPP14Parser::TypenamespecifierContext::TypenamespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TypenamespecifierContext::Typename() {
  return getToken(CPP14Parser::Typename, 0);
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::TypenamespecifierContext::nestednamespecifier() {
  return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);
}

tree::TerminalNode* CPP14Parser::TypenamespecifierContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::TypenamespecifierContext::simpletemplateid() {
  return getRuleContext<CPP14Parser::SimpletemplateidContext>(0);
}

tree::TerminalNode* CPP14Parser::TypenamespecifierContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}


size_t CPP14Parser::TypenamespecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleTypenamespecifier;
}

antlrcpp::Any CPP14Parser::TypenamespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTypenamespecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TypenamespecifierContext* CPP14Parser::typenamespecifier() {
  TypenamespecifierContext *_localctx = _tracker.createInstance<TypenamespecifierContext>(_ctx, getState());
  enterRule(_localctx, 358, CPP14Parser::RuleTypenamespecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2302);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 298, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2291);
      match(CPP14Parser::Typename);
      setState(2292);
      nestednamespecifier(0);
      setState(2293);
      match(CPP14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2295);
      match(CPP14Parser::Typename);
      setState(2296);
      nestednamespecifier(0);
      setState(2298);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Template) {
        setState(2297);
        match(CPP14Parser::Template);
      }
      setState(2300);
      simpletemplateid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitinstantiationContext ------------------------------------------------------------------

CPP14Parser::ExplicitinstantiationContext::ExplicitinstantiationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ExplicitinstantiationContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}

CPP14Parser::DeclarationContext* CPP14Parser::ExplicitinstantiationContext::declaration() {
  return getRuleContext<CPP14Parser::DeclarationContext>(0);
}

tree::TerminalNode* CPP14Parser::ExplicitinstantiationContext::Extern() {
  return getToken(CPP14Parser::Extern, 0);
}


size_t CPP14Parser::ExplicitinstantiationContext::getRuleIndex() const {
  return CPP14Parser::RuleExplicitinstantiation;
}

antlrcpp::Any CPP14Parser::ExplicitinstantiationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitExplicitinstantiation(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ExplicitinstantiationContext* CPP14Parser::explicitinstantiation() {
  ExplicitinstantiationContext *_localctx = _tracker.createInstance<ExplicitinstantiationContext>(_ctx, getState());
  enterRule(_localctx, 360, CPP14Parser::RuleExplicitinstantiation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2305);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Extern) {
      setState(2304);
      match(CPP14Parser::Extern);
    }
    setState(2307);
    match(CPP14Parser::Template);
    setState(2308);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitspecializationContext ------------------------------------------------------------------

CPP14Parser::ExplicitspecializationContext::ExplicitspecializationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ExplicitspecializationContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}

CPP14Parser::DeclarationContext* CPP14Parser::ExplicitspecializationContext::declaration() {
  return getRuleContext<CPP14Parser::DeclarationContext>(0);
}


size_t CPP14Parser::ExplicitspecializationContext::getRuleIndex() const {
  return CPP14Parser::RuleExplicitspecialization;
}

antlrcpp::Any CPP14Parser::ExplicitspecializationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitExplicitspecialization(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ExplicitspecializationContext* CPP14Parser::explicitspecialization() {
  ExplicitspecializationContext *_localctx = _tracker.createInstance<ExplicitspecializationContext>(_ctx, getState());
  enterRule(_localctx, 362, CPP14Parser::RuleExplicitspecialization);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2310);
    match(CPP14Parser::Template);
    setState(2311);
    match(CPP14Parser::Less);
    setState(2312);
    match(CPP14Parser::Greater);
    setState(2313);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryblockContext ------------------------------------------------------------------

CPP14Parser::TryblockContext::TryblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TryblockContext::Try() {
  return getToken(CPP14Parser::Try, 0);
}

CPP14Parser::CompoundstatementContext* CPP14Parser::TryblockContext::compoundstatement() {
  return getRuleContext<CPP14Parser::CompoundstatementContext>(0);
}

CPP14Parser::HandlerseqContext* CPP14Parser::TryblockContext::handlerseq() {
  return getRuleContext<CPP14Parser::HandlerseqContext>(0);
}


size_t CPP14Parser::TryblockContext::getRuleIndex() const {
  return CPP14Parser::RuleTryblock;
}

antlrcpp::Any CPP14Parser::TryblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTryblock(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TryblockContext* CPP14Parser::tryblock() {
  TryblockContext *_localctx = _tracker.createInstance<TryblockContext>(_ctx, getState());
  enterRule(_localctx, 364, CPP14Parser::RuleTryblock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2315);
    match(CPP14Parser::Try);
    setState(2316);
    compoundstatement();
    setState(2317);
    handlerseq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiontryblockContext ------------------------------------------------------------------

CPP14Parser::FunctiontryblockContext::FunctiontryblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::FunctiontryblockContext::Try() {
  return getToken(CPP14Parser::Try, 0);
}

CPP14Parser::CompoundstatementContext* CPP14Parser::FunctiontryblockContext::compoundstatement() {
  return getRuleContext<CPP14Parser::CompoundstatementContext>(0);
}

CPP14Parser::HandlerseqContext* CPP14Parser::FunctiontryblockContext::handlerseq() {
  return getRuleContext<CPP14Parser::HandlerseqContext>(0);
}

CPP14Parser::CtorinitializerContext* CPP14Parser::FunctiontryblockContext::ctorinitializer() {
  return getRuleContext<CPP14Parser::CtorinitializerContext>(0);
}


size_t CPP14Parser::FunctiontryblockContext::getRuleIndex() const {
  return CPP14Parser::RuleFunctiontryblock;
}

antlrcpp::Any CPP14Parser::FunctiontryblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitFunctiontryblock(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::FunctiontryblockContext* CPP14Parser::functiontryblock() {
  FunctiontryblockContext *_localctx = _tracker.createInstance<FunctiontryblockContext>(_ctx, getState());
  enterRule(_localctx, 366, CPP14Parser::RuleFunctiontryblock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2319);
    match(CPP14Parser::Try);
    setState(2321);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Colon) {
      setState(2320);
      ctorinitializer();
    }
    setState(2323);
    compoundstatement();
    setState(2324);
    handlerseq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandlerseqContext ------------------------------------------------------------------

CPP14Parser::HandlerseqContext::HandlerseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::HandlerContext* CPP14Parser::HandlerseqContext::handler() {
  return getRuleContext<CPP14Parser::HandlerContext>(0);
}

CPP14Parser::HandlerseqContext* CPP14Parser::HandlerseqContext::handlerseq() {
  return getRuleContext<CPP14Parser::HandlerseqContext>(0);
}


size_t CPP14Parser::HandlerseqContext::getRuleIndex() const {
  return CPP14Parser::RuleHandlerseq;
}

antlrcpp::Any CPP14Parser::HandlerseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitHandlerseq(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::HandlerseqContext* CPP14Parser::handlerseq() {
  HandlerseqContext *_localctx = _tracker.createInstance<HandlerseqContext>(_ctx, getState());
  enterRule(_localctx, 368, CPP14Parser::RuleHandlerseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2326);
    handler();
    setState(2328);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 301, _ctx)) {
    case 1: {
      setState(2327);
      handlerseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandlerContext ------------------------------------------------------------------

CPP14Parser::HandlerContext::HandlerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::HandlerContext::Catch() {
  return getToken(CPP14Parser::Catch, 0);
}

CPP14Parser::ExceptiondeclarationContext* CPP14Parser::HandlerContext::exceptiondeclaration() {
  return getRuleContext<CPP14Parser::ExceptiondeclarationContext>(0);
}

CPP14Parser::CompoundstatementContext* CPP14Parser::HandlerContext::compoundstatement() {
  return getRuleContext<CPP14Parser::CompoundstatementContext>(0);
}


size_t CPP14Parser::HandlerContext::getRuleIndex() const {
  return CPP14Parser::RuleHandler;
}

antlrcpp::Any CPP14Parser::HandlerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitHandler(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::HandlerContext* CPP14Parser::handler() {
  HandlerContext *_localctx = _tracker.createInstance<HandlerContext>(_ctx, getState());
  enterRule(_localctx, 370, CPP14Parser::RuleHandler);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2330);
    match(CPP14Parser::Catch);
    setState(2331);
    match(CPP14Parser::LeftParen);
    setState(2332);
    exceptiondeclaration();
    setState(2333);
    match(CPP14Parser::RightParen);
    setState(2334);
    compoundstatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptiondeclarationContext ------------------------------------------------------------------

CPP14Parser::ExceptiondeclarationContext::ExceptiondeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TypespecifierseqContext* CPP14Parser::ExceptiondeclarationContext::typespecifierseq() {
  return getRuleContext<CPP14Parser::TypespecifierseqContext>(0);
}

CPP14Parser::DeclaratorContext* CPP14Parser::ExceptiondeclarationContext::declarator() {
  return getRuleContext<CPP14Parser::DeclaratorContext>(0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::ExceptiondeclarationContext::attributespecifierseq() {
  return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);
}

CPP14Parser::AbstractdeclaratorContext* CPP14Parser::ExceptiondeclarationContext::abstractdeclarator() {
  return getRuleContext<CPP14Parser::AbstractdeclaratorContext>(0);
}


size_t CPP14Parser::ExceptiondeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleExceptiondeclaration;
}

antlrcpp::Any CPP14Parser::ExceptiondeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitExceptiondeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ExceptiondeclarationContext* CPP14Parser::exceptiondeclaration() {
  ExceptiondeclarationContext *_localctx = _tracker.createInstance<ExceptiondeclarationContext>(_ctx, getState());
  enterRule(_localctx, 372, CPP14Parser::RuleExceptiondeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2350);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 305, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2337);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(2336);
        attributespecifierseq(0);
      }
      setState(2339);
      typespecifierseq();
      setState(2340);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2343);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(2342);
        attributespecifierseq(0);
      }
      setState(2345);
      typespecifierseq();
      setState(2347);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Decltype || ((((_la - 78) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 78)) & ((1ULL << (CPP14Parser::LeftParen - 78))
        | (1ULL << (CPP14Parser::LeftBracket - 78))
        | (1ULL << (CPP14Parser::Star - 78))
        | (1ULL << (CPP14Parser::And - 78))
        | (1ULL << (CPP14Parser::AndAnd - 78))
        | (1ULL << (CPP14Parser::Doublecolon - 78))
        | (1ULL << (CPP14Parser::Ellipsis - 78))
        | (1ULL << (CPP14Parser::Identifier - 78)))) != 0)) {
        setState(2346);
        abstractdeclarator();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2349);
      match(CPP14Parser::Ellipsis);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowexpressionContext ------------------------------------------------------------------

CPP14Parser::ThrowexpressionContext::ThrowexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ThrowexpressionContext::Throw() {
  return getToken(CPP14Parser::Throw, 0);
}

CPP14Parser::AssignmentexpressionContext* CPP14Parser::ThrowexpressionContext::assignmentexpression() {
  return getRuleContext<CPP14Parser::AssignmentexpressionContext>(0);
}


size_t CPP14Parser::ThrowexpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleThrowexpression;
}

antlrcpp::Any CPP14Parser::ThrowexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitThrowexpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ThrowexpressionContext* CPP14Parser::throwexpression() {
  ThrowexpressionContext *_localctx = _tracker.createInstance<ThrowexpressionContext>(_ctx, getState());
  enterRule(_localctx, 374, CPP14Parser::RuleThrowexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2352);
    match(CPP14Parser::Throw);
    setState(2354);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 306, _ctx)) {
    case 1: {
      setState(2353);
      assignmentexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionspecificationContext ------------------------------------------------------------------

CPP14Parser::ExceptionspecificationContext::ExceptionspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DynamicexceptionspecificationContext* CPP14Parser::ExceptionspecificationContext::dynamicexceptionspecification() {
  return getRuleContext<CPP14Parser::DynamicexceptionspecificationContext>(0);
}

CPP14Parser::NoexceptspecificationContext* CPP14Parser::ExceptionspecificationContext::noexceptspecification() {
  return getRuleContext<CPP14Parser::NoexceptspecificationContext>(0);
}


size_t CPP14Parser::ExceptionspecificationContext::getRuleIndex() const {
  return CPP14Parser::RuleExceptionspecification;
}

antlrcpp::Any CPP14Parser::ExceptionspecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitExceptionspecification(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ExceptionspecificationContext* CPP14Parser::exceptionspecification() {
  ExceptionspecificationContext *_localctx = _tracker.createInstance<ExceptionspecificationContext>(_ctx, getState());
  enterRule(_localctx, 376, CPP14Parser::RuleExceptionspecification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2358);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Throw: {
        enterOuterAlt(_localctx, 1);
        setState(2356);
        dynamicexceptionspecification();
        break;
      }

      case CPP14Parser::Noexcept: {
        enterOuterAlt(_localctx, 2);
        setState(2357);
        noexceptspecification();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DynamicexceptionspecificationContext ------------------------------------------------------------------

CPP14Parser::DynamicexceptionspecificationContext::DynamicexceptionspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::DynamicexceptionspecificationContext::Throw() {
  return getToken(CPP14Parser::Throw, 0);
}

CPP14Parser::TypeidlistContext* CPP14Parser::DynamicexceptionspecificationContext::typeidlist() {
  return getRuleContext<CPP14Parser::TypeidlistContext>(0);
}


size_t CPP14Parser::DynamicexceptionspecificationContext::getRuleIndex() const {
  return CPP14Parser::RuleDynamicexceptionspecification;
}

antlrcpp::Any CPP14Parser::DynamicexceptionspecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitDynamicexceptionspecification(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DynamicexceptionspecificationContext* CPP14Parser::dynamicexceptionspecification() {
  DynamicexceptionspecificationContext *_localctx = _tracker.createInstance<DynamicexceptionspecificationContext>(_ctx, getState());
  enterRule(_localctx, 378, CPP14Parser::RuleDynamicexceptionspecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2360);
    match(CPP14Parser::Throw);
    setState(2361);
    match(CPP14Parser::LeftParen);
    setState(2363);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CPP14Parser::Auto)
      | (1ULL << CPP14Parser::Bool)
      | (1ULL << CPP14Parser::Char)
      | (1ULL << CPP14Parser::Char16)
      | (1ULL << CPP14Parser::Char32)
      | (1ULL << CPP14Parser::Class)
      | (1ULL << CPP14Parser::Const)
      | (1ULL << CPP14Parser::Decltype)
      | (1ULL << CPP14Parser::Double)
      | (1ULL << CPP14Parser::Enum)
      | (1ULL << CPP14Parser::Float)
      | (1ULL << CPP14Parser::Int)
      | (1ULL << CPP14Parser::Long)
      | (1ULL << CPP14Parser::Short)
      | (1ULL << CPP14Parser::Signed)
      | (1ULL << CPP14Parser::Struct))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (CPP14Parser::Typename - 69))
      | (1ULL << (CPP14Parser::Union - 69))
      | (1ULL << (CPP14Parser::Unsigned - 69))
      | (1ULL << (CPP14Parser::Void - 69))
      | (1ULL << (CPP14Parser::Volatile - 69))
      | (1ULL << (CPP14Parser::Wchar - 69))
      | (1ULL << (CPP14Parser::Doublecolon - 69))
      | (1ULL << (CPP14Parser::Identifier - 69)))) != 0)) {
      setState(2362);
      typeidlist(0);
    }
    setState(2365);
    match(CPP14Parser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeidlistContext ------------------------------------------------------------------

CPP14Parser::TypeidlistContext::TypeidlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ThetypeidContext* CPP14Parser::TypeidlistContext::thetypeid() {
  return getRuleContext<CPP14Parser::ThetypeidContext>(0);
}

CPP14Parser::TypeidlistContext* CPP14Parser::TypeidlistContext::typeidlist() {
  return getRuleContext<CPP14Parser::TypeidlistContext>(0);
}


size_t CPP14Parser::TypeidlistContext::getRuleIndex() const {
  return CPP14Parser::RuleTypeidlist;
}

antlrcpp::Any CPP14Parser::TypeidlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTypeidlist(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::TypeidlistContext* CPP14Parser::typeidlist() {
   return typeidlist(0);
}

CPP14Parser::TypeidlistContext* CPP14Parser::typeidlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::TypeidlistContext *_localctx = _tracker.createInstance<TypeidlistContext>(_ctx, parentState);
  CPP14Parser::TypeidlistContext *previousContext = _localctx;
  size_t startState = 380;
  enterRecursionRule(_localctx, 380, CPP14Parser::RuleTypeidlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2368);
    thetypeid();
    setState(2370);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 309, _ctx)) {
    case 1: {
      setState(2369);
      match(CPP14Parser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2380);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 311, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeidlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTypeidlist);
        setState(2372);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2373);
        match(CPP14Parser::Comma);
        setState(2374);
        thetypeid();
        setState(2376);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 310, _ctx)) {
        case 1: {
          setState(2375);
          match(CPP14Parser::Ellipsis);
          break;
        }

        } 
      }
      setState(2382);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 311, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NoexceptspecificationContext ------------------------------------------------------------------

CPP14Parser::NoexceptspecificationContext::NoexceptspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::NoexceptspecificationContext::Noexcept() {
  return getToken(CPP14Parser::Noexcept, 0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::NoexceptspecificationContext::constantexpression() {
  return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);
}


size_t CPP14Parser::NoexceptspecificationContext::getRuleIndex() const {
  return CPP14Parser::RuleNoexceptspecification;
}

antlrcpp::Any CPP14Parser::NoexceptspecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitNoexceptspecification(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NoexceptspecificationContext* CPP14Parser::noexceptspecification() {
  NoexceptspecificationContext *_localctx = _tracker.createInstance<NoexceptspecificationContext>(_ctx, getState());
  enterRule(_localctx, 382, CPP14Parser::RuleNoexceptspecification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2389);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 312, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2383);
      match(CPP14Parser::Noexcept);
      setState(2384);
      match(CPP14Parser::LeftParen);
      setState(2385);
      constantexpression();
      setState(2386);
      match(CPP14Parser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2388);
      match(CPP14Parser::Noexcept);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RightShiftContext ------------------------------------------------------------------

CPP14Parser::RightShiftContext::RightShiftContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CPP14Parser::RightShiftContext::Greater() {
  return getTokens(CPP14Parser::Greater);
}

tree::TerminalNode* CPP14Parser::RightShiftContext::Greater(size_t i) {
  return getToken(CPP14Parser::Greater, i);
}


size_t CPP14Parser::RightShiftContext::getRuleIndex() const {
  return CPP14Parser::RuleRightShift;
}

antlrcpp::Any CPP14Parser::RightShiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitRightShift(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::RightShiftContext* CPP14Parser::rightShift() {
  RightShiftContext *_localctx = _tracker.createInstance<RightShiftContext>(_ctx, getState());
  enterRule(_localctx, 384, CPP14Parser::RuleRightShift);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2391);
    match(CPP14Parser::Greater);
    setState(2392);
    match(CPP14Parser::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RightShiftAssignContext ------------------------------------------------------------------

CPP14Parser::RightShiftAssignContext::RightShiftAssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CPP14Parser::RightShiftAssignContext::Greater() {
  return getTokens(CPP14Parser::Greater);
}

tree::TerminalNode* CPP14Parser::RightShiftAssignContext::Greater(size_t i) {
  return getToken(CPP14Parser::Greater, i);
}

tree::TerminalNode* CPP14Parser::RightShiftAssignContext::Assign() {
  return getToken(CPP14Parser::Assign, 0);
}


size_t CPP14Parser::RightShiftAssignContext::getRuleIndex() const {
  return CPP14Parser::RuleRightShiftAssign;
}

antlrcpp::Any CPP14Parser::RightShiftAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitRightShiftAssign(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::RightShiftAssignContext* CPP14Parser::rightShiftAssign() {
  RightShiftAssignContext *_localctx = _tracker.createInstance<RightShiftAssignContext>(_ctx, getState());
  enterRule(_localctx, 386, CPP14Parser::RuleRightShiftAssign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2394);
    match(CPP14Parser::Greater);
    setState(2395);
    match(CPP14Parser::Greater);
    setState(2396);
    match(CPP14Parser::Assign);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TheoperatorContext ------------------------------------------------------------------

CPP14Parser::TheoperatorContext::TheoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::New() {
  return getToken(CPP14Parser::New, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::Delete() {
  return getToken(CPP14Parser::Delete, 0);
}

CPP14Parser::RightShiftContext* CPP14Parser::TheoperatorContext::rightShift() {
  return getRuleContext<CPP14Parser::RightShiftContext>(0);
}

CPP14Parser::RightShiftAssignContext* CPP14Parser::TheoperatorContext::rightShiftAssign() {
  return getRuleContext<CPP14Parser::RightShiftAssignContext>(0);
}


size_t CPP14Parser::TheoperatorContext::getRuleIndex() const {
  return CPP14Parser::RuleTheoperator;
}

antlrcpp::Any CPP14Parser::TheoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitTheoperator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TheoperatorContext* CPP14Parser::theoperator() {
  TheoperatorContext *_localctx = _tracker.createInstance<TheoperatorContext>(_ctx, getState());
  enterRule(_localctx, 388, CPP14Parser::RuleTheoperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2446);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 313, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2398);
      match(CPP14Parser::New);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2399);
      match(CPP14Parser::Delete);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2400);
      match(CPP14Parser::New);
      setState(2401);
      match(CPP14Parser::LeftBracket);
      setState(2402);
      match(CPP14Parser::RightBracket);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2403);
      match(CPP14Parser::Delete);
      setState(2404);
      match(CPP14Parser::LeftBracket);
      setState(2405);
      match(CPP14Parser::RightBracket);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2406);
      match(CPP14Parser::Plus);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2407);
      match(CPP14Parser::Minus);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2408);
      match(CPP14Parser::Star);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2409);
      match(CPP14Parser::Div);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2410);
      match(CPP14Parser::Mod);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2411);
      match(CPP14Parser::Caret);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2412);
      match(CPP14Parser::And);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2413);
      match(CPP14Parser::Or);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2414);
      match(CPP14Parser::Tilde);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2415);
      match(CPP14Parser::Not);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2416);
      match(CPP14Parser::Assign);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(2417);
      match(CPP14Parser::Less);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(2418);
      match(CPP14Parser::Greater);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(2419);
      match(CPP14Parser::PlusAssign);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(2420);
      match(CPP14Parser::MinusAssign);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(2421);
      match(CPP14Parser::StarAssign);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(2422);
      match(CPP14Parser::DivAssign);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(2423);
      match(CPP14Parser::ModAssign);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(2424);
      match(CPP14Parser::XorAssign);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(2425);
      match(CPP14Parser::AndAssign);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(2426);
      match(CPP14Parser::OrAssign);
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(2427);
      match(CPP14Parser::LeftShift);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(2428);
      rightShift();
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(2429);
      rightShiftAssign();
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(2430);
      match(CPP14Parser::LeftShiftAssign);
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(2431);
      match(CPP14Parser::Equal);
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(2432);
      match(CPP14Parser::NotEqual);
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(2433);
      match(CPP14Parser::LessEqual);
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(2434);
      match(CPP14Parser::GreaterEqual);
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(2435);
      match(CPP14Parser::AndAnd);
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(2436);
      match(CPP14Parser::OrOr);
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(2437);
      match(CPP14Parser::PlusPlus);
      break;
    }

    case 37: {
      enterOuterAlt(_localctx, 37);
      setState(2438);
      match(CPP14Parser::MinusMinus);
      break;
    }

    case 38: {
      enterOuterAlt(_localctx, 38);
      setState(2439);
      match(CPP14Parser::Comma);
      break;
    }

    case 39: {
      enterOuterAlt(_localctx, 39);
      setState(2440);
      match(CPP14Parser::ArrowStar);
      break;
    }

    case 40: {
      enterOuterAlt(_localctx, 40);
      setState(2441);
      match(CPP14Parser::Arrow);
      break;
    }

    case 41: {
      enterOuterAlt(_localctx, 41);
      setState(2442);
      match(CPP14Parser::LeftParen);
      setState(2443);
      match(CPP14Parser::RightParen);
      break;
    }

    case 42: {
      enterOuterAlt(_localctx, 42);
      setState(2444);
      match(CPP14Parser::LeftBracket);
      setState(2445);
      match(CPP14Parser::RightBracket);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

CPP14Parser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::LiteralContext::Integerliteral() {
  return getToken(CPP14Parser::Integerliteral, 0);
}

tree::TerminalNode* CPP14Parser::LiteralContext::Characterliteral() {
  return getToken(CPP14Parser::Characterliteral, 0);
}

tree::TerminalNode* CPP14Parser::LiteralContext::Floatingliteral() {
  return getToken(CPP14Parser::Floatingliteral, 0);
}

tree::TerminalNode* CPP14Parser::LiteralContext::Stringliteral() {
  return getToken(CPP14Parser::Stringliteral, 0);
}

CPP14Parser::BooleanliteralContext* CPP14Parser::LiteralContext::booleanliteral() {
  return getRuleContext<CPP14Parser::BooleanliteralContext>(0);
}

CPP14Parser::PointerliteralContext* CPP14Parser::LiteralContext::pointerliteral() {
  return getRuleContext<CPP14Parser::PointerliteralContext>(0);
}

CPP14Parser::UserdefinedliteralContext* CPP14Parser::LiteralContext::userdefinedliteral() {
  return getRuleContext<CPP14Parser::UserdefinedliteralContext>(0);
}


size_t CPP14Parser::LiteralContext::getRuleIndex() const {
  return CPP14Parser::RuleLiteral;
}

antlrcpp::Any CPP14Parser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::LiteralContext* CPP14Parser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 390, CPP14Parser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2455);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Integerliteral: {
        enterOuterAlt(_localctx, 1);
        setState(2448);
        match(CPP14Parser::Integerliteral);
        break;
      }

      case CPP14Parser::Characterliteral: {
        enterOuterAlt(_localctx, 2);
        setState(2449);
        match(CPP14Parser::Characterliteral);
        break;
      }

      case CPP14Parser::Floatingliteral: {
        enterOuterAlt(_localctx, 3);
        setState(2450);
        match(CPP14Parser::Floatingliteral);
        break;
      }

      case CPP14Parser::Stringliteral: {
        enterOuterAlt(_localctx, 4);
        setState(2451);
        match(CPP14Parser::Stringliteral);
        break;
      }

      case CPP14Parser::False:
      case CPP14Parser::True: {
        enterOuterAlt(_localctx, 5);
        setState(2452);
        booleanliteral();
        break;
      }

      case CPP14Parser::Nullptr: {
        enterOuterAlt(_localctx, 6);
        setState(2453);
        pointerliteral();
        break;
      }

      case CPP14Parser::Userdefinedintegerliteral:
      case CPP14Parser::Userdefinedfloatingliteral:
      case CPP14Parser::Userdefinedstringliteral:
      case CPP14Parser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 7);
        setState(2454);
        userdefinedliteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanliteralContext ------------------------------------------------------------------

CPP14Parser::BooleanliteralContext::BooleanliteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::BooleanliteralContext::False() {
  return getToken(CPP14Parser::False, 0);
}

tree::TerminalNode* CPP14Parser::BooleanliteralContext::True() {
  return getToken(CPP14Parser::True, 0);
}


size_t CPP14Parser::BooleanliteralContext::getRuleIndex() const {
  return CPP14Parser::RuleBooleanliteral;
}

antlrcpp::Any CPP14Parser::BooleanliteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitBooleanliteral(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::BooleanliteralContext* CPP14Parser::booleanliteral() {
  BooleanliteralContext *_localctx = _tracker.createInstance<BooleanliteralContext>(_ctx, getState());
  enterRule(_localctx, 392, CPP14Parser::RuleBooleanliteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2457);
    _la = _input->LA(1);
    if (!(_la == CPP14Parser::False

    || _la == CPP14Parser::True)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerliteralContext ------------------------------------------------------------------

CPP14Parser::PointerliteralContext::PointerliteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::PointerliteralContext::Nullptr() {
  return getToken(CPP14Parser::Nullptr, 0);
}


size_t CPP14Parser::PointerliteralContext::getRuleIndex() const {
  return CPP14Parser::RulePointerliteral;
}

antlrcpp::Any CPP14Parser::PointerliteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitPointerliteral(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::PointerliteralContext* CPP14Parser::pointerliteral() {
  PointerliteralContext *_localctx = _tracker.createInstance<PointerliteralContext>(_ctx, getState());
  enterRule(_localctx, 394, CPP14Parser::RulePointerliteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2459);
    match(CPP14Parser::Nullptr);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UserdefinedliteralContext ------------------------------------------------------------------

CPP14Parser::UserdefinedliteralContext::UserdefinedliteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::UserdefinedliteralContext::Userdefinedintegerliteral() {
  return getToken(CPP14Parser::Userdefinedintegerliteral, 0);
}

tree::TerminalNode* CPP14Parser::UserdefinedliteralContext::Userdefinedfloatingliteral() {
  return getToken(CPP14Parser::Userdefinedfloatingliteral, 0);
}

tree::TerminalNode* CPP14Parser::UserdefinedliteralContext::Userdefinedstringliteral() {
  return getToken(CPP14Parser::Userdefinedstringliteral, 0);
}

tree::TerminalNode* CPP14Parser::UserdefinedliteralContext::Userdefinedcharacterliteral() {
  return getToken(CPP14Parser::Userdefinedcharacterliteral, 0);
}


size_t CPP14Parser::UserdefinedliteralContext::getRuleIndex() const {
  return CPP14Parser::RuleUserdefinedliteral;
}

antlrcpp::Any CPP14Parser::UserdefinedliteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))
    return parserVisitor->visitUserdefinedliteral(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::UserdefinedliteralContext* CPP14Parser::userdefinedliteral() {
  UserdefinedliteralContext *_localctx = _tracker.createInstance<UserdefinedliteralContext>(_ctx, getState());
  enterRule(_localctx, 396, CPP14Parser::RuleUserdefinedliteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2461);
    _la = _input->LA(1);
    if (!(((((_la - 135) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 135)) & ((1ULL << (CPP14Parser::Userdefinedintegerliteral - 135))
      | (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 135))
      | (1ULL << (CPP14Parser::Userdefinedstringliteral - 135))
      | (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 135)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CPP14Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return nestednamespecifierSempred(dynamic_cast<NestednamespecifierContext *>(context), predicateIndex);
    case 10: return capturelistSempred(dynamic_cast<CapturelistContext *>(context), predicateIndex);
    case 15: return postfixexpressionSempred(dynamic_cast<PostfixexpressionContext *>(context), predicateIndex);
    case 24: return noptrnewdeclaratorSempred(dynamic_cast<NoptrnewdeclaratorContext *>(context), predicateIndex);
    case 29: return pmexpressionSempred(dynamic_cast<PmexpressionContext *>(context), predicateIndex);
    case 30: return multiplicativeexpressionSempred(dynamic_cast<MultiplicativeexpressionContext *>(context), predicateIndex);
    case 31: return additiveexpressionSempred(dynamic_cast<AdditiveexpressionContext *>(context), predicateIndex);
    case 32: return shiftexpressionSempred(dynamic_cast<ShiftexpressionContext *>(context), predicateIndex);
    case 33: return relationalexpressionSempred(dynamic_cast<RelationalexpressionContext *>(context), predicateIndex);
    case 34: return equalityexpressionSempred(dynamic_cast<EqualityexpressionContext *>(context), predicateIndex);
    case 35: return andexpressionSempred(dynamic_cast<AndexpressionContext *>(context), predicateIndex);
    case 36: return exclusiveorexpressionSempred(dynamic_cast<ExclusiveorexpressionContext *>(context), predicateIndex);
    case 37: return inclusiveorexpressionSempred(dynamic_cast<InclusiveorexpressionContext *>(context), predicateIndex);
    case 38: return logicalandexpressionSempred(dynamic_cast<LogicalandexpressionContext *>(context), predicateIndex);
    case 39: return logicalorexpressionSempred(dynamic_cast<LogicalorexpressionContext *>(context), predicateIndex);
    case 43: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 49: return statementseqSempred(dynamic_cast<StatementseqContext *>(context), predicateIndex);
    case 58: return declarationseqSempred(dynamic_cast<DeclarationseqContext *>(context), predicateIndex);
    case 85: return enumeratorlistSempred(dynamic_cast<EnumeratorlistContext *>(context), predicateIndex);
    case 103: return attributespecifierseqSempred(dynamic_cast<AttributespecifierseqContext *>(context), predicateIndex);
    case 106: return attributelistSempred(dynamic_cast<AttributelistContext *>(context), predicateIndex);
    case 112: return balancedtokenseqSempred(dynamic_cast<BalancedtokenseqContext *>(context), predicateIndex);
    case 114: return initdeclaratorlistSempred(dynamic_cast<InitdeclaratorlistContext *>(context), predicateIndex);
    case 118: return noptrdeclaratorSempred(dynamic_cast<NoptrdeclaratorContext *>(context), predicateIndex);
    case 129: return noptrabstractdeclaratorSempred(dynamic_cast<NoptrabstractdeclaratorContext *>(context), predicateIndex);
    case 131: return noptrabstractpackdeclaratorSempred(dynamic_cast<NoptrabstractpackdeclaratorContext *>(context), predicateIndex);
    case 133: return parameterdeclarationlistSempred(dynamic_cast<ParameterdeclarationlistContext *>(context), predicateIndex);
    case 140: return initializerlistSempred(dynamic_cast<InitializerlistContext *>(context), predicateIndex);
    case 150: return memberdeclaratorlistSempred(dynamic_cast<MemberdeclaratorlistContext *>(context), predicateIndex);
    case 152: return virtspecifierseqSempred(dynamic_cast<VirtspecifierseqContext *>(context), predicateIndex);
    case 156: return basespecifierlistSempred(dynamic_cast<BasespecifierlistContext *>(context), predicateIndex);
    case 177: return templateargumentlistSempred(dynamic_cast<TemplateargumentlistContext *>(context), predicateIndex);
    case 190: return typeidlistSempred(dynamic_cast<TypeidlistContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::nestednamespecifierSempred(NestednamespecifierContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::capturelistSempred(CapturelistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::postfixexpressionSempred(PostfixexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 19);
    case 4: return precpred(_ctx, 18);
    case 5: return precpred(_ctx, 17);
    case 6: return precpred(_ctx, 12);
    case 7: return precpred(_ctx, 11);
    case 8: return precpred(_ctx, 10);
    case 9: return precpred(_ctx, 9);
    case 10: return precpred(_ctx, 8);
    case 11: return precpred(_ctx, 7);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::noptrnewdeclaratorSempred(NoptrnewdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 12: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::pmexpressionSempred(PmexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 13: return precpred(_ctx, 2);
    case 14: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::multiplicativeexpressionSempred(MultiplicativeexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 15: return precpred(_ctx, 3);
    case 16: return precpred(_ctx, 2);
    case 17: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::additiveexpressionSempred(AdditiveexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 18: return precpred(_ctx, 2);
    case 19: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::shiftexpressionSempred(ShiftexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 20: return precpred(_ctx, 2);
    case 21: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::relationalexpressionSempred(RelationalexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 22: return precpred(_ctx, 4);
    case 23: return precpred(_ctx, 3);
    case 24: return precpred(_ctx, 2);
    case 25: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::equalityexpressionSempred(EqualityexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 26: return precpred(_ctx, 2);
    case 27: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::andexpressionSempred(AndexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 28: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::exclusiveorexpressionSempred(ExclusiveorexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 29: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::inclusiveorexpressionSempred(InclusiveorexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 30: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::logicalandexpressionSempred(LogicalandexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 31: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::logicalorexpressionSempred(LogicalorexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 32: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 33: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::statementseqSempred(StatementseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 34: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::declarationseqSempred(DeclarationseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 35: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::enumeratorlistSempred(EnumeratorlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 36: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::attributespecifierseqSempred(AttributespecifierseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 37: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::attributelistSempred(AttributelistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 38: return precpred(_ctx, 3);
    case 39: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::balancedtokenseqSempred(BalancedtokenseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 40: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::initdeclaratorlistSempred(InitdeclaratorlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 41: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::noptrdeclaratorSempred(NoptrdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 42: return precpred(_ctx, 3);
    case 43: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::noptrabstractdeclaratorSempred(NoptrabstractdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 44: return precpred(_ctx, 5);
    case 45: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::noptrabstractpackdeclaratorSempred(NoptrabstractpackdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 46: return precpred(_ctx, 3);
    case 47: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::parameterdeclarationlistSempred(ParameterdeclarationlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 48: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::initializerlistSempred(InitializerlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 49: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::memberdeclaratorlistSempred(MemberdeclaratorlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 50: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::virtspecifierseqSempred(VirtspecifierseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 51: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::basespecifierlistSempred(BasespecifierlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 52: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::templateargumentlistSempred(TemplateargumentlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 53: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::typeidlistSempred(TypeidlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 54: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CPP14Parser::_decisionToDFA;
atn::PredictionContextCache CPP14Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CPP14Parser::_atn;
std::vector<uint16_t> CPP14Parser::_serializedATN;

std::vector<std::string> CPP14Parser::_ruleNames = {
  "translationunit", "primaryexpression", "idexpression", "unqualifiedid", 
  "qualifiedid", "nestednamespecifier", "lambdaexpression", "lambdaintroducer", 
  "lambdacapture", "capturedefault", "capturelist", "capture", "simplecapture", 
  "initcapture", "lambdadeclarator", "postfixexpression", "expressionlist", 
  "pseudodestructorname", "unaryexpression", "unaryoperator", "newexpression", 
  "newplacement", "newtypeid", "newdeclarator", "noptrnewdeclarator", "newinitializer", 
  "deleteexpression", "noexceptexpression", "castexpression", "pmexpression", 
  "multiplicativeexpression", "additiveexpression", "shiftexpression", "relationalexpression", 
  "equalityexpression", "andexpression", "exclusiveorexpression", "inclusiveorexpression", 
  "logicalandexpression", "logicalorexpression", "conditionalexpression", 
  "assignmentexpression", "assignmentoperator", "expression", "constantexpression", 
  "statement", "labeledstatement", "expressionstatement", "compoundstatement", 
  "statementseq", "selectionstatement", "condition", "iterationstatement", 
  "forinitstatement", "forrangedeclaration", "forrangeinitializer", "jumpstatement", 
  "declarationstatement", "declarationseq", "declaration", "blockdeclaration", 
  "aliasdeclaration", "simpledeclaration", "static_assertdeclaration", "emptydeclaration", 
  "attributedeclaration", "declspecifier", "declspecifierseq", "storageclassspecifier", 
  "functionspecifier", "typedefname", "typespecifier", "trailingtypespecifier", 
  "typespecifierseq", "trailingtypespecifierseq", "simpletypespecifier", 
  "thetypename", "decltypespecifier", "elaboratedtypespecifier", "enumname", 
  "enumspecifier", "enumhead", "opaqueenumdeclaration", "enumkey", "enumbase", 
  "enumeratorlist", "enumeratordefinition", "enumerator", "namespacename", 
  "originalnamespacename", "namespacedefinition", "namednamespacedefinition", 
  "originalnamespacedefinition", "extensionnamespacedefinition", "unnamednamespacedefinition", 
  "namespacebody", "namespacealias", "namespacealiasdefinition", "qualifiednamespacespecifier", 
  "usingdeclaration", "usingdirective", "asmdefinition", "linkagespecification", 
  "attributespecifierseq", "attributespecifier", "alignmentspecifier", "attributelist", 
  "attribute", "attributetoken", "attributescopedtoken", "attributenamespace", 
  "attributeargumentclause", "balancedtokenseq", "balancedtoken", "initdeclaratorlist", 
  "initdeclarator", "declarator", "ptrdeclarator", "noptrdeclarator", "parametersandqualifiers", 
  "trailingreturntype", "ptroperator", "cvqualifierseq", "cvqualifier", 
  "refqualifier", "declaratorid", "thetypeid", "abstractdeclarator", "ptrabstractdeclarator", 
  "noptrabstractdeclarator", "abstractpackdeclarator", "noptrabstractpackdeclarator", 
  "parameterdeclarationclause", "parameterdeclarationlist", "parameterdeclaration", 
  "functiondefinition", "functionbody", "initializer", "braceorequalinitializer", 
  "initializerclause", "initializerlist", "bracedinitlist", "classname", 
  "classspecifier", "classhead", "classheadname", "classvirtspecifier", 
  "classkey", "memberspecification", "memberdeclaration", "memberdeclaratorlist", 
  "memberdeclarator", "virtspecifierseq", "virtspecifier", "purespecifier", 
  "baseclause", "basespecifierlist", "basespecifier", "classordecltype", 
  "basetypespecifier", "accessspecifier", "conversionfunctionid", "conversiontypeid", 
  "conversiondeclarator", "ctorinitializer", "meminitializerlist", "meminitializer", 
  "meminitializerid", "operatorfunctionid", "literaloperatorid", "templatedeclaration", 
  "templateparameterlist", "templateparameter", "typeparameter", "simpletemplateid", 
  "templateid", "templatename", "templateargumentlist", "templateargument", 
  "typenamespecifier", "explicitinstantiation", "explicitspecialization", 
  "tryblock", "functiontryblock", "handlerseq", "handler", "exceptiondeclaration", 
  "throwexpression", "exceptionspecification", "dynamicexceptionspecification", 
  "typeidlist", "noexceptspecification", "rightShift", "rightShiftAssign", 
  "theoperator", "literal", "booleanliteral", "pointerliteral", "userdefinedliteral"
};

std::vector<std::string> CPP14Parser::_literalNames = {
  "", "", "", "'alignas'", "'alignof'", "'asm'", "'auto'", "'bool'", "'break'", 
  "'case'", "'catch'", "'char'", "'char16_t'", "'char32_t'", "'class'", 
  "'const'", "'constexpr'", "'const_cast'", "'continue'", "'decltype'", 
  "'default'", "'delete'", "'do'", "'double'", "'dynamic_cast'", "'else'", 
  "'enum'", "'explicit'", "'export'", "'extern'", "'false'", "'final'", 
  "'float'", "'for'", "'friend'", "'goto'", "'if'", "'inline'", "'int'", 
  "'long'", "'mutable'", "'namespace'", "'new'", "'noexcept'", "'nullptr'", 
  "'operator'", "'override'", "'private'", "'protected'", "'public'", "'register'", 
  "'reinterpret_cast'", "'return'", "'short'", "'signed'", "'sizeof'", "'static'", 
  "'static_assert'", "'static_cast'", "'struct'", "'switch'", "'template'", 
  "'this'", "'thread_local'", "'throw'", "'true'", "'try'", "'typedef'", 
  "'typeid'", "'typename'", "'union'", "'unsigned'", "'using'", "'virtual'", 
  "'void'", "'volatile'", "'wchar_t'", "'while'", "'('", "')'", "'['", "']'", 
  "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "'&'", "'|'", 
  "'~'", "'!'", "'='", "'<'", "'>'", "'+='", "'-='", "'*='", "'/='", "'%='", 
  "'^='", "'&='", "'|='", "'<<'", "'<<='", "'=='", "'!='", "'<='", "'>='", 
  "'&&'", "'||'", "'++'", "'--'", "','", "'->*'", "'->'", "'?'", "':'", 
  "'::'", "';'", "'.'", "'.*'", "'...'"
};

std::vector<std::string> CPP14Parser::_symbolicNames = {
  "", "MultiLineMacro", "Directive", "Alignas", "Alignof", "Asm", "Auto", 
  "Bool", "Break", "Case", "Catch", "Char", "Char16", "Char32", "Class", 
  "Const", "Constexpr", "Const_cast", "Continue", "Decltype", "Default", 
  "Delete", "Do", "Double", "Dynamic_cast", "Else", "Enum", "Explicit", 
  "Export", "Extern", "False", "Final", "Float", "For", "Friend", "Goto", 
  "If", "Inline", "Int", "Long", "Mutable", "Namespace", "New", "Noexcept", 
  "Nullptr", "Operator", "Override", "Private", "Protected", "Public", "Register", 
  "Reinterpret_cast", "Return", "Short", "Signed", "Sizeof", "Static", "Static_assert", 
  "Static_cast", "Struct", "Switch", "Template", "This", "Thread_local", 
  "Throw", "True", "Try", "Typedef", "Typeid", "Typename", "Union", "Unsigned", 
  "Using", "Virtual", "Void", "Volatile", "Wchar", "While", "LeftParen", 
  "RightParen", "LeftBracket", "RightBracket", "LeftBrace", "RightBrace", 
  "Plus", "Minus", "Star", "Div", "Mod", "Caret", "And", "Or", "Tilde", 
  "Not", "Assign", "Less", "Greater", "PlusAssign", "MinusAssign", "StarAssign", 
  "DivAssign", "ModAssign", "XorAssign", "AndAssign", "OrAssign", "LeftShift", 
  "LeftShiftAssign", "Equal", "NotEqual", "LessEqual", "GreaterEqual", "AndAnd", 
  "OrOr", "PlusPlus", "MinusMinus", "Comma", "ArrowStar", "Arrow", "Question", 
  "Colon", "Doublecolon", "Semi", "Dot", "DotStar", "Ellipsis", "Identifier", 
  "Integerliteral", "Decimalliteral", "Octalliteral", "Hexadecimalliteral", 
  "Binaryliteral", "Integersuffix", "Characterliteral", "Floatingliteral", 
  "Stringliteral", "Userdefinedintegerliteral", "Userdefinedfloatingliteral", 
  "Userdefinedstringliteral", "Userdefinedcharacterliteral", "Whitespace", 
  "Newline", "BlockComment", "LineComment"
};

dfa::Vocabulary CPP14Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CPP14Parser::_tokenNames;

CPP14Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x90, 0x9a2, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 
       0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 
       0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 0x6d, 0x9, 0x6d, 0x4, 0x6e, 
       0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 0x9, 0x70, 0x4, 0x71, 
       0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 0x73, 0x4, 0x74, 
       0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 0x4, 0x77, 
       0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 0x7a, 
       0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
       0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 
       0x9, 0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 
       0x9, 0x83, 0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 
       0x9, 0x86, 0x4, 0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 
       0x9, 0x89, 0x4, 0x8a, 0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 
       0x9, 0x8c, 0x4, 0x8d, 0x9, 0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 
       0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 
       0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 0x94, 0x9, 0x94, 0x4, 0x95, 
       0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 0x9, 0x97, 0x4, 0x98, 
       0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 0x9a, 0x4, 0x9b, 
       0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 0x4, 0x9e, 
       0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 0xa1, 
       0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
       0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 
       0x9, 0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 
       0x9, 0xaa, 0x4, 0xab, 0x9, 0xab, 0x4, 0xac, 0x9, 0xac, 0x4, 0xad, 
       0x9, 0xad, 0x4, 0xae, 0x9, 0xae, 0x4, 0xaf, 0x9, 0xaf, 0x4, 0xb0, 
       0x9, 0xb0, 0x4, 0xb1, 0x9, 0xb1, 0x4, 0xb2, 0x9, 0xb2, 0x4, 0xb3, 
       0x9, 0xb3, 0x4, 0xb4, 0x9, 0xb4, 0x4, 0xb5, 0x9, 0xb5, 0x4, 0xb6, 
       0x9, 0xb6, 0x4, 0xb7, 0x9, 0xb7, 0x4, 0xb8, 0x9, 0xb8, 0x4, 0xb9, 
       0x9, 0xb9, 0x4, 0xba, 0x9, 0xba, 0x4, 0xbb, 0x9, 0xbb, 0x4, 0xbc, 
       0x9, 0xbc, 0x4, 0xbd, 0x9, 0xbd, 0x4, 0xbe, 0x9, 0xbe, 0x4, 0xbf, 
       0x9, 0xbf, 0x4, 0xc0, 0x9, 0xc0, 0x4, 0xc1, 0x9, 0xc1, 0x4, 0xc2, 
       0x9, 0xc2, 0x4, 0xc3, 0x9, 0xc3, 0x4, 0xc4, 0x9, 0xc4, 0x4, 0xc5, 
       0x9, 0xc5, 0x4, 0xc6, 0x9, 0xc6, 0x4, 0xc7, 0x9, 0xc7, 0x4, 0xc8, 
       0x9, 0xc8, 0x3, 0x2, 0x5, 0x2, 0x192, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x5, 0x3, 0x19e, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 
       0x4, 0x1a2, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x1ad, 0xa, 
       0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x1b1, 0xa, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x1c0, 
       0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
       0x7, 0x1c7, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x1cc, 
       0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x1cf, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 
       0x5, 0x8, 0x1d3, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
       0x5, 0x9, 0x1d9, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x1e3, 0xa, 0xa, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x1ea, 
       0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x1f0, 
       0xa, 0xc, 0x7, 0xc, 0x1f2, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x1f5, 0xb, 
       0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x1f9, 0xa, 0xd, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1ff, 0xa, 0xe, 0x3, 0xf, 0x3, 
       0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x206, 0xa, 0xf, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x20c, 0xa, 0x10, 
       0x3, 0x10, 0x5, 0x10, 0x20f, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 0x212, 
       0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 0x215, 0xa, 0x10, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x21c, 0xa, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
       0x223, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x257, 0xa, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x5, 0x11, 0x266, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x5, 0x11, 0x26c, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x272, 0xa, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x27f, 0xa, 0x11, 
       0xc, 0x11, 0xe, 0x11, 0x282, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x13, 0x5, 0x13, 0x287, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
       0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
       0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x296, 0xa, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x29c, 
       0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 
       0x2ba, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x5, 0x16, 0x2bf, 
       0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x2c3, 0xa, 0x16, 0x3, 
       0x16, 0x3, 0x16, 0x5, 0x16, 0x2c7, 0xa, 0x16, 0x3, 0x16, 0x5, 0x16, 
       0x2ca, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x2ce, 0xa, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x2d4, 0xa, 
       0x16, 0x5, 0x16, 0x2d6, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
       0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x2de, 0xa, 0x18, 0x3, 
       0x19, 0x3, 0x19, 0x5, 0x19, 0x2e2, 0xa, 0x19, 0x3, 0x19, 0x5, 0x19, 
       0x2e5, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x5, 0x1a, 0x2ec, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
       0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x2f3, 0xa, 0x1a, 0x7, 0x1a, 0x2f5, 
       0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x2f8, 0xb, 0x1a, 0x3, 0x1b, 0x3, 
       0x1b, 0x5, 0x1b, 0x2fc, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 
       0x300, 0xa, 0x1b, 0x3, 0x1c, 0x5, 0x1c, 0x303, 0xa, 0x1c, 0x3, 0x1c, 
       0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x308, 0xa, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x30e, 0xa, 0x1c, 0x3, 0x1d, 
       0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x31b, 0xa, 
       0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
       0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x326, 0xa, 0x1f, 
       0xc, 0x1f, 0xe, 0x1f, 0x329, 0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x337, 0xa, 0x20, 
       0xc, 0x20, 0xe, 0x20, 0x33a, 0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x7, 0x21, 0x345, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x348, 0xb, 
       0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x354, 
       0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x357, 0xb, 0x22, 0x3, 0x23, 0x3, 
       0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
       0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
       0x23, 0x3, 0x23, 0x7, 0x23, 0x368, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 
       0x36b, 0xb, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
       0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0x376, 
       0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x379, 0xb, 0x24, 0x3, 0x25, 0x3, 
       0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 0x381, 
       0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x384, 0xb, 0x25, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 0x26, 0x38c, 
       0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x38f, 0xb, 0x26, 0x3, 0x27, 0x3, 
       0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x397, 
       0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x39a, 0xb, 0x27, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x3a2, 
       0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x3a5, 0xb, 0x28, 0x3, 0x29, 0x3, 
       0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x3ad, 
       0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x3b0, 0xb, 0x29, 0x3, 0x2a, 0x3, 
       0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 
       0x2a, 0x3b9, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x3c1, 0xa, 0x2b, 0x3, 0x2c, 0x3, 
       0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
       0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x3ce, 0xa, 0x2c, 
       0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
       0x7, 0x2d, 0x3d6, 0xa, 0x2d, 0xc, 0x2d, 0xe, 0x2d, 0x3d9, 0xb, 0x2d, 
       0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x3df, 0xa, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x3e3, 0xa, 0x2f, 0x3, 0x2f, 
       0x3, 0x2f, 0x5, 0x2f, 0x3e7, 0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 
       0x2f, 0x3eb, 0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x3ef, 0xa, 
       0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x3f4, 0xa, 0x2f, 
       0x3, 0x2f, 0x5, 0x2f, 0x3f7, 0xa, 0x2f, 0x3, 0x30, 0x5, 0x30, 0x3fa, 
       0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 
       0x400, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
       0x30, 0x3, 0x30, 0x5, 0x30, 0x408, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 
       0x3, 0x30, 0x5, 0x30, 0x40d, 0xa, 0x30, 0x3, 0x31, 0x5, 0x31, 0x410, 
       0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 
       0x416, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 
       0x33, 0x3, 0x33, 0x3, 0x33, 0x7, 0x33, 0x41f, 0xa, 0x33, 0xc, 0x33, 
       0xe, 0x33, 0x422, 0xb, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 
       0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 
       0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 
       0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x438, 
       0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x43c, 0xa, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 
       0x35, 0x444, 0xa, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
       0x5, 0x35, 0x44a, 0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x45e, 0xa, 0x36, 0x3, 0x36, 
       0x3, 0x36, 0x5, 0x36, 0x462, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x46f, 0xa, 0x36, 0x3, 0x37, 
       0x3, 0x37, 0x5, 0x37, 0x473, 0xa, 0x37, 0x3, 0x38, 0x5, 0x38, 0x476, 
       0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 
       0x5, 0x39, 0x47d, 0xa, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x485, 0xa, 0x3a, 0x3, 0x3a, 
       0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
       0x3, 0x3a, 0x5, 0x3a, 0x48f, 0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 
       0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x7, 0x3c, 0x498, 
       0xa, 0x3c, 0xc, 0x3c, 0xe, 0x3c, 0x49b, 0xb, 0x3c, 0x3, 0x3d, 0x3, 
       0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
       0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x4a6, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 
       0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
       0x5, 0x3e, 0x4b0, 0xa, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 
       0x3f, 0x4b5, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
       0x3, 0x40, 0x5, 0x40, 0x4bc, 0xa, 0x40, 0x3, 0x40, 0x5, 0x40, 0x4bf, 
       0xa, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x4c4, 0xa, 
       0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x4c9, 0xa, 0x40, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 
       0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
       0x3, 0x44, 0x5, 0x44, 0x4de, 0xa, 0x44, 0x3, 0x45, 0x3, 0x45, 0x5, 
       0x45, 0x4e2, 0xa, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 
       0x4e7, 0xa, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 
       0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x4f2, 
       0xa, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 
       0x4f8, 0xa, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x4fc, 0xa, 0x4b, 
       0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x501, 0xa, 0x4b, 0x3, 
       0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x505, 0xa, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
       0x3, 0x4c, 0x5, 0x4c, 0x50a, 0xa, 0x4c, 0x3, 0x4d, 0x5, 0x4d, 0x50d, 
       0xa, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
       0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
       0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
       0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x523, 0xa, 0x4d, 0x3, 
       0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x529, 0xa, 0x4e, 
       0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
       0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x534, 0xa, 0x4f, 0x3, 
       0x50, 0x3, 0x50, 0x5, 0x50, 0x538, 0xa, 0x50, 0x3, 0x50, 0x5, 0x50, 
       0x53b, 0xa, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 
       0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x545, 0xa, 0x50, 
       0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x54b, 0xa, 
       0x50, 0x3, 0x50, 0x5, 0x50, 0x54e, 0xa, 0x50, 0x3, 0x51, 0x3, 0x51, 
       0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x555, 0xa, 0x52, 0x3, 
       0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 
       0x52, 0x3, 0x52, 0x5, 0x52, 0x55f, 0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 
       0x5, 0x53, 0x563, 0xa, 0x53, 0x3, 0x53, 0x5, 0x53, 0x566, 0xa, 0x53, 
       0x3, 0x53, 0x5, 0x53, 0x569, 0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 
       0x53, 0x56d, 0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 
       0x572, 0xa, 0x53, 0x5, 0x53, 0x574, 0xa, 0x53, 0x3, 0x54, 0x3, 0x54, 
       0x5, 0x54, 0x578, 0xa, 0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x57c, 
       0xa, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 
       0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x585, 0xa, 0x55, 0x3, 0x56, 0x3, 
       0x56, 0x3, 0x56, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 
       0x57, 0x3, 0x57, 0x7, 0x57, 0x590, 0xa, 0x57, 0xc, 0x57, 0xe, 0x57, 
       0x593, 0xb, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 
       0x58, 0x5, 0x58, 0x59a, 0xa, 0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 0x5a, 
       0x3, 0x5a, 0x5, 0x5a, 0x5a0, 0xa, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 
       0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x5a6, 0xa, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 
       0x5, 0x5d, 0x5aa, 0xa, 0x5d, 0x3, 0x5e, 0x5, 0x5e, 0x5ad, 0xa, 0x5e, 
       0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
       0x3, 0x5f, 0x5, 0x5f, 0x5b6, 0xa, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
       0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x60, 0x5, 0x60, 0x5bf, 
       0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 
       0x3, 0x61, 0x5, 0x61, 0x5c7, 0xa, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 
       0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 
       0x64, 0x5, 0x64, 0x5d2, 0xa, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x65, 
       0x3, 0x65, 0x5, 0x65, 0x5d8, 0xa, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 
       0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 
       0x65, 0x5, 0x65, 0x5e3, 0xa, 0x65, 0x3, 0x66, 0x5, 0x66, 0x5e6, 0xa, 
       0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 0x5eb, 0xa, 0x66, 
       0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
       0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 
       0x3, 0x68, 0x5, 0x68, 0x5fa, 0xa, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
       0x68, 0x3, 0x68, 0x5, 0x68, 0x600, 0xa, 0x68, 0x3, 0x69, 0x3, 0x69, 
       0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x7, 0x69, 0x607, 0xa, 0x69, 0xc, 
       0x69, 0xe, 0x69, 0x60a, 0xb, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
       0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x613, 0xa, 
       0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x5, 0x6b, 0x619, 
       0xa, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
       0x3, 0x6b, 0x5, 0x6b, 0x621, 0xa, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x5, 
       0x6b, 0x625, 0xa, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 0x5, 0x6c, 0x629, 0xa, 
       0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x5, 0x6c, 0x62e, 0xa, 0x6c, 
       0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x5, 0x6c, 0x633, 0xa, 0x6c, 0x3, 
       0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x7, 0x6c, 0x63a, 
       0xa, 0x6c, 0xc, 0x6c, 0xe, 0x6c, 0x63d, 0xb, 0x6c, 0x3, 0x6d, 0x3, 
       0x6d, 0x5, 0x6d, 0x641, 0xa, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 
       0x645, 0xa, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 
       0x70, 0x3, 0x70, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 
       0x72, 0x3, 0x72, 0x5, 0x72, 0x653, 0xa, 0x72, 0x3, 0x72, 0x3, 0x72, 
       0x7, 0x72, 0x657, 0xa, 0x72, 0xc, 0x72, 0xe, 0x72, 0x65a, 0xb, 0x72, 
       0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 
       0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 
       0x5, 0x73, 0x668, 0xa, 0x73, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 
       0x74, 0x3, 0x74, 0x3, 0x74, 0x7, 0x74, 0x670, 0xa, 0x74, 0xc, 0x74, 
       0xe, 0x74, 0x673, 0xb, 0x74, 0x3, 0x75, 0x3, 0x75, 0x5, 0x75, 0x677, 
       0xa, 0x75, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 
       0x5, 0x76, 0x67e, 0xa, 0x76, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 
       0x77, 0x5, 0x77, 0x684, 0xa, 0x77, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 
       0x5, 0x78, 0x689, 0xa, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 
       0x78, 0x5, 0x78, 0x68f, 0xa, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 
       0x3, 0x78, 0x3, 0x78, 0x5, 0x78, 0x696, 0xa, 0x78, 0x3, 0x78, 0x3, 
       0x78, 0x5, 0x78, 0x69a, 0xa, 0x78, 0x7, 0x78, 0x69c, 0xa, 0x78, 0xc, 
       0x78, 0xe, 0x78, 0x69f, 0xb, 0x78, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 
       0x3, 0x79, 0x5, 0x79, 0x6a5, 0xa, 0x79, 0x3, 0x79, 0x5, 0x79, 0x6a8, 
       0xa, 0x79, 0x3, 0x79, 0x5, 0x79, 0x6ab, 0xa, 0x79, 0x3, 0x79, 0x5, 
       0x79, 0x6ae, 0xa, 0x79, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x5, 0x7a, 
       0x6b3, 0xa, 0x7a, 0x3, 0x7b, 0x3, 0x7b, 0x5, 0x7b, 0x6b7, 0xa, 0x7b, 
       0x3, 0x7b, 0x5, 0x7b, 0x6ba, 0xa, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x5, 
       0x7b, 0x6be, 0xa, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x5, 0x7b, 0x6c2, 0xa, 
       0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x5, 0x7b, 0x6c7, 0xa, 0x7b, 
       0x3, 0x7b, 0x5, 0x7b, 0x6ca, 0xa, 0x7b, 0x5, 0x7b, 0x6cc, 0xa, 0x7b, 
       0x3, 0x7c, 0x3, 0x7c, 0x5, 0x7c, 0x6d0, 0xa, 0x7c, 0x3, 0x7d, 0x3, 
       0x7d, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7f, 0x5, 0x7f, 0x6d7, 0xa, 0x7f, 
       0x3, 0x7f, 0x3, 0x7f, 0x3, 0x80, 0x3, 0x80, 0x5, 0x80, 0x6dd, 0xa, 
       0x80, 0x3, 0x81, 0x3, 0x81, 0x5, 0x81, 0x6e1, 0xa, 0x81, 0x3, 0x81, 
       0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x5, 0x81, 0x6e7, 0xa, 0x81, 0x3, 
       0x82, 0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 0x6ec, 0xa, 0x82, 0x5, 0x82, 
       0x6ee, 0xa, 0x82, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 
       0x83, 0x6f4, 0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x6f8, 0xa, 
       0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x6fe, 
       0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 
       0x5, 0x83, 0x705, 0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x709, 
       0xa, 0x83, 0x7, 0x83, 0x70b, 0xa, 0x83, 0xc, 0x83, 0xe, 0x83, 0x70e, 
       0xb, 0x83, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 
       0x714, 0xa, 0x84, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 
       0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x71e, 0xa, 0x85, 
       0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x722, 0xa, 0x85, 0x7, 0x85, 0x724, 
       0xa, 0x85, 0xc, 0x85, 0xe, 0x85, 0x727, 0xb, 0x85, 0x3, 0x86, 0x5, 
       0x86, 0x72a, 0xa, 0x86, 0x3, 0x86, 0x5, 0x86, 0x72d, 0xa, 0x86, 0x3, 
       0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 0x733, 0xa, 0x86, 
       0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
       0x7, 0x87, 0x73b, 0xa, 0x87, 0xc, 0x87, 0xe, 0x87, 0x73e, 0xb, 0x87, 
       0x3, 0x88, 0x5, 0x88, 0x741, 0xa, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 
       0x88, 0x3, 0x88, 0x5, 0x88, 0x747, 0xa, 0x88, 0x3, 0x88, 0x3, 0x88, 
       0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x74f, 0xa, 
       0x88, 0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x753, 0xa, 0x88, 0x3, 0x88, 
       0x5, 0x88, 0x756, 0xa, 0x88, 0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x75a, 
       0xa, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x75f, 0xa, 
       0x88, 0x3, 0x89, 0x5, 0x89, 0x762, 0xa, 0x89, 0x3, 0x89, 0x5, 0x89, 
       0x765, 0xa, 0x89, 0x3, 0x89, 0x3, 0x89, 0x5, 0x89, 0x769, 0xa, 0x89, 
       0x3, 0x89, 0x3, 0x89, 0x3, 0x8a, 0x5, 0x8a, 0x76e, 0xa, 0x8a, 0x3, 
       0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 
       0x8a, 0x3, 0x8a, 0x5, 0x8a, 0x778, 0xa, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 
       0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x77f, 0xa, 0x8b, 0x3, 
       0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x5, 0x8c, 0x784, 0xa, 0x8c, 0x3, 0x8d, 
       0x3, 0x8d, 0x5, 0x8d, 0x788, 0xa, 0x8d, 0x3, 0x8e, 0x3, 0x8e, 0x3, 
       0x8e, 0x5, 0x8e, 0x78d, 0xa, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 
       0x3, 0x8e, 0x5, 0x8e, 0x793, 0xa, 0x8e, 0x7, 0x8e, 0x795, 0xa, 0x8e, 
       0xc, 0x8e, 0xe, 0x8e, 0x798, 0xb, 0x8e, 0x3, 0x8f, 0x3, 0x8f, 0x3, 
       0x8f, 0x5, 0x8f, 0x79d, 0xa, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 
       0x3, 0x8f, 0x5, 0x8f, 0x7a3, 0xa, 0x8f, 0x3, 0x90, 0x3, 0x90, 0x5, 
       0x90, 0x7a7, 0xa, 0x90, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x5, 0x91, 
       0x7ac, 0xa, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x92, 0x3, 0x92, 0x5, 
       0x92, 0x7b2, 0xa, 0x92, 0x3, 0x92, 0x3, 0x92, 0x5, 0x92, 0x7b6, 0xa, 
       0x92, 0x3, 0x92, 0x5, 0x92, 0x7b9, 0xa, 0x92, 0x3, 0x92, 0x3, 0x92, 
       0x5, 0x92, 0x7bd, 0xa, 0x92, 0x3, 0x92, 0x5, 0x92, 0x7c0, 0xa, 0x92, 
       0x5, 0x92, 0x7c2, 0xa, 0x92, 0x3, 0x93, 0x5, 0x93, 0x7c5, 0xa, 0x93, 
       0x3, 0x93, 0x3, 0x93, 0x3, 0x94, 0x3, 0x94, 0x3, 0x95, 0x3, 0x95, 
       0x3, 0x96, 0x3, 0x96, 0x5, 0x96, 0x7cf, 0xa, 0x96, 0x3, 0x96, 0x3, 
       0x96, 0x3, 0x96, 0x5, 0x96, 0x7d4, 0xa, 0x96, 0x5, 0x96, 0x7d6, 0xa, 
       0x96, 0x3, 0x97, 0x5, 0x97, 0x7d9, 0xa, 0x97, 0x3, 0x97, 0x5, 0x97, 
       0x7dc, 0xa, 0x97, 0x3, 0x97, 0x5, 0x97, 0x7df, 0xa, 0x97, 0x3, 0x97, 
       0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 
       0x5, 0x97, 0x7e8, 0xa, 0x97, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 
       0x98, 0x3, 0x98, 0x3, 0x98, 0x7, 0x98, 0x7f0, 0xa, 0x98, 0xc, 0x98, 
       0xe, 0x98, 0x7f3, 0xb, 0x98, 0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x7f7, 
       0xa, 0x99, 0x3, 0x99, 0x5, 0x99, 0x7fa, 0xa, 0x99, 0x3, 0x99, 0x3, 
       0x99, 0x5, 0x99, 0x7fe, 0xa, 0x99, 0x3, 0x99, 0x5, 0x99, 0x801, 0xa, 
       0x99, 0x3, 0x99, 0x5, 0x99, 0x804, 0xa, 0x99, 0x3, 0x99, 0x3, 0x99, 
       0x5, 0x99, 0x808, 0xa, 0x99, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 
       0x9a, 0x3, 0x9a, 0x7, 0x9a, 0x80f, 0xa, 0x9a, 0xc, 0x9a, 0xe, 0x9a, 
       0x812, 0xb, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9c, 0x3, 0x9c, 0x3, 
       0x9c, 0x3, 0x9c, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9e, 0x3, 
       0x9e, 0x3, 0x9e, 0x5, 0x9e, 0x820, 0xa, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 
       0x3, 0x9e, 0x3, 0x9e, 0x5, 0x9e, 0x826, 0xa, 0x9e, 0x7, 0x9e, 0x828, 
       0xa, 0x9e, 0xc, 0x9e, 0xe, 0x9e, 0x82b, 0xb, 0x9e, 0x3, 0x9f, 0x5, 
       0x9f, 0x82e, 0xa, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x5, 0x9f, 0x832, 0xa, 
       0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x5, 0x9f, 0x836, 0xa, 0x9f, 0x3, 0x9f, 
       0x3, 0x9f, 0x5, 0x9f, 0x83a, 0xa, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x5, 
       0x9f, 0x83e, 0xa, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x5, 0x9f, 0x842, 0xa, 
       0x9f, 0x3, 0xa0, 0x5, 0xa0, 0x845, 0xa, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 
       0x5, 0xa0, 0x849, 0xa, 0xa0, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa2, 0x3, 
       0xa2, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa4, 0x3, 0xa4, 0x5, 
       0xa4, 0x854, 0xa, 0xa4, 0x3, 0xa5, 0x3, 0xa5, 0x5, 0xa5, 0x858, 0xa, 
       0xa5, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 0x5, 
       0xa7, 0x85f, 0xa, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x5, 0xa7, 0x863, 0xa, 
       0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x5, 0xa7, 0x868, 0xa, 0xa7, 
       0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x5, 0xa8, 0x86d, 0xa, 0xa8, 0x3, 
       0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x5, 0xa8, 0x874, 
       0xa, 0xa8, 0x3, 0xa9, 0x3, 0xa9, 0x5, 0xa9, 0x878, 0xa, 0xa9, 0x3, 
       0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 
       0xab, 0x3, 0xab, 0x5, 0xab, 0x882, 0xa, 0xab, 0x3, 0xac, 0x3, 0xac, 
       0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xad, 0x3, 0xad, 
       0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x5, 0xad, 0x88f, 0xa, 0xad, 0x3, 
       0xae, 0x3, 0xae, 0x5, 0xae, 0x893, 0xa, 0xae, 0x3, 0xaf, 0x3, 0xaf, 
       0x5, 0xaf, 0x897, 0xa, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x89a, 0xa, 0xaf, 
       0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x89e, 0xa, 0xaf, 0x3, 0xaf, 0x3, 
       0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x8a4, 0xa, 0xaf, 0x3, 0xaf, 
       0x5, 0xaf, 0x8a7, 0xa, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x8ab, 
       0xa, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 
       0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x8b5, 0xa, 0xaf, 0x3, 
       0xaf, 0x5, 0xaf, 0x8b8, 0xa, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 
       0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x8c0, 0xa, 0xaf, 0x3, 
       0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x8c5, 0xa, 0xaf, 0x3, 0xb0, 
       0x3, 0xb0, 0x3, 0xb0, 0x5, 0xb0, 0x8ca, 0xa, 0xb0, 0x3, 0xb0, 0x3, 
       0xb0, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x5, 0xb1, 0x8d2, 
       0xa, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 
       0x5, 0xb1, 0x8d9, 0xa, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x5, 0xb1, 0x8dd, 
       0xa, 0xb1, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 
       0x5, 0xb3, 0x8e4, 0xa, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 
       0xb3, 0x5, 0xb3, 0x8ea, 0xa, 0xb3, 0x7, 0xb3, 0x8ec, 0xa, 0xb3, 0xc, 
       0xb3, 0xe, 0xb3, 0x8ef, 0xb, 0xb3, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 
       0x5, 0xb4, 0x8f4, 0xa, 0xb4, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 
       0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x5, 0xb5, 0x8fd, 0xa, 0xb5, 
       0x3, 0xb5, 0x3, 0xb5, 0x5, 0xb5, 0x901, 0xa, 0xb5, 0x3, 0xb6, 0x5, 
       0xb6, 0x904, 0xa, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb7, 
       0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb8, 0x3, 0xb8, 
       0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb9, 0x3, 0xb9, 0x5, 0xb9, 0x914, 0xa, 
       0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xba, 0x3, 0xba, 0x5, 
       0xba, 0x91b, 0xa, 0xba, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 
       0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbc, 0x5, 0xbc, 0x924, 0xa, 0xbc, 0x3, 
       0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x92a, 0xa, 0xbc, 
       0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x92e, 0xa, 0xbc, 0x3, 0xbc, 0x5, 
       0xbc, 0x931, 0xa, 0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x935, 0xa, 
       0xbd, 0x3, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 0x939, 0xa, 0xbe, 0x3, 0xbf, 
       0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x93e, 0xa, 0xbf, 0x3, 0xbf, 0x3, 
       0xbf, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x5, 0xc0, 0x945, 0xa, 0xc0, 
       0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x5, 0xc0, 0x94b, 0xa, 
       0xc0, 0x7, 0xc0, 0x94d, 0xa, 0xc0, 0xc, 0xc0, 0xe, 0xc0, 0x950, 0xb, 
       0xc0, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 
       0xc1, 0x5, 0xc1, 0x958, 0xa, 0xc1, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 
       0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc4, 0x3, 0xc4, 
       0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 
       0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 
       0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 
       0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 
       0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 
       0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 
       0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 
       0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x5, 0xc4, 0x991, 0xa, 
       0xc4, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x99a, 0xa, 0xc5, 0x3, 0xc6, 0x3, 0xc6, 
       0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x2, 0x23, 
       0xc, 0x16, 0x20, 0x32, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 
       0x4a, 0x4c, 0x4e, 0x50, 0x58, 0x64, 0x76, 0xac, 0xd0, 0xd6, 0xe2, 
       0xe6, 0xee, 0x104, 0x108, 0x10c, 0x11a, 0x12e, 0x132, 0x13a, 0x164, 
       0x17e, 0xc9, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
       0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
       0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
       0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 
       0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 
       0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 
       0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 
       0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 
       0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 
       0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 
       0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 
       0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 
       0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 0x118, 0x11a, 
       0x11c, 0x11e, 0x120, 0x122, 0x124, 0x126, 0x128, 0x12a, 0x12c, 0x12e, 
       0x130, 0x132, 0x134, 0x136, 0x138, 0x13a, 0x13c, 0x13e, 0x140, 0x142, 
       0x144, 0x146, 0x148, 0x14a, 0x14c, 0x14e, 0x150, 0x152, 0x154, 0x156, 
       0x158, 0x15a, 0x15c, 0x15e, 0x160, 0x162, 0x164, 0x166, 0x168, 0x16a, 
       0x16c, 0x16e, 0x170, 0x172, 0x174, 0x176, 0x178, 0x17a, 0x17c, 0x17e, 
       0x180, 0x182, 0x184, 0x186, 0x188, 0x18a, 0x18c, 0x18e, 0x2, 0xd, 
       0x4, 0x2, 0x5c, 0x5c, 0x60, 0x60, 0x4, 0x2, 0x56, 0x58, 0x5c, 0x5f, 
       0x7, 0x2, 0x1f, 0x1f, 0x2a, 0x2a, 0x34, 0x34, 0x3a, 0x3a, 0x41, 0x41, 
       0x5, 0x2, 0x1d, 0x1d, 0x27, 0x27, 0x4b, 0x4b, 0x4, 0x2, 0x11, 0x11, 
       0x4d, 0x4d, 0x4, 0x2, 0x5c, 0x5c, 0x71, 0x71, 0x5, 0x2, 0x10, 0x10, 
       0x3d, 0x3d, 0x48, 0x48, 0x4, 0x2, 0x21, 0x21, 0x30, 0x30, 0x3, 0x2, 
       0x31, 0x33, 0x4, 0x2, 0x20, 0x20, 0x43, 0x43, 0x3, 0x2, 0x89, 0x8c, 
       0x2, 0xac3, 0x2, 0x191, 0x3, 0x2, 0x2, 0x2, 0x4, 0x19d, 0x3, 0x2, 
       0x2, 0x2, 0x6, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1ac, 0x3, 0x2, 0x2, 
       0x2, 0xa, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0xc, 0x1bf, 0x3, 0x2, 0x2, 0x2, 
       0xe, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x10, 0x1d6, 0x3, 0x2, 0x2, 0x2, 
       0x12, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x14, 0x1e4, 0x3, 0x2, 0x2, 0x2, 
       0x16, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1f8, 0x3, 0x2, 0x2, 0x2, 
       0x1a, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x205, 0x3, 0x2, 0x2, 0x2, 
       0x1e, 0x207, 0x3, 0x2, 0x2, 0x2, 0x20, 0x256, 0x3, 0x2, 0x2, 0x2, 
       0x22, 0x283, 0x3, 0x2, 0x2, 0x2, 0x24, 0x29b, 0x3, 0x2, 0x2, 0x2, 
       0x26, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2bb, 0x3, 0x2, 0x2, 0x2, 
       0x2a, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d7, 0x3, 0x2, 0x2, 0x2, 
       0x2e, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2e4, 0x3, 0x2, 0x2, 0x2, 
       0x32, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x34, 0x2ff, 0x3, 0x2, 0x2, 0x2, 
       0x36, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x38, 0x30f, 0x3, 0x2, 0x2, 0x2, 
       0x3a, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x31c, 0x3, 0x2, 0x2, 0x2, 
       0x3e, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x40, 0x33b, 0x3, 0x2, 0x2, 0x2, 
       0x42, 0x349, 0x3, 0x2, 0x2, 0x2, 0x44, 0x358, 0x3, 0x2, 0x2, 0x2, 
       0x46, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x48, 0x37a, 0x3, 0x2, 0x2, 0x2, 
       0x4a, 0x385, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x390, 0x3, 0x2, 0x2, 0x2, 
       0x4e, 0x39b, 0x3, 0x2, 0x2, 0x2, 0x50, 0x3a6, 0x3, 0x2, 0x2, 0x2, 
       0x52, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x54, 0x3c0, 0x3, 0x2, 0x2, 0x2, 
       0x56, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x58, 0x3cf, 0x3, 0x2, 0x2, 0x2, 
       0x5a, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x3f6, 0x3, 0x2, 0x2, 0x2, 
       0x5e, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x60, 0x40f, 0x3, 0x2, 0x2, 0x2, 
       0x62, 0x413, 0x3, 0x2, 0x2, 0x2, 0x64, 0x419, 0x3, 0x2, 0x2, 0x2, 
       0x66, 0x437, 0x3, 0x2, 0x2, 0x2, 0x68, 0x449, 0x3, 0x2, 0x2, 0x2, 
       0x6a, 0x46e, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x472, 0x3, 0x2, 0x2, 0x2, 
       0x6e, 0x475, 0x3, 0x2, 0x2, 0x2, 0x70, 0x47c, 0x3, 0x2, 0x2, 0x2, 
       0x72, 0x48e, 0x3, 0x2, 0x2, 0x2, 0x74, 0x490, 0x3, 0x2, 0x2, 0x2, 
       0x76, 0x492, 0x3, 0x2, 0x2, 0x2, 0x78, 0x4a5, 0x3, 0x2, 0x2, 0x2, 
       0x7a, 0x4af, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x4b1, 0x3, 0x2, 0x2, 0x2, 
       0x7e, 0x4c8, 0x3, 0x2, 0x2, 0x2, 0x80, 0x4ca, 0x3, 0x2, 0x2, 0x2, 
       0x82, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0x84, 0x4d4, 0x3, 0x2, 0x2, 0x2, 
       0x86, 0x4dd, 0x3, 0x2, 0x2, 0x2, 0x88, 0x4e6, 0x3, 0x2, 0x2, 0x2, 
       0x8a, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x4ea, 0x3, 0x2, 0x2, 0x2, 
       0x8e, 0x4ec, 0x3, 0x2, 0x2, 0x2, 0x90, 0x4f1, 0x3, 0x2, 0x2, 0x2, 
       0x92, 0x4f7, 0x3, 0x2, 0x2, 0x2, 0x94, 0x500, 0x3, 0x2, 0x2, 0x2, 
       0x96, 0x509, 0x3, 0x2, 0x2, 0x2, 0x98, 0x522, 0x3, 0x2, 0x2, 0x2, 
       0x9a, 0x528, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x533, 0x3, 0x2, 0x2, 0x2, 
       0x9e, 0x54d, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x54f, 0x3, 0x2, 0x2, 0x2, 
       0xa2, 0x55e, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x573, 0x3, 0x2, 0x2, 0x2, 
       0xa6, 0x575, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x584, 0x3, 0x2, 0x2, 0x2, 
       0xaa, 0x586, 0x3, 0x2, 0x2, 0x2, 0xac, 0x589, 0x3, 0x2, 0x2, 0x2, 
       0xae, 0x599, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x59b, 0x3, 0x2, 0x2, 0x2, 
       0xb2, 0x59f, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x5a1, 0x3, 0x2, 0x2, 0x2, 
       0xb6, 0x5a5, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x5a9, 0x3, 0x2, 0x2, 0x2, 
       0xba, 0x5ac, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x5b5, 0x3, 0x2, 0x2, 0x2, 
       0xbe, 0x5be, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x5c6, 0x3, 0x2, 0x2, 0x2, 
       0xc2, 0x5c8, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x5ca, 0x3, 0x2, 0x2, 0x2, 
       0xc6, 0x5d1, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x5e2, 0x3, 0x2, 0x2, 0x2, 
       0xca, 0x5e5, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x5ef, 0x3, 0x2, 0x2, 0x2, 
       0xce, 0x5ff, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x601, 0x3, 0x2, 0x2, 0x2, 
       0xd2, 0x612, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x624, 0x3, 0x2, 0x2, 0x2, 
       0xd6, 0x62d, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x63e, 0x3, 0x2, 0x2, 0x2, 
       0xda, 0x644, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x646, 0x3, 0x2, 0x2, 0x2, 
       0xde, 0x64a, 0x3, 0x2, 0x2, 0x2, 0xe0, 0x64c, 0x3, 0x2, 0x2, 0x2, 
       0xe2, 0x650, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x667, 0x3, 0x2, 0x2, 0x2, 
       0xe6, 0x669, 0x3, 0x2, 0x2, 0x2, 0xe8, 0x674, 0x3, 0x2, 0x2, 0x2, 
       0xea, 0x67d, 0x3, 0x2, 0x2, 0x2, 0xec, 0x683, 0x3, 0x2, 0x2, 0x2, 
       0xee, 0x68e, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x6a0, 0x3, 0x2, 0x2, 0x2, 
       0xf2, 0x6af, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x6cb, 0x3, 0x2, 0x2, 0x2, 
       0xf6, 0x6cd, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x6d1, 0x3, 0x2, 0x2, 0x2, 
       0xfa, 0x6d3, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x6d6, 0x3, 0x2, 0x2, 0x2, 
       0xfe, 0x6da, 0x3, 0x2, 0x2, 0x2, 0x100, 0x6e6, 0x3, 0x2, 0x2, 0x2, 
       0x102, 0x6ed, 0x3, 0x2, 0x2, 0x2, 0x104, 0x6fd, 0x3, 0x2, 0x2, 0x2, 
       0x106, 0x713, 0x3, 0x2, 0x2, 0x2, 0x108, 0x715, 0x3, 0x2, 0x2, 0x2, 
       0x10a, 0x732, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x734, 0x3, 0x2, 0x2, 0x2, 
       0x10e, 0x75e, 0x3, 0x2, 0x2, 0x2, 0x110, 0x761, 0x3, 0x2, 0x2, 0x2, 
       0x112, 0x777, 0x3, 0x2, 0x2, 0x2, 0x114, 0x77e, 0x3, 0x2, 0x2, 0x2, 
       0x116, 0x783, 0x3, 0x2, 0x2, 0x2, 0x118, 0x787, 0x3, 0x2, 0x2, 0x2, 
       0x11a, 0x789, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x7a2, 0x3, 0x2, 0x2, 0x2, 
       0x11e, 0x7a6, 0x3, 0x2, 0x2, 0x2, 0x120, 0x7a8, 0x3, 0x2, 0x2, 0x2, 
       0x122, 0x7c1, 0x3, 0x2, 0x2, 0x2, 0x124, 0x7c4, 0x3, 0x2, 0x2, 0x2, 
       0x126, 0x7c8, 0x3, 0x2, 0x2, 0x2, 0x128, 0x7ca, 0x3, 0x2, 0x2, 0x2, 
       0x12a, 0x7d5, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x7e7, 0x3, 0x2, 0x2, 0x2, 
       0x12e, 0x7e9, 0x3, 0x2, 0x2, 0x2, 0x130, 0x807, 0x3, 0x2, 0x2, 0x2, 
       0x132, 0x809, 0x3, 0x2, 0x2, 0x2, 0x134, 0x813, 0x3, 0x2, 0x2, 0x2, 
       0x136, 0x815, 0x3, 0x2, 0x2, 0x2, 0x138, 0x819, 0x3, 0x2, 0x2, 0x2, 
       0x13a, 0x81c, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x841, 0x3, 0x2, 0x2, 0x2, 
       0x13e, 0x848, 0x3, 0x2, 0x2, 0x2, 0x140, 0x84a, 0x3, 0x2, 0x2, 0x2, 
       0x142, 0x84c, 0x3, 0x2, 0x2, 0x2, 0x144, 0x84e, 0x3, 0x2, 0x2, 0x2, 
       0x146, 0x851, 0x3, 0x2, 0x2, 0x2, 0x148, 0x855, 0x3, 0x2, 0x2, 0x2, 
       0x14a, 0x859, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x867, 0x3, 0x2, 0x2, 0x2, 
       0x14e, 0x873, 0x3, 0x2, 0x2, 0x2, 0x150, 0x877, 0x3, 0x2, 0x2, 0x2, 
       0x152, 0x879, 0x3, 0x2, 0x2, 0x2, 0x154, 0x881, 0x3, 0x2, 0x2, 0x2, 
       0x156, 0x883, 0x3, 0x2, 0x2, 0x2, 0x158, 0x88e, 0x3, 0x2, 0x2, 0x2, 
       0x15a, 0x892, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x8c4, 0x3, 0x2, 0x2, 0x2, 
       0x15e, 0x8c6, 0x3, 0x2, 0x2, 0x2, 0x160, 0x8dc, 0x3, 0x2, 0x2, 0x2, 
       0x162, 0x8de, 0x3, 0x2, 0x2, 0x2, 0x164, 0x8e0, 0x3, 0x2, 0x2, 0x2, 
       0x166, 0x8f3, 0x3, 0x2, 0x2, 0x2, 0x168, 0x900, 0x3, 0x2, 0x2, 0x2, 
       0x16a, 0x903, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x908, 0x3, 0x2, 0x2, 0x2, 
       0x16e, 0x90d, 0x3, 0x2, 0x2, 0x2, 0x170, 0x911, 0x3, 0x2, 0x2, 0x2, 
       0x172, 0x918, 0x3, 0x2, 0x2, 0x2, 0x174, 0x91c, 0x3, 0x2, 0x2, 0x2, 
       0x176, 0x930, 0x3, 0x2, 0x2, 0x2, 0x178, 0x932, 0x3, 0x2, 0x2, 0x2, 
       0x17a, 0x938, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x93a, 0x3, 0x2, 0x2, 0x2, 
       0x17e, 0x941, 0x3, 0x2, 0x2, 0x2, 0x180, 0x957, 0x3, 0x2, 0x2, 0x2, 
       0x182, 0x959, 0x3, 0x2, 0x2, 0x2, 0x184, 0x95c, 0x3, 0x2, 0x2, 0x2, 
       0x186, 0x990, 0x3, 0x2, 0x2, 0x2, 0x188, 0x999, 0x3, 0x2, 0x2, 0x2, 
       0x18a, 0x99b, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x99d, 0x3, 0x2, 0x2, 0x2, 
       0x18e, 0x99f, 0x3, 0x2, 0x2, 0x2, 0x190, 0x192, 0x5, 0x76, 0x3c, 
       0x2, 0x191, 0x190, 0x3, 0x2, 0x2, 0x2, 0x191, 0x192, 0x3, 0x2, 0x2, 
       0x2, 0x192, 0x193, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x7, 0x2, 0x2, 
       0x3, 0x194, 0x3, 0x3, 0x2, 0x2, 0x2, 0x195, 0x19e, 0x5, 0x188, 0xc5, 
       0x2, 0x196, 0x19e, 0x7, 0x40, 0x2, 0x2, 0x197, 0x198, 0x7, 0x50, 
       0x2, 0x2, 0x198, 0x199, 0x5, 0x58, 0x2d, 0x2, 0x199, 0x19a, 0x7, 
       0x51, 0x2, 0x2, 0x19a, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19e, 0x5, 
       0x6, 0x4, 0x2, 0x19c, 0x19e, 0x5, 0xe, 0x8, 0x2, 0x19d, 0x195, 0x3, 
       0x2, 0x2, 0x2, 0x19d, 0x196, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x197, 0x3, 
       0x2, 0x2, 0x2, 0x19d, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19c, 0x3, 
       0x2, 0x2, 0x2, 0x19e, 0x5, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a2, 0x5, 
       0x8, 0x5, 0x2, 0x1a0, 0x1a2, 0x5, 0xa, 0x6, 0x2, 0x1a1, 0x19f, 0x3, 
       0x2, 0x2, 0x2, 0x1a1, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x7, 0x3, 
       0x2, 0x2, 0x2, 0x1a3, 0x1ad, 0x7, 0x7f, 0x2, 0x2, 0x1a4, 0x1ad, 0x5, 
       0x152, 0xaa, 0x2, 0x1a5, 0x1ad, 0x5, 0x144, 0xa3, 0x2, 0x1a6, 0x1ad, 
       0x5, 0x154, 0xab, 0x2, 0x1a7, 0x1a8, 0x7, 0x5e, 0x2, 0x2, 0x1a8, 
       0x1ad, 0x5, 0x11e, 0x90, 0x2, 0x1a9, 0x1aa, 0x7, 0x5e, 0x2, 0x2, 
       0x1aa, 0x1ad, 0x5, 0x9c, 0x4f, 0x2, 0x1ab, 0x1ad, 0x5, 0x160, 0xb1, 
       0x2, 0x1ac, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1a4, 0x3, 0x2, 0x2, 
       0x2, 0x1ac, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1a6, 0x3, 0x2, 0x2, 
       0x2, 0x1ac, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1a9, 0x3, 0x2, 0x2, 
       0x2, 0x1ac, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x9, 0x3, 0x2, 0x2, 
       0x2, 0x1ae, 0x1b0, 0x5, 0xc, 0x7, 0x2, 0x1af, 0x1b1, 0x7, 0x3f, 0x2, 
       0x2, 0x1b0, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 0x3, 0x2, 0x2, 
       0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x5, 0x8, 0x5, 
       0x2, 0x1b3, 0xb, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x8, 0x7, 0x1, 
       0x2, 0x1b5, 0x1c0, 0x7, 0x7a, 0x2, 0x2, 0x1b6, 0x1b7, 0x5, 0x9a, 
       0x4e, 0x2, 0x1b7, 0x1b8, 0x7, 0x7a, 0x2, 0x2, 0x1b8, 0x1c0, 0x3, 
       0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x5, 0xb2, 0x5a, 0x2, 0x1ba, 0x1bb, 
       0x7, 0x7a, 0x2, 0x2, 0x1bb, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 
       0x5, 0x9c, 0x4f, 0x2, 0x1bd, 0x1be, 0x7, 0x7a, 0x2, 0x2, 0x1be, 0x1c0, 
       0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1b6, 
       0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1bc, 
       0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 
       0xc, 0x4, 0x2, 0x2, 0x1c2, 0x1c3, 0x7, 0x7f, 0x2, 0x2, 0x1c3, 0x1cc, 
       0x7, 0x7a, 0x2, 0x2, 0x1c4, 0x1c6, 0xc, 0x3, 0x2, 0x2, 0x1c5, 0x1c7, 
       0x7, 0x3f, 0x2, 0x2, 0x1c6, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c7, 
       0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 
       0x5, 0x15e, 0xb0, 0x2, 0x1c9, 0x1ca, 0x7, 0x7a, 0x2, 0x2, 0x1ca, 
       0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1cb, 
       0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1cd, 
       0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1ce, 
       0xd, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1d0, 
       0x1d2, 0x5, 0x10, 0x9, 0x2, 0x1d1, 0x1d3, 0x5, 0x1e, 0x10, 0x2, 0x1d2, 
       0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d3, 
       0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x5, 0x62, 0x32, 0x2, 0x1d5, 
       0xf, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d8, 0x7, 0x52, 0x2, 0x2, 0x1d7, 
       0x1d9, 0x5, 0x12, 0xa, 0x2, 0x1d8, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d8, 
       0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1da, 
       0x1db, 0x7, 0x53, 0x2, 0x2, 0x1db, 0x11, 0x3, 0x2, 0x2, 0x2, 0x1dc, 
       0x1e3, 0x5, 0x14, 0xb, 0x2, 0x1dd, 0x1e3, 0x5, 0x16, 0xc, 0x2, 0x1de, 
       0x1df, 0x5, 0x14, 0xb, 0x2, 0x1df, 0x1e0, 0x7, 0x75, 0x2, 0x2, 0x1e0, 
       0x1e1, 0x5, 0x16, 0xc, 0x2, 0x1e1, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e2, 
       0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1e2, 
       0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x13, 0x3, 0x2, 0x2, 0x2, 0x1e4, 
       0x1e5, 0x9, 0x2, 0x2, 0x2, 0x1e5, 0x15, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
       0x1e7, 0x8, 0xc, 0x1, 0x2, 0x1e7, 0x1e9, 0x5, 0x18, 0xd, 0x2, 0x1e8, 
       0x1ea, 0x7, 0x7e, 0x2, 0x2, 0x1e9, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e9, 
       0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1eb, 
       0x1ec, 0xc, 0x3, 0x2, 0x2, 0x1ec, 0x1ed, 0x7, 0x75, 0x2, 0x2, 0x1ed, 
       0x1ef, 0x5, 0x18, 0xd, 0x2, 0x1ee, 0x1f0, 0x7, 0x7e, 0x2, 0x2, 0x1ef, 
       0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f0, 
       0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1f2, 
       0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f3, 
       0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1f5, 
       0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f9, 0x5, 0x1a, 0xe, 0x2, 0x1f7, 
       0x1f9, 0x5, 0x1c, 0xf, 0x2, 0x1f8, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f8, 
       0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1fa, 
       0x1ff, 0x7, 0x7f, 0x2, 0x2, 0x1fb, 0x1fc, 0x7, 0x5c, 0x2, 0x2, 0x1fc, 
       0x1ff, 0x7, 0x7f, 0x2, 0x2, 0x1fd, 0x1ff, 0x7, 0x40, 0x2, 0x2, 0x1fe, 
       0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fe, 
       0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x200, 
       0x201, 0x7, 0x7f, 0x2, 0x2, 0x201, 0x206, 0x5, 0x114, 0x8b, 0x2, 
       0x202, 0x203, 0x7, 0x5c, 0x2, 0x2, 0x203, 0x204, 0x7, 0x7f, 0x2, 
       0x2, 0x204, 0x206, 0x5, 0x114, 0x8b, 0x2, 0x205, 0x200, 0x3, 0x2, 
       0x2, 0x2, 0x205, 0x202, 0x3, 0x2, 0x2, 0x2, 0x206, 0x1d, 0x3, 0x2, 
       0x2, 0x2, 0x207, 0x208, 0x7, 0x50, 0x2, 0x2, 0x208, 0x209, 0x5, 0x10a, 
       0x86, 0x2, 0x209, 0x20b, 0x7, 0x51, 0x2, 0x2, 0x20a, 0x20c, 0x7, 
       0x2a, 0x2, 0x2, 0x20b, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x3, 
       0x2, 0x2, 0x2, 0x20c, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20f, 0x5, 
       0x17a, 0xbe, 0x2, 0x20e, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x20f, 
       0x3, 0x2, 0x2, 0x2, 0x20f, 0x211, 0x3, 0x2, 0x2, 0x2, 0x210, 0x212, 
       0x5, 0xd0, 0x69, 0x2, 0x211, 0x210, 0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 
       0x3, 0x2, 0x2, 0x2, 0x212, 0x214, 0x3, 0x2, 0x2, 0x2, 0x213, 0x215, 
       0x5, 0xf2, 0x7a, 0x2, 0x214, 0x213, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 
       0x3, 0x2, 0x2, 0x2, 0x215, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 
       0x8, 0x11, 0x1, 0x2, 0x217, 0x257, 0x5, 0x4, 0x3, 0x2, 0x218, 0x219, 
       0x5, 0x98, 0x4d, 0x2, 0x219, 0x21b, 0x7, 0x50, 0x2, 0x2, 0x21a, 0x21c, 
       0x5, 0x22, 0x12, 0x2, 0x21b, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21c, 
       0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 
       0x7, 0x51, 0x2, 0x2, 0x21e, 0x257, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 
       0x5, 0x168, 0xb5, 0x2, 0x220, 0x222, 0x7, 0x50, 0x2, 0x2, 0x221, 
       0x223, 0x5, 0x22, 0x12, 0x2, 0x222, 0x221, 0x3, 0x2, 0x2, 0x2, 0x222, 
       0x223, 0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 0x3, 0x2, 0x2, 0x2, 0x224, 
       0x225, 0x7, 0x51, 0x2, 0x2, 0x225, 0x257, 0x3, 0x2, 0x2, 0x2, 0x226, 
       0x227, 0x5, 0x98, 0x4d, 0x2, 0x227, 0x228, 0x5, 0x11c, 0x8f, 0x2, 
       0x228, 0x257, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 0x5, 0x168, 0xb5, 
       0x2, 0x22a, 0x22b, 0x5, 0x11c, 0x8f, 0x2, 0x22b, 0x257, 0x3, 0x2, 
       0x2, 0x2, 0x22c, 0x22d, 0x7, 0x1a, 0x2, 0x2, 0x22d, 0x22e, 0x7, 0x61, 
       0x2, 0x2, 0x22e, 0x22f, 0x5, 0xfe, 0x80, 0x2, 0x22f, 0x230, 0x7, 
       0x62, 0x2, 0x2, 0x230, 0x231, 0x7, 0x50, 0x2, 0x2, 0x231, 0x232, 
       0x5, 0x58, 0x2d, 0x2, 0x232, 0x233, 0x7, 0x51, 0x2, 0x2, 0x233, 0x257, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 0x7, 0x3c, 0x2, 0x2, 0x235, 0x236, 
       0x7, 0x61, 0x2, 0x2, 0x236, 0x237, 0x5, 0xfe, 0x80, 0x2, 0x237, 0x238, 
       0x7, 0x62, 0x2, 0x2, 0x238, 0x239, 0x7, 0x50, 0x2, 0x2, 0x239, 0x23a, 
       0x5, 0x58, 0x2d, 0x2, 0x23a, 0x23b, 0x7, 0x51, 0x2, 0x2, 0x23b, 0x257, 
       0x3, 0x2, 0x2, 0x2, 0x23c, 0x23d, 0x7, 0x35, 0x2, 0x2, 0x23d, 0x23e, 
       0x7, 0x61, 0x2, 0x2, 0x23e, 0x23f, 0x5, 0xfe, 0x80, 0x2, 0x23f, 0x240, 
       0x7, 0x62, 0x2, 0x2, 0x240, 0x241, 0x7, 0x50, 0x2, 0x2, 0x241, 0x242, 
       0x5, 0x58, 0x2d, 0x2, 0x242, 0x243, 0x7, 0x51, 0x2, 0x2, 0x243, 0x257, 
       0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x7, 0x13, 0x2, 0x2, 0x245, 0x246, 
       0x7, 0x61, 0x2, 0x2, 0x246, 0x247, 0x5, 0xfe, 0x80, 0x2, 0x247, 0x248, 
       0x7, 0x62, 0x2, 0x2, 0x248, 0x249, 0x7, 0x50, 0x2, 0x2, 0x249, 0x24a, 
       0x5, 0x58, 0x2d, 0x2, 0x24a, 0x24b, 0x7, 0x51, 0x2, 0x2, 0x24b, 0x257, 
       0x3, 0x2, 0x2, 0x2, 0x24c, 0x24d, 0x7, 0x46, 0x2, 0x2, 0x24d, 0x24e, 
       0x7, 0x50, 0x2, 0x2, 0x24e, 0x24f, 0x5, 0x58, 0x2d, 0x2, 0x24f, 0x250, 
       0x7, 0x51, 0x2, 0x2, 0x250, 0x257, 0x3, 0x2, 0x2, 0x2, 0x251, 0x252, 
       0x7, 0x46, 0x2, 0x2, 0x252, 0x253, 0x7, 0x50, 0x2, 0x2, 0x253, 0x254, 
       0x5, 0xfe, 0x80, 0x2, 0x254, 0x255, 0x7, 0x51, 0x2, 0x2, 0x255, 0x257, 
       0x3, 0x2, 0x2, 0x2, 0x256, 0x216, 0x3, 0x2, 0x2, 0x2, 0x256, 0x218, 
       0x3, 0x2, 0x2, 0x2, 0x256, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x256, 0x226, 
       0x3, 0x2, 0x2, 0x2, 0x256, 0x229, 0x3, 0x2, 0x2, 0x2, 0x256, 0x22c, 
       0x3, 0x2, 0x2, 0x2, 0x256, 0x234, 0x3, 0x2, 0x2, 0x2, 0x256, 0x23c, 
       0x3, 0x2, 0x2, 0x2, 0x256, 0x244, 0x3, 0x2, 0x2, 0x2, 0x256, 0x24c, 
       0x3, 0x2, 0x2, 0x2, 0x256, 0x251, 0x3, 0x2, 0x2, 0x2, 0x257, 0x280, 
       0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 0xc, 0x15, 0x2, 0x2, 0x259, 0x25a, 
       0x7, 0x52, 0x2, 0x2, 0x25a, 0x25b, 0x5, 0x58, 0x2d, 0x2, 0x25b, 0x25c, 
       0x7, 0x53, 0x2, 0x2, 0x25c, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25e, 
       0xc, 0x14, 0x2, 0x2, 0x25e, 0x25f, 0x7, 0x52, 0x2, 0x2, 0x25f, 0x260, 
       0x5, 0x11c, 0x8f, 0x2, 0x260, 0x261, 0x7, 0x53, 0x2, 0x2, 0x261, 
       0x27f, 0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 0xc, 0x13, 0x2, 0x2, 0x263, 
       0x265, 0x7, 0x50, 0x2, 0x2, 0x264, 0x266, 0x5, 0x22, 0x12, 0x2, 0x265, 
       0x264, 0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 0x3, 0x2, 0x2, 0x2, 0x266, 
       0x267, 0x3, 0x2, 0x2, 0x2, 0x267, 0x27f, 0x7, 0x51, 0x2, 0x2, 0x268, 
       0x269, 0xc, 0xe, 0x2, 0x2, 0x269, 0x26b, 0x7, 0x7c, 0x2, 0x2, 0x26a, 
       0x26c, 0x7, 0x3f, 0x2, 0x2, 0x26b, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26b, 
       0x26c, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x26d, 
       0x27f, 0x5, 0x6, 0x4, 0x2, 0x26e, 0x26f, 0xc, 0xd, 0x2, 0x2, 0x26f, 
       0x271, 0x7, 0x77, 0x2, 0x2, 0x270, 0x272, 0x7, 0x3f, 0x2, 0x2, 0x271, 
       0x270, 0x3, 0x2, 0x2, 0x2, 0x271, 0x272, 0x3, 0x2, 0x2, 0x2, 0x272, 
       0x273, 0x3, 0x2, 0x2, 0x2, 0x273, 0x27f, 0x5, 0x6, 0x4, 0x2, 0x274, 
       0x275, 0xc, 0xc, 0x2, 0x2, 0x275, 0x276, 0x7, 0x7c, 0x2, 0x2, 0x276, 
       0x27f, 0x5, 0x24, 0x13, 0x2, 0x277, 0x278, 0xc, 0xb, 0x2, 0x2, 0x278, 
       0x279, 0x7, 0x77, 0x2, 0x2, 0x279, 0x27f, 0x5, 0x24, 0x13, 0x2, 0x27a, 
       0x27b, 0xc, 0xa, 0x2, 0x2, 0x27b, 0x27f, 0x7, 0x73, 0x2, 0x2, 0x27c, 
       0x27d, 0xc, 0x9, 0x2, 0x2, 0x27d, 0x27f, 0x7, 0x74, 0x2, 0x2, 0x27e, 
       0x258, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x27e, 
       0x262, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x268, 0x3, 0x2, 0x2, 0x2, 0x27e, 
       0x26e, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x274, 0x3, 0x2, 0x2, 0x2, 0x27e, 
       0x277, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x27e, 
       0x27c, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x282, 0x3, 0x2, 0x2, 0x2, 0x280, 
       0x27e, 0x3, 0x2, 0x2, 0x2, 0x280, 0x281, 0x3, 0x2, 0x2, 0x2, 0x281, 
       0x21, 0x3, 0x2, 0x2, 0x2, 0x282, 0x280, 0x3, 0x2, 0x2, 0x2, 0x283, 
       0x284, 0x5, 0x11a, 0x8e, 0x2, 0x284, 0x23, 0x3, 0x2, 0x2, 0x2, 0x285, 
       0x287, 0x5, 0xc, 0x7, 0x2, 0x286, 0x285, 0x3, 0x2, 0x2, 0x2, 0x286, 
       0x287, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x3, 0x2, 0x2, 0x2, 0x288, 
       0x289, 0x5, 0x9a, 0x4e, 0x2, 0x289, 0x28a, 0x7, 0x7a, 0x2, 0x2, 0x28a, 
       0x28b, 0x7, 0x5e, 0x2, 0x2, 0x28b, 0x28c, 0x5, 0x9a, 0x4e, 0x2, 0x28c, 
       0x29c, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28e, 0x5, 0xc, 0x7, 0x2, 0x28e, 
       0x28f, 0x7, 0x3f, 0x2, 0x2, 0x28f, 0x290, 0x5, 0x15e, 0xb0, 0x2, 
       0x290, 0x291, 0x7, 0x7a, 0x2, 0x2, 0x291, 0x292, 0x7, 0x5e, 0x2, 
       0x2, 0x292, 0x293, 0x5, 0x9a, 0x4e, 0x2, 0x293, 0x29c, 0x3, 0x2, 
       0x2, 0x2, 0x294, 0x296, 0x5, 0xc, 0x7, 0x2, 0x295, 0x294, 0x3, 0x2, 
       0x2, 0x2, 0x295, 0x296, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 0x3, 0x2, 
       0x2, 0x2, 0x297, 0x298, 0x7, 0x5e, 0x2, 0x2, 0x298, 0x29c, 0x5, 0x9a, 
       0x4e, 0x2, 0x299, 0x29a, 0x7, 0x5e, 0x2, 0x2, 0x29a, 0x29c, 0x5, 
       0x9c, 0x4f, 0x2, 0x29b, 0x286, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x28d, 
       0x3, 0x2, 0x2, 0x2, 0x29b, 0x295, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x299, 
       0x3, 0x2, 0x2, 0x2, 0x29c, 0x25, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x2ba, 
       0x5, 0x20, 0x11, 0x2, 0x29e, 0x29f, 0x7, 0x73, 0x2, 0x2, 0x29f, 0x2ba, 
       0x5, 0x3a, 0x1e, 0x2, 0x2a0, 0x2a1, 0x7, 0x74, 0x2, 0x2, 0x2a1, 0x2ba, 
       0x5, 0x3a, 0x1e, 0x2, 0x2a2, 0x2a3, 0x5, 0x28, 0x15, 0x2, 0x2a3, 
       0x2a4, 0x5, 0x3a, 0x1e, 0x2, 0x2a4, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2a5, 
       0x2a6, 0x7, 0x39, 0x2, 0x2, 0x2a6, 0x2ba, 0x5, 0x26, 0x14, 0x2, 0x2a7, 
       0x2a8, 0x7, 0x39, 0x2, 0x2, 0x2a8, 0x2a9, 0x7, 0x50, 0x2, 0x2, 0x2a9, 
       0x2aa, 0x5, 0xfe, 0x80, 0x2, 0x2aa, 0x2ab, 0x7, 0x51, 0x2, 0x2, 0x2ab, 
       0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 0x7, 0x39, 0x2, 0x2, 0x2ad, 
       0x2ae, 0x7, 0x7e, 0x2, 0x2, 0x2ae, 0x2af, 0x7, 0x50, 0x2, 0x2, 0x2af, 
       0x2b0, 0x7, 0x7f, 0x2, 0x2, 0x2b0, 0x2ba, 0x7, 0x51, 0x2, 0x2, 0x2b1, 
       0x2b2, 0x7, 0x6, 0x2, 0x2, 0x2b2, 0x2b3, 0x7, 0x50, 0x2, 0x2, 0x2b3, 
       0x2b4, 0x5, 0xfe, 0x80, 0x2, 0x2b4, 0x2b5, 0x7, 0x51, 0x2, 0x2, 0x2b5, 
       0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2ba, 0x5, 0x38, 0x1d, 0x2, 0x2b7, 
       0x2ba, 0x5, 0x2a, 0x16, 0x2, 0x2b8, 0x2ba, 0x5, 0x36, 0x1c, 0x2, 
       0x2b9, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x29e, 0x3, 0x2, 0x2, 0x2, 
       0x2b9, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2a2, 0x3, 0x2, 0x2, 0x2, 
       0x2b9, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2a7, 0x3, 0x2, 0x2, 0x2, 
       0x2b9, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2b1, 0x3, 0x2, 0x2, 0x2, 
       0x2b9, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2b7, 0x3, 0x2, 0x2, 0x2, 
       0x2b9, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x27, 0x3, 0x2, 0x2, 0x2, 
       0x2bb, 0x2bc, 0x9, 0x3, 0x2, 0x2, 0x2bc, 0x29, 0x3, 0x2, 0x2, 0x2, 
       0x2bd, 0x2bf, 0x7, 0x7a, 0x2, 0x2, 0x2be, 0x2bd, 0x3, 0x2, 0x2, 0x2, 
       0x2be, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c0, 0x3, 0x2, 0x2, 0x2, 
       0x2c0, 0x2c2, 0x7, 0x2c, 0x2, 0x2, 0x2c1, 0x2c3, 0x5, 0x2c, 0x17, 
       0x2, 0x2c2, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c3, 0x3, 0x2, 0x2, 
       0x2, 0x2c3, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c6, 0x5, 0x2e, 0x18, 
       0x2, 0x2c5, 0x2c7, 0x5, 0x34, 0x1b, 0x2, 0x2c6, 0x2c5, 0x3, 0x2, 
       0x2, 0x2, 0x2c6, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2d6, 0x3, 0x2, 
       0x2, 0x2, 0x2c8, 0x2ca, 0x7, 0x7a, 0x2, 0x2, 0x2c9, 0x2c8, 0x3, 0x2, 
       0x2, 0x2, 0x2c9, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cb, 0x3, 0x2, 
       0x2, 0x2, 0x2cb, 0x2cd, 0x7, 0x2c, 0x2, 0x2, 0x2cc, 0x2ce, 0x5, 0x2c, 
       0x17, 0x2, 0x2cd, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2ce, 0x3, 0x2, 
       0x2, 0x2, 0x2ce, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d0, 0x7, 0x50, 
       0x2, 0x2, 0x2d0, 0x2d1, 0x5, 0xfe, 0x80, 0x2, 0x2d1, 0x2d3, 0x7, 
       0x51, 0x2, 0x2, 0x2d2, 0x2d4, 0x5, 0x34, 0x1b, 0x2, 0x2d3, 0x2d2, 
       0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d6, 
       0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2c9, 
       0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d8, 
       0x7, 0x50, 0x2, 0x2, 0x2d8, 0x2d9, 0x5, 0x22, 0x12, 0x2, 0x2d9, 0x2da, 
       0x7, 0x51, 0x2, 0x2, 0x2da, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2dd, 
       0x5, 0x94, 0x4b, 0x2, 0x2dc, 0x2de, 0x5, 0x30, 0x19, 0x2, 0x2dd, 
       0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2de, 
       0x2f, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2e1, 0x5, 0xf4, 0x7b, 0x2, 0x2e0, 
       0x2e2, 0x5, 0x30, 0x19, 0x2, 0x2e1, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2e1, 
       0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e3, 
       0x2e5, 0x5, 0x32, 0x1a, 0x2, 0x2e4, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2e4, 
       0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2e6, 
       0x2e7, 0x8, 0x1a, 0x1, 0x2, 0x2e7, 0x2e8, 0x7, 0x52, 0x2, 0x2, 0x2e8, 
       0x2e9, 0x5, 0x58, 0x2d, 0x2, 0x2e9, 0x2eb, 0x7, 0x53, 0x2, 0x2, 0x2ea, 
       0x2ec, 0x5, 0xd0, 0x69, 0x2, 0x2eb, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2eb, 
       0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2ed, 
       0x2ee, 0xc, 0x3, 0x2, 0x2, 0x2ee, 0x2ef, 0x7, 0x52, 0x2, 0x2, 0x2ef, 
       0x2f0, 0x5, 0x5a, 0x2e, 0x2, 0x2f0, 0x2f2, 0x7, 0x53, 0x2, 0x2, 0x2f1, 
       0x2f3, 0x5, 0xd0, 0x69, 0x2, 0x2f2, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0x2f2, 
       0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f4, 
       0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2f6, 
       0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f7, 
       0x33, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f9, 
       0x2fb, 0x7, 0x50, 0x2, 0x2, 0x2fa, 0x2fc, 0x5, 0x22, 0x12, 0x2, 0x2fb, 
       0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2fc, 
       0x2fd, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x300, 0x7, 0x51, 0x2, 0x2, 0x2fe, 
       0x300, 0x5, 0x11c, 0x8f, 0x2, 0x2ff, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x2ff, 
       0x2fe, 0x3, 0x2, 0x2, 0x2, 0x300, 0x35, 0x3, 0x2, 0x2, 0x2, 0x301, 
       0x303, 0x7, 0x7a, 0x2, 0x2, 0x302, 0x301, 0x3, 0x2, 0x2, 0x2, 0x302, 
       0x303, 0x3, 0x2, 0x2, 0x2, 0x303, 0x304, 0x3, 0x2, 0x2, 0x2, 0x304, 
       0x305, 0x7, 0x17, 0x2, 0x2, 0x305, 0x30e, 0x5, 0x3a, 0x1e, 0x2, 0x306, 
       0x308, 0x7, 0x7a, 0x2, 0x2, 0x307, 0x306, 0x3, 0x2, 0x2, 0x2, 0x307, 
       0x308, 0x3, 0x2, 0x2, 0x2, 0x308, 0x309, 0x3, 0x2, 0x2, 0x2, 0x309, 
       0x30a, 0x7, 0x17, 0x2, 0x2, 0x30a, 0x30b, 0x7, 0x52, 0x2, 0x2, 0x30b, 
       0x30c, 0x7, 0x53, 0x2, 0x2, 0x30c, 0x30e, 0x5, 0x3a, 0x1e, 0x2, 0x30d, 
       0x302, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x307, 0x3, 0x2, 0x2, 0x2, 0x30e, 
       0x37, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x310, 0x7, 0x2d, 0x2, 0x2, 0x310, 
       0x311, 0x7, 0x50, 0x2, 0x2, 0x311, 0x312, 0x5, 0x58, 0x2d, 0x2, 0x312, 
       0x313, 0x7, 0x51, 0x2, 0x2, 0x313, 0x39, 0x3, 0x2, 0x2, 0x2, 0x314, 
       0x31b, 0x5, 0x26, 0x14, 0x2, 0x315, 0x316, 0x7, 0x50, 0x2, 0x2, 0x316, 
       0x317, 0x5, 0xfe, 0x80, 0x2, 0x317, 0x318, 0x7, 0x51, 0x2, 0x2, 0x318, 
       0x319, 0x5, 0x3a, 0x1e, 0x2, 0x319, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x31a, 
       0x314, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x315, 0x3, 0x2, 0x2, 0x2, 0x31b, 
       0x3b, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x31d, 0x8, 0x1f, 0x1, 0x2, 0x31d, 
       0x31e, 0x5, 0x3a, 0x1e, 0x2, 0x31e, 0x327, 0x3, 0x2, 0x2, 0x2, 0x31f, 
       0x320, 0xc, 0x4, 0x2, 0x2, 0x320, 0x321, 0x7, 0x7d, 0x2, 0x2, 0x321, 
       0x326, 0x5, 0x3a, 0x1e, 0x2, 0x322, 0x323, 0xc, 0x3, 0x2, 0x2, 0x323, 
       0x324, 0x7, 0x76, 0x2, 0x2, 0x324, 0x326, 0x5, 0x3a, 0x1e, 0x2, 0x325, 
       0x31f, 0x3, 0x2, 0x2, 0x2, 0x325, 0x322, 0x3, 0x2, 0x2, 0x2, 0x326, 
       0x329, 0x3, 0x2, 0x2, 0x2, 0x327, 0x325, 0x3, 0x2, 0x2, 0x2, 0x327, 
       0x328, 0x3, 0x2, 0x2, 0x2, 0x328, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x329, 
       0x327, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32b, 0x8, 0x20, 0x1, 0x2, 0x32b, 
       0x32c, 0x5, 0x3c, 0x1f, 0x2, 0x32c, 0x338, 0x3, 0x2, 0x2, 0x2, 0x32d, 
       0x32e, 0xc, 0x5, 0x2, 0x2, 0x32e, 0x32f, 0x7, 0x58, 0x2, 0x2, 0x32f, 
       0x337, 0x5, 0x3c, 0x1f, 0x2, 0x330, 0x331, 0xc, 0x4, 0x2, 0x2, 0x331, 
       0x332, 0x7, 0x59, 0x2, 0x2, 0x332, 0x337, 0x5, 0x3c, 0x1f, 0x2, 0x333, 
       0x334, 0xc, 0x3, 0x2, 0x2, 0x334, 0x335, 0x7, 0x5a, 0x2, 0x2, 0x335, 
       0x337, 0x5, 0x3c, 0x1f, 0x2, 0x336, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x336, 
       0x330, 0x3, 0x2, 0x2, 0x2, 0x336, 0x333, 0x3, 0x2, 0x2, 0x2, 0x337, 
       0x33a, 0x3, 0x2, 0x2, 0x2, 0x338, 0x336, 0x3, 0x2, 0x2, 0x2, 0x338, 
       0x339, 0x3, 0x2, 0x2, 0x2, 0x339, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x33a, 
       0x338, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x33c, 0x8, 0x21, 0x1, 0x2, 0x33c, 
       0x33d, 0x5, 0x3e, 0x20, 0x2, 0x33d, 0x346, 0x3, 0x2, 0x2, 0x2, 0x33e, 
       0x33f, 0xc, 0x4, 0x2, 0x2, 0x33f, 0x340, 0x7, 0x56, 0x2, 0x2, 0x340, 
       0x345, 0x5, 0x3e, 0x20, 0x2, 0x341, 0x342, 0xc, 0x3, 0x2, 0x2, 0x342, 
       0x343, 0x7, 0x57, 0x2, 0x2, 0x343, 0x345, 0x5, 0x3e, 0x20, 0x2, 0x344, 
       0x33e, 0x3, 0x2, 0x2, 0x2, 0x344, 0x341, 0x3, 0x2, 0x2, 0x2, 0x345, 
       0x348, 0x3, 0x2, 0x2, 0x2, 0x346, 0x344, 0x3, 0x2, 0x2, 0x2, 0x346, 
       0x347, 0x3, 0x2, 0x2, 0x2, 0x347, 0x41, 0x3, 0x2, 0x2, 0x2, 0x348, 
       0x346, 0x3, 0x2, 0x2, 0x2, 0x349, 0x34a, 0x8, 0x22, 0x1, 0x2, 0x34a, 
       0x34b, 0x5, 0x40, 0x21, 0x2, 0x34b, 0x355, 0x3, 0x2, 0x2, 0x2, 0x34c, 
       0x34d, 0xc, 0x4, 0x2, 0x2, 0x34d, 0x34e, 0x7, 0x6b, 0x2, 0x2, 0x34e, 
       0x354, 0x5, 0x40, 0x21, 0x2, 0x34f, 0x350, 0xc, 0x3, 0x2, 0x2, 0x350, 
       0x351, 0x5, 0x182, 0xc2, 0x2, 0x351, 0x352, 0x5, 0x40, 0x21, 0x2, 
       0x352, 0x354, 0x3, 0x2, 0x2, 0x2, 0x353, 0x34c, 0x3, 0x2, 0x2, 0x2, 
       0x353, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x354, 0x357, 0x3, 0x2, 0x2, 0x2, 
       0x355, 0x353, 0x3, 0x2, 0x2, 0x2, 0x355, 0x356, 0x3, 0x2, 0x2, 0x2, 
       0x356, 0x43, 0x3, 0x2, 0x2, 0x2, 0x357, 0x355, 0x3, 0x2, 0x2, 0x2, 
       0x358, 0x359, 0x8, 0x23, 0x1, 0x2, 0x359, 0x35a, 0x5, 0x42, 0x22, 
       0x2, 0x35a, 0x369, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x35c, 0xc, 0x6, 0x2, 
       0x2, 0x35c, 0x35d, 0x7, 0x61, 0x2, 0x2, 0x35d, 0x368, 0x5, 0x42, 
       0x22, 0x2, 0x35e, 0x35f, 0xc, 0x5, 0x2, 0x2, 0x35f, 0x360, 0x7, 0x62, 
       0x2, 0x2, 0x360, 0x368, 0x5, 0x42, 0x22, 0x2, 0x361, 0x362, 0xc, 
       0x4, 0x2, 0x2, 0x362, 0x363, 0x7, 0x6f, 0x2, 0x2, 0x363, 0x368, 0x5, 
       0x42, 0x22, 0x2, 0x364, 0x365, 0xc, 0x3, 0x2, 0x2, 0x365, 0x366, 
       0x7, 0x70, 0x2, 0x2, 0x366, 0x368, 0x5, 0x42, 0x22, 0x2, 0x367, 0x35b, 
       0x3, 0x2, 0x2, 0x2, 0x367, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x367, 0x361, 
       0x3, 0x2, 0x2, 0x2, 0x367, 0x364, 0x3, 0x2, 0x2, 0x2, 0x368, 0x36b, 
       0x3, 0x2, 0x2, 0x2, 0x369, 0x367, 0x3, 0x2, 0x2, 0x2, 0x369, 0x36a, 
       0x3, 0x2, 0x2, 0x2, 0x36a, 0x45, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x369, 
       0x3, 0x2, 0x2, 0x2, 0x36c, 0x36d, 0x8, 0x24, 0x1, 0x2, 0x36d, 0x36e, 
       0x5, 0x44, 0x23, 0x2, 0x36e, 0x377, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x370, 
       0xc, 0x4, 0x2, 0x2, 0x370, 0x371, 0x7, 0x6d, 0x2, 0x2, 0x371, 0x376, 
       0x5, 0x44, 0x23, 0x2, 0x372, 0x373, 0xc, 0x3, 0x2, 0x2, 0x373, 0x374, 
       0x7, 0x6e, 0x2, 0x2, 0x374, 0x376, 0x5, 0x44, 0x23, 0x2, 0x375, 0x36f, 
       0x3, 0x2, 0x2, 0x2, 0x375, 0x372, 0x3, 0x2, 0x2, 0x2, 0x376, 0x379, 
       0x3, 0x2, 0x2, 0x2, 0x377, 0x375, 0x3, 0x2, 0x2, 0x2, 0x377, 0x378, 
       0x3, 0x2, 0x2, 0x2, 0x378, 0x47, 0x3, 0x2, 0x2, 0x2, 0x379, 0x377, 
       0x3, 0x2, 0x2, 0x2, 0x37a, 0x37b, 0x8, 0x25, 0x1, 0x2, 0x37b, 0x37c, 
       0x5, 0x46, 0x24, 0x2, 0x37c, 0x382, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x37e, 
       0xc, 0x3, 0x2, 0x2, 0x37e, 0x37f, 0x7, 0x5c, 0x2, 0x2, 0x37f, 0x381, 
       0x5, 0x46, 0x24, 0x2, 0x380, 0x37d, 0x3, 0x2, 0x2, 0x2, 0x381, 0x384, 
       0x3, 0x2, 0x2, 0x2, 0x382, 0x380, 0x3, 0x2, 0x2, 0x2, 0x382, 0x383, 
       0x3, 0x2, 0x2, 0x2, 0x383, 0x49, 0x3, 0x2, 0x2, 0x2, 0x384, 0x382, 
       0x3, 0x2, 0x2, 0x2, 0x385, 0x386, 0x8, 0x26, 0x1, 0x2, 0x386, 0x387, 
       0x5, 0x48, 0x25, 0x2, 0x387, 0x38d, 0x3, 0x2, 0x2, 0x2, 0x388, 0x389, 
       0xc, 0x3, 0x2, 0x2, 0x389, 0x38a, 0x7, 0x5b, 0x2, 0x2, 0x38a, 0x38c, 
       0x5, 0x48, 0x25, 0x2, 0x38b, 0x388, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x38f, 
       0x3, 0x2, 0x2, 0x2, 0x38d, 0x38b, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x38e, 
       0x3, 0x2, 0x2, 0x2, 0x38e, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x38f, 0x38d, 
       0x3, 0x2, 0x2, 0x2, 0x390, 0x391, 0x8, 0x27, 0x1, 0x2, 0x391, 0x392, 
       0x5, 0x4a, 0x26, 0x2, 0x392, 0x398, 0x3, 0x2, 0x2, 0x2, 0x393, 0x394, 
       0xc, 0x3, 0x2, 0x2, 0x394, 0x395, 0x7, 0x5d, 0x2, 0x2, 0x395, 0x397, 
       0x5, 0x4a, 0x26, 0x2, 0x396, 0x393, 0x3, 0x2, 0x2, 0x2, 0x397, 0x39a, 
       0x3, 0x2, 0x2, 0x2, 0x398, 0x396, 0x3, 0x2, 0x2, 0x2, 0x398, 0x399, 
       0x3, 0x2, 0x2, 0x2, 0x399, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x398, 
       0x3, 0x2, 0x2, 0x2, 0x39b, 0x39c, 0x8, 0x28, 0x1, 0x2, 0x39c, 0x39d, 
       0x5, 0x4c, 0x27, 0x2, 0x39d, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x39f, 
       0xc, 0x3, 0x2, 0x2, 0x39f, 0x3a0, 0x7, 0x71, 0x2, 0x2, 0x3a0, 0x3a2, 
       0x5, 0x4c, 0x27, 0x2, 0x3a1, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a5, 
       0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a4, 
       0x3, 0x2, 0x2, 0x2, 0x3a4, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x3a3, 
       0x3, 0x2, 0x2, 0x2, 0x3a6, 0x3a7, 0x8, 0x29, 0x1, 0x2, 0x3a7, 0x3a8, 
       0x5, 0x4e, 0x28, 0x2, 0x3a8, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3aa, 
       0xc, 0x3, 0x2, 0x2, 0x3aa, 0x3ab, 0x7, 0x72, 0x2, 0x2, 0x3ab, 0x3ad, 
       0x5, 0x4e, 0x28, 0x2, 0x3ac, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3b0, 
       0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3af, 
       0x3, 0x2, 0x2, 0x2, 0x3af, 0x51, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3ae, 
       0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b9, 0x5, 0x50, 0x29, 0x2, 0x3b2, 0x3b3, 
       0x5, 0x50, 0x29, 0x2, 0x3b3, 0x3b4, 0x7, 0x78, 0x2, 0x2, 0x3b4, 0x3b5, 
       0x5, 0x58, 0x2d, 0x2, 0x3b5, 0x3b6, 0x7, 0x79, 0x2, 0x2, 0x3b6, 0x3b7, 
       0x5, 0x54, 0x2b, 0x2, 0x3b7, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3b1, 
       0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x53, 
       0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3c1, 0x5, 0x52, 0x2a, 0x2, 0x3bb, 0x3bc, 
       0x5, 0x50, 0x29, 0x2, 0x3bc, 0x3bd, 0x5, 0x56, 0x2c, 0x2, 0x3bd, 
       0x3be, 0x5, 0x118, 0x8d, 0x2, 0x3be, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0x3bf, 
       0x3c1, 0x5, 0x178, 0xbd, 0x2, 0x3c0, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3c0, 
       0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3c1, 
       0x55, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3ce, 0x7, 0x60, 0x2, 0x2, 0x3c3, 
       0x3ce, 0x7, 0x65, 0x2, 0x2, 0x3c4, 0x3ce, 0x7, 0x66, 0x2, 0x2, 0x3c5, 
       0x3ce, 0x7, 0x67, 0x2, 0x2, 0x3c6, 0x3ce, 0x7, 0x63, 0x2, 0x2, 0x3c7, 
       0x3ce, 0x7, 0x64, 0x2, 0x2, 0x3c8, 0x3ce, 0x5, 0x184, 0xc3, 0x2, 
       0x3c9, 0x3ce, 0x7, 0x6c, 0x2, 0x2, 0x3ca, 0x3ce, 0x7, 0x69, 0x2, 
       0x2, 0x3cb, 0x3ce, 0x7, 0x68, 0x2, 0x2, 0x3cc, 0x3ce, 0x7, 0x6a, 
       0x2, 0x2, 0x3cd, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3c3, 0x3, 0x2, 
       0x2, 0x2, 0x3cd, 0x3c4, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3c5, 0x3, 0x2, 
       0x2, 0x2, 0x3cd, 0x3c6, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3c7, 0x3, 0x2, 
       0x2, 0x2, 0x3cd, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3c9, 0x3, 0x2, 
       0x2, 0x2, 0x3cd, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3cb, 0x3, 0x2, 
       0x2, 0x2, 0x3cd, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3ce, 0x57, 0x3, 0x2, 
       0x2, 0x2, 0x3cf, 0x3d0, 0x8, 0x2d, 0x1, 0x2, 0x3d0, 0x3d1, 0x5, 0x54, 
       0x2b, 0x2, 0x3d1, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d3, 0xc, 0x3, 
       0x2, 0x2, 0x3d3, 0x3d4, 0x7, 0x75, 0x2, 0x2, 0x3d4, 0x3d6, 0x5, 0x54, 
       0x2b, 0x2, 0x3d5, 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d9, 0x3, 0x2, 
       0x2, 0x2, 0x3d7, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d8, 0x3, 0x2, 
       0x2, 0x2, 0x3d8, 0x59, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3d7, 0x3, 0x2, 
       0x2, 0x2, 0x3da, 0x3db, 0x5, 0x52, 0x2a, 0x2, 0x3db, 0x5b, 0x3, 0x2, 
       0x2, 0x2, 0x3dc, 0x3f7, 0x5, 0x5e, 0x30, 0x2, 0x3dd, 0x3df, 0x5, 
       0xd0, 0x69, 0x2, 0x3de, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3df, 
       0x3, 0x2, 0x2, 0x2, 0x3df, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3f7, 
       0x5, 0x60, 0x31, 0x2, 0x3e1, 0x3e3, 0x5, 0xd0, 0x69, 0x2, 0x3e2, 
       0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e3, 
       0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3f7, 0x5, 0x62, 0x32, 0x2, 0x3e5, 
       0x3e7, 0x5, 0xd0, 0x69, 0x2, 0x3e6, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e6, 
       0x3e7, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3e8, 
       0x3f7, 0x5, 0x66, 0x34, 0x2, 0x3e9, 0x3eb, 0x5, 0xd0, 0x69, 0x2, 
       0x3ea, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3eb, 0x3, 0x2, 0x2, 0x2, 
       0x3eb, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3f7, 0x5, 0x6a, 0x36, 
       0x2, 0x3ed, 0x3ef, 0x5, 0xd0, 0x69, 0x2, 0x3ee, 0x3ed, 0x3, 0x2, 
       0x2, 0x2, 0x3ee, 0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3f0, 0x3, 0x2, 
       0x2, 0x2, 0x3f0, 0x3f7, 0x5, 0x72, 0x3a, 0x2, 0x3f1, 0x3f7, 0x5, 
       0x74, 0x3b, 0x2, 0x3f2, 0x3f4, 0x5, 0xd0, 0x69, 0x2, 0x3f3, 0x3f2, 
       0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f5, 
       0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f7, 0x5, 0x16e, 0xb8, 0x2, 0x3f6, 0x3dc, 
       0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3de, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3e2, 
       0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3ea, 
       0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f1, 
       0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x5d, 
       0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3fa, 0x5, 0xd0, 0x69, 0x2, 0x3f9, 0x3f8, 
       0x3, 0x2, 0x2, 0x2, 0x3f9, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3fb, 
       0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fc, 0x7, 0x7f, 0x2, 0x2, 0x3fc, 0x3fd, 
       0x7, 0x79, 0x2, 0x2, 0x3fd, 0x40d, 0x5, 0x5c, 0x2f, 0x2, 0x3fe, 0x400, 
       0x5, 0xd0, 0x69, 0x2, 0x3ff, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x400, 
       0x3, 0x2, 0x2, 0x2, 0x400, 0x401, 0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 
       0x7, 0xb, 0x2, 0x2, 0x402, 0x403, 0x5, 0x5a, 0x2e, 0x2, 0x403, 0x404, 
       0x7, 0x79, 0x2, 0x2, 0x404, 0x405, 0x5, 0x5c, 0x2f, 0x2, 0x405, 0x40d, 
       0x3, 0x2, 0x2, 0x2, 0x406, 0x408, 0x5, 0xd0, 0x69, 0x2, 0x407, 0x406, 
       0x3, 0x2, 0x2, 0x2, 0x407, 0x408, 0x3, 0x2, 0x2, 0x2, 0x408, 0x409, 
       0x3, 0x2, 0x2, 0x2, 0x409, 0x40a, 0x7, 0x16, 0x2, 0x2, 0x40a, 0x40b, 
       0x7, 0x79, 0x2, 0x2, 0x40b, 0x40d, 0x5, 0x5c, 0x2f, 0x2, 0x40c, 0x3f9, 
       0x3, 0x2, 0x2, 0x2, 0x40c, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x407, 
       0x3, 0x2, 0x2, 0x2, 0x40d, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x410, 
       0x5, 0x58, 0x2d, 0x2, 0x40f, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x410, 
       0x3, 0x2, 0x2, 0x2, 0x410, 0x411, 0x3, 0x2, 0x2, 0x2, 0x411, 0x412, 
       0x7, 0x7b, 0x2, 0x2, 0x412, 0x61, 0x3, 0x2, 0x2, 0x2, 0x413, 0x415, 
       0x7, 0x54, 0x2, 0x2, 0x414, 0x416, 0x5, 0x64, 0x33, 0x2, 0x415, 0x414, 
       0x3, 0x2, 0x2, 0x2, 0x415, 0x416, 0x3, 0x2, 0x2, 0x2, 0x416, 0x417, 
       0x3, 0x2, 0x2, 0x2, 0x417, 0x418, 0x7, 0x55, 0x2, 0x2, 0x418, 0x63, 
       0x3, 0x2, 0x2, 0x2, 0x419, 0x41a, 0x8, 0x33, 0x1, 0x2, 0x41a, 0x41b, 
       0x5, 0x5c, 0x2f, 0x2, 0x41b, 0x420, 0x3, 0x2, 0x2, 0x2, 0x41c, 0x41d, 
       0xc, 0x3, 0x2, 0x2, 0x41d, 0x41f, 0x5, 0x5c, 0x2f, 0x2, 0x41e, 0x41c, 
       0x3, 0x2, 0x2, 0x2, 0x41f, 0x422, 0x3, 0x2, 0x2, 0x2, 0x420, 0x41e, 
       0x3, 0x2, 0x2, 0x2, 0x420, 0x421, 0x3, 0x2, 0x2, 0x2, 0x421, 0x65, 
       0x3, 0x2, 0x2, 0x2, 0x422, 0x420, 0x3, 0x2, 0x2, 0x2, 0x423, 0x424, 
       0x7, 0x26, 0x2, 0x2, 0x424, 0x425, 0x7, 0x50, 0x2, 0x2, 0x425, 0x426, 
       0x5, 0x68, 0x35, 0x2, 0x426, 0x427, 0x7, 0x51, 0x2, 0x2, 0x427, 0x428, 
       0x5, 0x5c, 0x2f, 0x2, 0x428, 0x438, 0x3, 0x2, 0x2, 0x2, 0x429, 0x42a, 
       0x7, 0x26, 0x2, 0x2, 0x42a, 0x42b, 0x7, 0x50, 0x2, 0x2, 0x42b, 0x42c, 
       0x5, 0x68, 0x35, 0x2, 0x42c, 0x42d, 0x7, 0x51, 0x2, 0x2, 0x42d, 0x42e, 
       0x5, 0x5c, 0x2f, 0x2, 0x42e, 0x42f, 0x7, 0x1b, 0x2, 0x2, 0x42f, 0x430, 
       0x5, 0x5c, 0x2f, 0x2, 0x430, 0x438, 0x3, 0x2, 0x2, 0x2, 0x431, 0x432, 
       0x7, 0x3e, 0x2, 0x2, 0x432, 0x433, 0x7, 0x50, 0x2, 0x2, 0x433, 0x434, 
       0x5, 0x68, 0x35, 0x2, 0x434, 0x435, 0x7, 0x51, 0x2, 0x2, 0x435, 0x436, 
       0x5, 0x5c, 0x2f, 0x2, 0x436, 0x438, 0x3, 0x2, 0x2, 0x2, 0x437, 0x423, 
       0x3, 0x2, 0x2, 0x2, 0x437, 0x429, 0x3, 0x2, 0x2, 0x2, 0x437, 0x431, 
       0x3, 0x2, 0x2, 0x2, 0x438, 0x67, 0x3, 0x2, 0x2, 0x2, 0x439, 0x44a, 
       0x5, 0x58, 0x2d, 0x2, 0x43a, 0x43c, 0x5, 0xd0, 0x69, 0x2, 0x43b, 
       0x43a, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x43c, 0x3, 0x2, 0x2, 0x2, 0x43c, 
       0x43d, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43e, 0x5, 0x88, 0x45, 0x2, 0x43e, 
       0x43f, 0x5, 0xea, 0x76, 0x2, 0x43f, 0x440, 0x7, 0x60, 0x2, 0x2, 0x440, 
       0x441, 0x5, 0x118, 0x8d, 0x2, 0x441, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x442, 
       0x444, 0x5, 0xd0, 0x69, 0x2, 0x443, 0x442, 0x3, 0x2, 0x2, 0x2, 0x443, 
       0x444, 0x3, 0x2, 0x2, 0x2, 0x444, 0x445, 0x3, 0x2, 0x2, 0x2, 0x445, 
       0x446, 0x5, 0x88, 0x45, 0x2, 0x446, 0x447, 0x5, 0xea, 0x76, 0x2, 
       0x447, 0x448, 0x5, 0x11c, 0x8f, 0x2, 0x448, 0x44a, 0x3, 0x2, 0x2, 
       0x2, 0x449, 0x439, 0x3, 0x2, 0x2, 0x2, 0x449, 0x43b, 0x3, 0x2, 0x2, 
       0x2, 0x449, 0x443, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x69, 0x3, 0x2, 0x2, 
       0x2, 0x44b, 0x44c, 0x7, 0x4f, 0x2, 0x2, 0x44c, 0x44d, 0x7, 0x50, 
       0x2, 0x2, 0x44d, 0x44e, 0x5, 0x68, 0x35, 0x2, 0x44e, 0x44f, 0x7, 
       0x51, 0x2, 0x2, 0x44f, 0x450, 0x5, 0x5c, 0x2f, 0x2, 0x450, 0x46f, 
       0x3, 0x2, 0x2, 0x2, 0x451, 0x452, 0x7, 0x18, 0x2, 0x2, 0x452, 0x453, 
       0x5, 0x5c, 0x2f, 0x2, 0x453, 0x454, 0x7, 0x4f, 0x2, 0x2, 0x454, 0x455, 
       0x7, 0x50, 0x2, 0x2, 0x455, 0x456, 0x5, 0x58, 0x2d, 0x2, 0x456, 0x457, 
       0x7, 0x51, 0x2, 0x2, 0x457, 0x458, 0x7, 0x7b, 0x2, 0x2, 0x458, 0x46f, 
       0x3, 0x2, 0x2, 0x2, 0x459, 0x45a, 0x7, 0x23, 0x2, 0x2, 0x45a, 0x45b, 
       0x7, 0x50, 0x2, 0x2, 0x45b, 0x45d, 0x5, 0x6c, 0x37, 0x2, 0x45c, 0x45e, 
       0x5, 0x68, 0x35, 0x2, 0x45d, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x45d, 0x45e, 
       0x3, 0x2, 0x2, 0x2, 0x45e, 0x45f, 0x3, 0x2, 0x2, 0x2, 0x45f, 0x461, 
       0x7, 0x7b, 0x2, 0x2, 0x460, 0x462, 0x5, 0x58, 0x2d, 0x2, 0x461, 0x460, 
       0x3, 0x2, 0x2, 0x2, 0x461, 0x462, 0x3, 0x2, 0x2, 0x2, 0x462, 0x463, 
       0x3, 0x2, 0x2, 0x2, 0x463, 0x464, 0x7, 0x51, 0x2, 0x2, 0x464, 0x465, 
       0x5, 0x5c, 0x2f, 0x2, 0x465, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x466, 0x467, 
       0x7, 0x23, 0x2, 0x2, 0x467, 0x468, 0x7, 0x50, 0x2, 0x2, 0x468, 0x469, 
       0x5, 0x6e, 0x38, 0x2, 0x469, 0x46a, 0x7, 0x79, 0x2, 0x2, 0x46a, 0x46b, 
       0x5, 0x70, 0x39, 0x2, 0x46b, 0x46c, 0x7, 0x51, 0x2, 0x2, 0x46c, 0x46d, 
       0x5, 0x5c, 0x2f, 0x2, 0x46d, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x44b, 
       0x3, 0x2, 0x2, 0x2, 0x46e, 0x451, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x459, 
       0x3, 0x2, 0x2, 0x2, 0x46e, 0x466, 0x3, 0x2, 0x2, 0x2, 0x46f, 0x6b, 
       0x3, 0x2, 0x2, 0x2, 0x470, 0x473, 0x5, 0x60, 0x31, 0x2, 0x471, 0x473, 
       0x5, 0x7e, 0x40, 0x2, 0x472, 0x470, 0x3, 0x2, 0x2, 0x2, 0x472, 0x471, 
       0x3, 0x2, 0x2, 0x2, 0x473, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x474, 0x476, 
       0x5, 0xd0, 0x69, 0x2, 0x475, 0x474, 0x3, 0x2, 0x2, 0x2, 0x475, 0x476, 
       0x3, 0x2, 0x2, 0x2, 0x476, 0x477, 0x3, 0x2, 0x2, 0x2, 0x477, 0x478, 
       0x5, 0x88, 0x45, 0x2, 0x478, 0x479, 0x5, 0xea, 0x76, 0x2, 0x479, 
       0x6f, 0x3, 0x2, 0x2, 0x2, 0x47a, 0x47d, 0x5, 0x58, 0x2d, 0x2, 0x47b, 
       0x47d, 0x5, 0x11c, 0x8f, 0x2, 0x47c, 0x47a, 0x3, 0x2, 0x2, 0x2, 0x47c, 
       0x47b, 0x3, 0x2, 0x2, 0x2, 0x47d, 0x71, 0x3, 0x2, 0x2, 0x2, 0x47e, 
       0x47f, 0x7, 0xa, 0x2, 0x2, 0x47f, 0x48f, 0x7, 0x7b, 0x2, 0x2, 0x480, 
       0x481, 0x7, 0x14, 0x2, 0x2, 0x481, 0x48f, 0x7, 0x7b, 0x2, 0x2, 0x482, 
       0x484, 0x7, 0x36, 0x2, 0x2, 0x483, 0x485, 0x5, 0x58, 0x2d, 0x2, 0x484, 
       0x483, 0x3, 0x2, 0x2, 0x2, 0x484, 0x485, 0x3, 0x2, 0x2, 0x2, 0x485, 
       0x486, 0x3, 0x2, 0x2, 0x2, 0x486, 0x48f, 0x7, 0x7b, 0x2, 0x2, 0x487, 
       0x488, 0x7, 0x36, 0x2, 0x2, 0x488, 0x489, 0x5, 0x11c, 0x8f, 0x2, 
       0x489, 0x48a, 0x7, 0x7b, 0x2, 0x2, 0x48a, 0x48f, 0x3, 0x2, 0x2, 0x2, 
       0x48b, 0x48c, 0x7, 0x25, 0x2, 0x2, 0x48c, 0x48d, 0x7, 0x7f, 0x2, 
       0x2, 0x48d, 0x48f, 0x7, 0x7b, 0x2, 0x2, 0x48e, 0x47e, 0x3, 0x2, 0x2, 
       0x2, 0x48e, 0x480, 0x3, 0x2, 0x2, 0x2, 0x48e, 0x482, 0x3, 0x2, 0x2, 
       0x2, 0x48e, 0x487, 0x3, 0x2, 0x2, 0x2, 0x48e, 0x48b, 0x3, 0x2, 0x2, 
       0x2, 0x48f, 0x73, 0x3, 0x2, 0x2, 0x2, 0x490, 0x491, 0x5, 0x7a, 0x3e, 
       0x2, 0x491, 0x75, 0x3, 0x2, 0x2, 0x2, 0x492, 0x493, 0x8, 0x3c, 0x1, 
       0x2, 0x493, 0x494, 0x5, 0x78, 0x3d, 0x2, 0x494, 0x499, 0x3, 0x2, 
       0x2, 0x2, 0x495, 0x496, 0xc, 0x3, 0x2, 0x2, 0x496, 0x498, 0x5, 0x78, 
       0x3d, 0x2, 0x497, 0x495, 0x3, 0x2, 0x2, 0x2, 0x498, 0x49b, 0x3, 0x2, 
       0x2, 0x2, 0x499, 0x497, 0x3, 0x2, 0x2, 0x2, 0x499, 0x49a, 0x3, 0x2, 
       0x2, 0x2, 0x49a, 0x77, 0x3, 0x2, 0x2, 0x2, 0x49b, 0x499, 0x3, 0x2, 
       0x2, 0x2, 0x49c, 0x4a6, 0x5, 0x7a, 0x3e, 0x2, 0x49d, 0x4a6, 0x5, 
       0x110, 0x89, 0x2, 0x49e, 0x4a6, 0x5, 0x156, 0xac, 0x2, 0x49f, 0x4a6, 
       0x5, 0x16a, 0xb6, 0x2, 0x4a0, 0x4a6, 0x5, 0x16c, 0xb7, 0x2, 0x4a1, 
       0x4a6, 0x5, 0xce, 0x68, 0x2, 0x4a2, 0x4a6, 0x5, 0xb6, 0x5c, 0x2, 
       0x4a3, 0x4a6, 0x5, 0x82, 0x42, 0x2, 0x4a4, 0x4a6, 0x5, 0x84, 0x43, 
       0x2, 0x4a5, 0x49c, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x49d, 0x3, 0x2, 0x2, 
       0x2, 0x4a5, 0x49e, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x49f, 0x3, 0x2, 0x2, 
       0x2, 0x4a5, 0x4a0, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a1, 0x3, 0x2, 0x2, 
       0x2, 0x4a5, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a3, 0x3, 0x2, 0x2, 
       0x2, 0x4a5, 0x4a4, 0x3, 0x2, 0x2, 0x2, 0x4a6, 0x79, 0x3, 0x2, 0x2, 
       0x2, 0x4a7, 0x4b0, 0x5, 0x7e, 0x40, 0x2, 0x4a8, 0x4b0, 0x5, 0xcc, 
       0x67, 0x2, 0x4a9, 0x4b0, 0x5, 0xc4, 0x63, 0x2, 0x4aa, 0x4b0, 0x5, 
       0xc8, 0x65, 0x2, 0x4ab, 0x4b0, 0x5, 0xca, 0x66, 0x2, 0x4ac, 0x4b0, 
       0x5, 0x80, 0x41, 0x2, 0x4ad, 0x4b0, 0x5, 0x7c, 0x3f, 0x2, 0x4ae, 
       0x4b0, 0x5, 0xa6, 0x54, 0x2, 0x4af, 0x4a7, 0x3, 0x2, 0x2, 0x2, 0x4af, 
       0x4a8, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4a9, 0x3, 0x2, 0x2, 0x2, 0x4af, 
       0x4aa, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4af, 
       0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4ad, 0x3, 0x2, 0x2, 0x2, 0x4af, 
       0x4ae, 0x3, 0x2, 0x2, 0x2, 0x4b0, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x4b1, 
       0x4b2, 0x7, 0x4a, 0x2, 0x2, 0x4b2, 0x4b4, 0x7, 0x7f, 0x2, 0x2, 0x4b3, 
       0x4b5, 0x5, 0xd0, 0x69, 0x2, 0x4b4, 0x4b3, 0x3, 0x2, 0x2, 0x2, 0x4b4, 
       0x4b5, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4b6, 0x3, 0x2, 0x2, 0x2, 0x4b6, 
       0x4b7, 0x7, 0x60, 0x2, 0x2, 0x4b7, 0x4b8, 0x5, 0xfe, 0x80, 0x2, 0x4b8, 
       0x4b9, 0x7, 0x7b, 0x2, 0x2, 0x4b9, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x4ba, 
       0x4bc, 0x5, 0x88, 0x45, 0x2, 0x4bb, 0x4ba, 0x3, 0x2, 0x2, 0x2, 0x4bb, 
       0x4bc, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4be, 0x3, 0x2, 0x2, 0x2, 0x4bd, 
       0x4bf, 0x5, 0xe6, 0x74, 0x2, 0x4be, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4be, 
       0x4bf, 0x3, 0x2, 0x2, 0x2, 0x4bf, 0x4c0, 0x3, 0x2, 0x2, 0x2, 0x4c0, 
       0x4c9, 0x7, 0x7b, 0x2, 0x2, 0x4c1, 0x4c3, 0x5, 0xd0, 0x69, 0x2, 0x4c2, 
       0x4c4, 0x5, 0x88, 0x45, 0x2, 0x4c3, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4c3, 
       0x4c4, 0x3, 0x2, 0x2, 0x2, 0x4c4, 0x4c5, 0x3, 0x2, 0x2, 0x2, 0x4c5, 
       0x4c6, 0x5, 0xe6, 0x74, 0x2, 0x4c6, 0x4c7, 0x7, 0x7b, 0x2, 0x2, 0x4c7, 
       0x4c9, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4bb, 0x3, 0x2, 0x2, 0x2, 0x4c8, 
       0x4c1, 0x3, 0x2, 0x2, 0x2, 0x4c9, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x4ca, 
       0x4cb, 0x7, 0x3b, 0x2, 0x2, 0x4cb, 0x4cc, 0x7, 0x50, 0x2, 0x2, 0x4cc, 
       0x4cd, 0x5, 0x5a, 0x2e, 0x2, 0x4cd, 0x4ce, 0x7, 0x75, 0x2, 0x2, 0x4ce, 
       0x4cf, 0x7, 0x88, 0x2, 0x2, 0x4cf, 0x4d0, 0x7, 0x51, 0x2, 0x2, 0x4d0, 
       0x4d1, 0x7, 0x7b, 0x2, 0x2, 0x4d1, 0x81, 0x3, 0x2, 0x2, 0x2, 0x4d2, 
       0x4d3, 0x7, 0x7b, 0x2, 0x2, 0x4d3, 0x83, 0x3, 0x2, 0x2, 0x2, 0x4d4, 
       0x4d5, 0x5, 0xd0, 0x69, 0x2, 0x4d5, 0x4d6, 0x7, 0x7b, 0x2, 0x2, 0x4d6, 
       0x85, 0x3, 0x2, 0x2, 0x2, 0x4d7, 0x4de, 0x5, 0x8a, 0x46, 0x2, 0x4d8, 
       0x4de, 0x5, 0x90, 0x49, 0x2, 0x4d9, 0x4de, 0x5, 0x8c, 0x47, 0x2, 
       0x4da, 0x4de, 0x7, 0x24, 0x2, 0x2, 0x4db, 0x4de, 0x7, 0x45, 0x2, 
       0x2, 0x4dc, 0x4de, 0x7, 0x12, 0x2, 0x2, 0x4dd, 0x4d7, 0x3, 0x2, 0x2, 
       0x2, 0x4dd, 0x4d8, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4d9, 0x3, 0x2, 0x2, 
       0x2, 0x4dd, 0x4da, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4db, 0x3, 0x2, 0x2, 
       0x2, 0x4dd, 0x4dc, 0x3, 0x2, 0x2, 0x2, 0x4de, 0x87, 0x3, 0x2, 0x2, 
       0x2, 0x4df, 0x4e1, 0x5, 0x86, 0x44, 0x2, 0x4e0, 0x4e2, 0x5, 0xd0, 
       0x69, 0x2, 0x4e1, 0x4e0, 0x3, 0x2, 0x2, 0x2, 0x4e1, 0x4e2, 0x3, 0x2, 
       0x2, 0x2, 0x4e2, 0x4e7, 0x3, 0x2, 0x2, 0x2, 0x4e3, 0x4e4, 0x5, 0x86, 
       0x44, 0x2, 0x4e4, 0x4e5, 0x5, 0x88, 0x45, 0x2, 0x4e5, 0x4e7, 0x3, 
       0x2, 0x2, 0x2, 0x4e6, 0x4df, 0x3, 0x2, 0x2, 0x2, 0x4e6, 0x4e3, 0x3, 
       0x2, 0x2, 0x2, 0x4e7, 0x89, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4e9, 0x9, 
       0x4, 0x2, 0x2, 0x4e9, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x4ea, 0x4eb, 0x9, 
       0x5, 0x2, 0x2, 0x4eb, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x4ec, 0x4ed, 0x7, 
       0x7f, 0x2, 0x2, 0x4ed, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x4ee, 0x4f2, 0x5, 
       0x92, 0x4a, 0x2, 0x4ef, 0x4f2, 0x5, 0x120, 0x91, 0x2, 0x4f0, 0x4f2, 
       0x5, 0xa2, 0x52, 0x2, 0x4f1, 0x4ee, 0x3, 0x2, 0x2, 0x2, 0x4f1, 0x4ef, 
       0x3, 0x2, 0x2, 0x2, 0x4f1, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0x4f2, 0x91, 
       0x3, 0x2, 0x2, 0x2, 0x4f3, 0x4f8, 0x5, 0x98, 0x4d, 0x2, 0x4f4, 0x4f8, 
       0x5, 0x9e, 0x50, 0x2, 0x4f5, 0x4f8, 0x5, 0x168, 0xb5, 0x2, 0x4f6, 
       0x4f8, 0x5, 0xf8, 0x7d, 0x2, 0x4f7, 0x4f3, 0x3, 0x2, 0x2, 0x2, 0x4f7, 
       0x4f4, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f5, 0x3, 0x2, 0x2, 0x2, 0x4f7, 
       0x4f6, 0x3, 0x2, 0x2, 0x2, 0x4f8, 0x93, 0x3, 0x2, 0x2, 0x2, 0x4f9, 
       0x4fb, 0x5, 0x90, 0x49, 0x2, 0x4fa, 0x4fc, 0x5, 0xd0, 0x69, 0x2, 
       0x4fb, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0x4fb, 0x4fc, 0x3, 0x2, 0x2, 0x2, 
       0x4fc, 0x501, 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x4fe, 0x5, 0x90, 0x49, 
       0x2, 0x4fe, 0x4ff, 0x5, 0x94, 0x4b, 0x2, 0x4ff, 0x501, 0x3, 0x2, 
       0x2, 0x2, 0x500, 0x4f9, 0x3, 0x2, 0x2, 0x2, 0x500, 0x4fd, 0x3, 0x2, 
       0x2, 0x2, 0x501, 0x95, 0x3, 0x2, 0x2, 0x2, 0x502, 0x504, 0x5, 0x92, 
       0x4a, 0x2, 0x503, 0x505, 0x5, 0xd0, 0x69, 0x2, 0x504, 0x503, 0x3, 
       0x2, 0x2, 0x2, 0x504, 0x505, 0x3, 0x2, 0x2, 0x2, 0x505, 0x50a, 0x3, 
       0x2, 0x2, 0x2, 0x506, 0x507, 0x5, 0x92, 0x4a, 0x2, 0x507, 0x508, 
       0x5, 0x96, 0x4c, 0x2, 0x508, 0x50a, 0x3, 0x2, 0x2, 0x2, 0x509, 0x502, 
       0x3, 0x2, 0x2, 0x2, 0x509, 0x506, 0x3, 0x2, 0x2, 0x2, 0x50a, 0x97, 
       0x3, 0x2, 0x2, 0x2, 0x50b, 0x50d, 0x5, 0xc, 0x7, 0x2, 0x50c, 0x50b, 
       0x3, 0x2, 0x2, 0x2, 0x50c, 0x50d, 0x3, 0x2, 0x2, 0x2, 0x50d, 0x50e, 
       0x3, 0x2, 0x2, 0x2, 0x50e, 0x523, 0x5, 0x9a, 0x4e, 0x2, 0x50f, 0x510, 
       0x5, 0xc, 0x7, 0x2, 0x510, 0x511, 0x7, 0x3f, 0x2, 0x2, 0x511, 0x512, 
       0x5, 0x15e, 0xb0, 0x2, 0x512, 0x523, 0x3, 0x2, 0x2, 0x2, 0x513, 0x523, 
       0x7, 0xd, 0x2, 0x2, 0x514, 0x523, 0x7, 0xe, 0x2, 0x2, 0x515, 0x523, 
       0x7, 0xf, 0x2, 0x2, 0x516, 0x523, 0x7, 0x4e, 0x2, 0x2, 0x517, 0x523, 
       0x7, 0x9, 0x2, 0x2, 0x518, 0x523, 0x7, 0x37, 0x2, 0x2, 0x519, 0x523, 
       0x7, 0x28, 0x2, 0x2, 0x51a, 0x523, 0x7, 0x29, 0x2, 0x2, 0x51b, 0x523, 
       0x7, 0x38, 0x2, 0x2, 0x51c, 0x523, 0x7, 0x49, 0x2, 0x2, 0x51d, 0x523, 
       0x7, 0x22, 0x2, 0x2, 0x51e, 0x523, 0x7, 0x19, 0x2, 0x2, 0x51f, 0x523, 
       0x7, 0x4c, 0x2, 0x2, 0x520, 0x523, 0x7, 0x8, 0x2, 0x2, 0x521, 0x523, 
       0x5, 0x9c, 0x4f, 0x2, 0x522, 0x50c, 0x3, 0x2, 0x2, 0x2, 0x522, 0x50f, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x513, 0x3, 0x2, 0x2, 0x2, 0x522, 0x514, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x515, 0x3, 0x2, 0x2, 0x2, 0x522, 0x516, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x517, 0x3, 0x2, 0x2, 0x2, 0x522, 0x518, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x519, 0x3, 0x2, 0x2, 0x2, 0x522, 0x51a, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x51b, 0x3, 0x2, 0x2, 0x2, 0x522, 0x51c, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x51d, 0x3, 0x2, 0x2, 0x2, 0x522, 0x51e, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x51f, 0x3, 0x2, 0x2, 0x2, 0x522, 0x520, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x521, 0x3, 0x2, 0x2, 0x2, 0x523, 0x99, 
       0x3, 0x2, 0x2, 0x2, 0x524, 0x529, 0x5, 0x11e, 0x90, 0x2, 0x525, 0x529, 
       0x5, 0xa0, 0x51, 0x2, 0x526, 0x529, 0x5, 0x8e, 0x48, 0x2, 0x527, 
       0x529, 0x5, 0x15e, 0xb0, 0x2, 0x528, 0x524, 0x3, 0x2, 0x2, 0x2, 0x528, 
       0x525, 0x3, 0x2, 0x2, 0x2, 0x528, 0x526, 0x3, 0x2, 0x2, 0x2, 0x528, 
       0x527, 0x3, 0x2, 0x2, 0x2, 0x529, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x52a, 
       0x52b, 0x7, 0x15, 0x2, 0x2, 0x52b, 0x52c, 0x7, 0x50, 0x2, 0x2, 0x52c, 
       0x52d, 0x5, 0x58, 0x2d, 0x2, 0x52d, 0x52e, 0x7, 0x51, 0x2, 0x2, 0x52e, 
       0x534, 0x3, 0x2, 0x2, 0x2, 0x52f, 0x530, 0x7, 0x15, 0x2, 0x2, 0x530, 
       0x531, 0x7, 0x50, 0x2, 0x2, 0x531, 0x532, 0x7, 0x8, 0x2, 0x2, 0x532, 
       0x534, 0x7, 0x51, 0x2, 0x2, 0x533, 0x52a, 0x3, 0x2, 0x2, 0x2, 0x533, 
       0x52f, 0x3, 0x2, 0x2, 0x2, 0x534, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x535, 
       0x537, 0x5, 0x128, 0x95, 0x2, 0x536, 0x538, 0x5, 0xd0, 0x69, 0x2, 
       0x537, 0x536, 0x3, 0x2, 0x2, 0x2, 0x537, 0x538, 0x3, 0x2, 0x2, 0x2, 
       0x538, 0x53a, 0x3, 0x2, 0x2, 0x2, 0x539, 0x53b, 0x5, 0xc, 0x7, 0x2, 
       0x53a, 0x539, 0x3, 0x2, 0x2, 0x2, 0x53a, 0x53b, 0x3, 0x2, 0x2, 0x2, 
       0x53b, 0x53c, 0x3, 0x2, 0x2, 0x2, 0x53c, 0x53d, 0x7, 0x7f, 0x2, 0x2, 
       0x53d, 0x54e, 0x3, 0x2, 0x2, 0x2, 0x53e, 0x53f, 0x5, 0x128, 0x95, 
       0x2, 0x53f, 0x540, 0x5, 0x15e, 0xb0, 0x2, 0x540, 0x54e, 0x3, 0x2, 
       0x2, 0x2, 0x541, 0x542, 0x5, 0x128, 0x95, 0x2, 0x542, 0x544, 0x5, 
       0xc, 0x7, 0x2, 0x543, 0x545, 0x7, 0x3f, 0x2, 0x2, 0x544, 0x543, 0x3, 
       0x2, 0x2, 0x2, 0x544, 0x545, 0x3, 0x2, 0x2, 0x2, 0x545, 0x546, 0x3, 
       0x2, 0x2, 0x2, 0x546, 0x547, 0x5, 0x15e, 0xb0, 0x2, 0x547, 0x54e, 
       0x3, 0x2, 0x2, 0x2, 0x548, 0x54a, 0x7, 0x1c, 0x2, 0x2, 0x549, 0x54b, 
       0x5, 0xc, 0x7, 0x2, 0x54a, 0x549, 0x3, 0x2, 0x2, 0x2, 0x54a, 0x54b, 
       0x3, 0x2, 0x2, 0x2, 0x54b, 0x54c, 0x3, 0x2, 0x2, 0x2, 0x54c, 0x54e, 
       0x7, 0x7f, 0x2, 0x2, 0x54d, 0x535, 0x3, 0x2, 0x2, 0x2, 0x54d, 0x53e, 
       0x3, 0x2, 0x2, 0x2, 0x54d, 0x541, 0x3, 0x2, 0x2, 0x2, 0x54d, 0x548, 
       0x3, 0x2, 0x2, 0x2, 0x54e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x54f, 0x550, 
       0x7, 0x7f, 0x2, 0x2, 0x550, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x551, 0x552, 
       0x5, 0xa4, 0x53, 0x2, 0x552, 0x554, 0x7, 0x54, 0x2, 0x2, 0x553, 0x555, 
       0x5, 0xac, 0x57, 0x2, 0x554, 0x553, 0x3, 0x2, 0x2, 0x2, 0x554, 0x555, 
       0x3, 0x2, 0x2, 0x2, 0x555, 0x556, 0x3, 0x2, 0x2, 0x2, 0x556, 0x557, 
       0x7, 0x55, 0x2, 0x2, 0x557, 0x55f, 0x3, 0x2, 0x2, 0x2, 0x558, 0x559, 
       0x5, 0xa4, 0x53, 0x2, 0x559, 0x55a, 0x7, 0x54, 0x2, 0x2, 0x55a, 0x55b, 
       0x5, 0xac, 0x57, 0x2, 0x55b, 0x55c, 0x7, 0x75, 0x2, 0x2, 0x55c, 0x55d, 
       0x7, 0x55, 0x2, 0x2, 0x55d, 0x55f, 0x3, 0x2, 0x2, 0x2, 0x55e, 0x551, 
       0x3, 0x2, 0x2, 0x2, 0x55e, 0x558, 0x3, 0x2, 0x2, 0x2, 0x55f, 0xa3, 
       0x3, 0x2, 0x2, 0x2, 0x560, 0x562, 0x5, 0xa8, 0x55, 0x2, 0x561, 0x563, 
       0x5, 0xd0, 0x69, 0x2, 0x562, 0x561, 0x3, 0x2, 0x2, 0x2, 0x562, 0x563, 
       0x3, 0x2, 0x2, 0x2, 0x563, 0x565, 0x3, 0x2, 0x2, 0x2, 0x564, 0x566, 
       0x7, 0x7f, 0x2, 0x2, 0x565, 0x564, 0x3, 0x2, 0x2, 0x2, 0x565, 0x566, 
       0x3, 0x2, 0x2, 0x2, 0x566, 0x568, 0x3, 0x2, 0x2, 0x2, 0x567, 0x569, 
       0x5, 0xaa, 0x56, 0x2, 0x568, 0x567, 0x3, 0x2, 0x2, 0x2, 0x568, 0x569, 
       0x3, 0x2, 0x2, 0x2, 0x569, 0x574, 0x3, 0x2, 0x2, 0x2, 0x56a, 0x56c, 
       0x5, 0xa8, 0x55, 0x2, 0x56b, 0x56d, 0x5, 0xd0, 0x69, 0x2, 0x56c, 
       0x56b, 0x3, 0x2, 0x2, 0x2, 0x56c, 0x56d, 0x3, 0x2, 0x2, 0x2, 0x56d, 
       0x56e, 0x3, 0x2, 0x2, 0x2, 0x56e, 0x56f, 0x5, 0xc, 0x7, 0x2, 0x56f, 
       0x571, 0x7, 0x7f, 0x2, 0x2, 0x570, 0x572, 0x5, 0xaa, 0x56, 0x2, 0x571, 
       0x570, 0x3, 0x2, 0x2, 0x2, 0x571, 0x572, 0x3, 0x2, 0x2, 0x2, 0x572, 
       0x574, 0x3, 0x2, 0x2, 0x2, 0x573, 0x560, 0x3, 0x2, 0x2, 0x2, 0x573, 
       0x56a, 0x3, 0x2, 0x2, 0x2, 0x574, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x575, 
       0x577, 0x5, 0xa8, 0x55, 0x2, 0x576, 0x578, 0x5, 0xd0, 0x69, 0x2, 
       0x577, 0x576, 0x3, 0x2, 0x2, 0x2, 0x577, 0x578, 0x3, 0x2, 0x2, 0x2, 
       0x578, 0x579, 0x3, 0x2, 0x2, 0x2, 0x579, 0x57b, 0x7, 0x7f, 0x2, 0x2, 
       0x57a, 0x57c, 0x5, 0xaa, 0x56, 0x2, 0x57b, 0x57a, 0x3, 0x2, 0x2, 
       0x2, 0x57b, 0x57c, 0x3, 0x2, 0x2, 0x2, 0x57c, 0x57d, 0x3, 0x2, 0x2, 
       0x2, 0x57d, 0x57e, 0x7, 0x7b, 0x2, 0x2, 0x57e, 0xa7, 0x3, 0x2, 0x2, 
       0x2, 0x57f, 0x585, 0x7, 0x1c, 0x2, 0x2, 0x580, 0x581, 0x7, 0x1c, 
       0x2, 0x2, 0x581, 0x585, 0x7, 0x10, 0x2, 0x2, 0x582, 0x583, 0x7, 0x1c, 
       0x2, 0x2, 0x583, 0x585, 0x7, 0x3d, 0x2, 0x2, 0x584, 0x57f, 0x3, 0x2, 
       0x2, 0x2, 0x584, 0x580, 0x3, 0x2, 0x2, 0x2, 0x584, 0x582, 0x3, 0x2, 
       0x2, 0x2, 0x585, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x586, 0x587, 0x7, 0x79, 
       0x2, 0x2, 0x587, 0x588, 0x5, 0x94, 0x4b, 0x2, 0x588, 0xab, 0x3, 0x2, 
       0x2, 0x2, 0x589, 0x58a, 0x8, 0x57, 0x1, 0x2, 0x58a, 0x58b, 0x5, 0xae, 
       0x58, 0x2, 0x58b, 0x591, 0x3, 0x2, 0x2, 0x2, 0x58c, 0x58d, 0xc, 0x3, 
       0x2, 0x2, 0x58d, 0x58e, 0x7, 0x75, 0x2, 0x2, 0x58e, 0x590, 0x5, 0xae, 
       0x58, 0x2, 0x58f, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x590, 0x593, 0x3, 0x2, 
       0x2, 0x2, 0x591, 0x58f, 0x3, 0x2, 0x2, 0x2, 0x591, 0x592, 0x3, 0x2, 
       0x2, 0x2, 0x592, 0xad, 0x3, 0x2, 0x2, 0x2, 0x593, 0x591, 0x3, 0x2, 
       0x2, 0x2, 0x594, 0x59a, 0x5, 0xb0, 0x59, 0x2, 0x595, 0x596, 0x5, 
       0xb0, 0x59, 0x2, 0x596, 0x597, 0x7, 0x60, 0x2, 0x2, 0x597, 0x598, 
       0x5, 0x5a, 0x2e, 0x2, 0x598, 0x59a, 0x3, 0x2, 0x2, 0x2, 0x599, 0x594, 
       0x3, 0x2, 0x2, 0x2, 0x599, 0x595, 0x3, 0x2, 0x2, 0x2, 0x59a, 0xaf, 
       0x3, 0x2, 0x2, 0x2, 0x59b, 0x59c, 0x7, 0x7f, 0x2, 0x2, 0x59c, 0xb1, 
       0x3, 0x2, 0x2, 0x2, 0x59d, 0x5a0, 0x5, 0xb4, 0x5b, 0x2, 0x59e, 0x5a0, 
       0x5, 0xc2, 0x62, 0x2, 0x59f, 0x59d, 0x3, 0x2, 0x2, 0x2, 0x59f, 0x59e, 
       0x3, 0x2, 0x2, 0x2, 0x5a0, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x5a1, 0x5a2, 
       0x7, 0x7f, 0x2, 0x2, 0x5a2, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x5a6, 
       0x5, 0xb8, 0x5d, 0x2, 0x5a4, 0x5a6, 0x5, 0xbe, 0x60, 0x2, 0x5a5, 
       0x5a3, 0x3, 0x2, 0x2, 0x2, 0x5a5, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x5a6, 
       0xb7, 0x3, 0x2, 0x2, 0x2, 0x5a7, 0x5aa, 0x5, 0xba, 0x5e, 0x2, 0x5a8, 
       0x5aa, 0x5, 0xbc, 0x5f, 0x2, 0x5a9, 0x5a7, 0x3, 0x2, 0x2, 0x2, 0x5a9, 
       0x5a8, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x5ab, 
       0x5ad, 0x7, 0x27, 0x2, 0x2, 0x5ac, 0x5ab, 0x3, 0x2, 0x2, 0x2, 0x5ac, 
       0x5ad, 0x3, 0x2, 0x2, 0x2, 0x5ad, 0x5ae, 0x3, 0x2, 0x2, 0x2, 0x5ae, 
       0x5af, 0x7, 0x2b, 0x2, 0x2, 0x5af, 0x5b0, 0x7, 0x7f, 0x2, 0x2, 0x5b0, 
       0x5b1, 0x7, 0x54, 0x2, 0x2, 0x5b1, 0x5b2, 0x5, 0xc0, 0x61, 0x2, 0x5b2, 
       0x5b3, 0x7, 0x55, 0x2, 0x2, 0x5b3, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x5b4, 
       0x5b6, 0x7, 0x27, 0x2, 0x2, 0x5b5, 0x5b4, 0x3, 0x2, 0x2, 0x2, 0x5b5, 
       0x5b6, 0x3, 0x2, 0x2, 0x2, 0x5b6, 0x5b7, 0x3, 0x2, 0x2, 0x2, 0x5b7, 
       0x5b8, 0x7, 0x2b, 0x2, 0x2, 0x5b8, 0x5b9, 0x5, 0xb4, 0x5b, 0x2, 0x5b9, 
       0x5ba, 0x7, 0x54, 0x2, 0x2, 0x5ba, 0x5bb, 0x5, 0xc0, 0x61, 0x2, 0x5bb, 
       0x5bc, 0x7, 0x55, 0x2, 0x2, 0x5bc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x5bd, 
       0x5bf, 0x7, 0x27, 0x2, 0x2, 0x5be, 0x5bd, 0x3, 0x2, 0x2, 0x2, 0x5be, 
       0x5bf, 0x3, 0x2, 0x2, 0x2, 0x5bf, 0x5c0, 0x3, 0x2, 0x2, 0x2, 0x5c0, 
       0x5c1, 0x7, 0x2b, 0x2, 0x2, 0x5c1, 0x5c2, 0x7, 0x54, 0x2, 0x2, 0x5c2, 
       0x5c3, 0x5, 0xc0, 0x61, 0x2, 0x5c3, 0x5c4, 0x7, 0x55, 0x2, 0x2, 0x5c4, 
       0xbf, 0x3, 0x2, 0x2, 0x2, 0x5c5, 0x5c7, 0x5, 0x76, 0x3c, 0x2, 0x5c6, 
       0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5c6, 0x5c7, 0x3, 0x2, 0x2, 0x2, 0x5c7, 
       0xc1, 0x3, 0x2, 0x2, 0x2, 0x5c8, 0x5c9, 0x7, 0x7f, 0x2, 0x2, 0x5c9, 
       0xc3, 0x3, 0x2, 0x2, 0x2, 0x5ca, 0x5cb, 0x7, 0x2b, 0x2, 0x2, 0x5cb, 
       0x5cc, 0x7, 0x7f, 0x2, 0x2, 0x5cc, 0x5cd, 0x7, 0x60, 0x2, 0x2, 0x5cd, 
       0x5ce, 0x5, 0xc6, 0x64, 0x2, 0x5ce, 0x5cf, 0x7, 0x7b, 0x2, 0x2, 0x5cf, 
       0xc5, 0x3, 0x2, 0x2, 0x2, 0x5d0, 0x5d2, 0x5, 0xc, 0x7, 0x2, 0x5d1, 
       0x5d0, 0x3, 0x2, 0x2, 0x2, 0x5d1, 0x5d2, 0x3, 0x2, 0x2, 0x2, 0x5d2, 
       0x5d3, 0x3, 0x2, 0x2, 0x2, 0x5d3, 0x5d4, 0x5, 0xb2, 0x5a, 0x2, 0x5d4, 
       0xc7, 0x3, 0x2, 0x2, 0x2, 0x5d5, 0x5d7, 0x7, 0x4a, 0x2, 0x2, 0x5d6, 
       0x5d8, 0x7, 0x47, 0x2, 0x2, 0x5d7, 0x5d6, 0x3, 0x2, 0x2, 0x2, 0x5d7, 
       0x5d8, 0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5d9, 0x3, 0x2, 0x2, 0x2, 0x5d9, 
       0x5da, 0x5, 0xc, 0x7, 0x2, 0x5da, 0x5db, 0x5, 0x8, 0x5, 0x2, 0x5db, 
       0x5dc, 0x7, 0x7b, 0x2, 0x2, 0x5dc, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0x5dd, 
       0x5de, 0x7, 0x4a, 0x2, 0x2, 0x5de, 0x5df, 0x7, 0x7a, 0x2, 0x2, 0x5df, 
       0x5e0, 0x5, 0x8, 0x5, 0x2, 0x5e0, 0x5e1, 0x7, 0x7b, 0x2, 0x2, 0x5e1, 
       0x5e3, 0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5d5, 0x3, 0x2, 0x2, 0x2, 0x5e2, 
       0x5dd, 0x3, 0x2, 0x2, 0x2, 0x5e3, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x5e4, 
       0x5e6, 0x5, 0xd0, 0x69, 0x2, 0x5e5, 0x5e4, 0x3, 0x2, 0x2, 0x2, 0x5e5, 
       0x5e6, 0x3, 0x2, 0x2, 0x2, 0x5e6, 0x5e7, 0x3, 0x2, 0x2, 0x2, 0x5e7, 
       0x5e8, 0x7, 0x4a, 0x2, 0x2, 0x5e8, 0x5ea, 0x7, 0x2b, 0x2, 0x2, 0x5e9, 
       0x5eb, 0x5, 0xc, 0x7, 0x2, 0x5ea, 0x5e9, 0x3, 0x2, 0x2, 0x2, 0x5ea, 
       0x5eb, 0x3, 0x2, 0x2, 0x2, 0x5eb, 0x5ec, 0x3, 0x2, 0x2, 0x2, 0x5ec, 
       0x5ed, 0x5, 0xb2, 0x5a, 0x2, 0x5ed, 0x5ee, 0x7, 0x7b, 0x2, 0x2, 0x5ee, 
       0xcb, 0x3, 0x2, 0x2, 0x2, 0x5ef, 0x5f0, 0x7, 0x7, 0x2, 0x2, 0x5f0, 
       0x5f1, 0x7, 0x50, 0x2, 0x2, 0x5f1, 0x5f2, 0x7, 0x88, 0x2, 0x2, 0x5f2, 
       0x5f3, 0x7, 0x51, 0x2, 0x2, 0x5f3, 0x5f4, 0x7, 0x7b, 0x2, 0x2, 0x5f4, 
       0xcd, 0x3, 0x2, 0x2, 0x2, 0x5f5, 0x5f6, 0x7, 0x1f, 0x2, 0x2, 0x5f6, 
       0x5f7, 0x7, 0x88, 0x2, 0x2, 0x5f7, 0x5f9, 0x7, 0x54, 0x2, 0x2, 0x5f8, 
       0x5fa, 0x5, 0x76, 0x3c, 0x2, 0x5f9, 0x5f8, 0x3, 0x2, 0x2, 0x2, 0x5f9, 
       0x5fa, 0x3, 0x2, 0x2, 0x2, 0x5fa, 0x5fb, 0x3, 0x2, 0x2, 0x2, 0x5fb, 
       0x600, 0x7, 0x55, 0x2, 0x2, 0x5fc, 0x5fd, 0x7, 0x1f, 0x2, 0x2, 0x5fd, 
       0x5fe, 0x7, 0x88, 0x2, 0x2, 0x5fe, 0x600, 0x5, 0x78, 0x3d, 0x2, 0x5ff, 
       0x5f5, 0x3, 0x2, 0x2, 0x2, 0x5ff, 0x5fc, 0x3, 0x2, 0x2, 0x2, 0x600, 
       0xcf, 0x3, 0x2, 0x2, 0x2, 0x601, 0x602, 0x8, 0x69, 0x1, 0x2, 0x602, 
       0x603, 0x5, 0xd2, 0x6a, 0x2, 0x603, 0x608, 0x3, 0x2, 0x2, 0x2, 0x604, 
       0x605, 0xc, 0x3, 0x2, 0x2, 0x605, 0x607, 0x5, 0xd2, 0x6a, 0x2, 0x606, 
       0x604, 0x3, 0x2, 0x2, 0x2, 0x607, 0x60a, 0x3, 0x2, 0x2, 0x2, 0x608, 
       0x606, 0x3, 0x2, 0x2, 0x2, 0x608, 0x609, 0x3, 0x2, 0x2, 0x2, 0x609, 
       0xd1, 0x3, 0x2, 0x2, 0x2, 0x60a, 0x608, 0x3, 0x2, 0x2, 0x2, 0x60b, 
       0x60c, 0x7, 0x52, 0x2, 0x2, 0x60c, 0x60d, 0x7, 0x52, 0x2, 0x2, 0x60d, 
       0x60e, 0x5, 0xd6, 0x6c, 0x2, 0x60e, 0x60f, 0x7, 0x53, 0x2, 0x2, 0x60f, 
       0x610, 0x7, 0x53, 0x2, 0x2, 0x610, 0x613, 0x3, 0x2, 0x2, 0x2, 0x611, 
       0x613, 0x5, 0xd4, 0x6b, 0x2, 0x612, 0x60b, 0x3, 0x2, 0x2, 0x2, 0x612, 
       0x611, 0x3, 0x2, 0x2, 0x2, 0x613, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x614, 
       0x615, 0x7, 0x5, 0x2, 0x2, 0x615, 0x616, 0x7, 0x50, 0x2, 0x2, 0x616, 
       0x618, 0x5, 0xfe, 0x80, 0x2, 0x617, 0x619, 0x7, 0x7e, 0x2, 0x2, 0x618, 
       0x617, 0x3, 0x2, 0x2, 0x2, 0x618, 0x619, 0x3, 0x2, 0x2, 0x2, 0x619, 
       0x61a, 0x3, 0x2, 0x2, 0x2, 0x61a, 0x61b, 0x7, 0x51, 0x2, 0x2, 0x61b, 
       0x625, 0x3, 0x2, 0x2, 0x2, 0x61c, 0x61d, 0x7, 0x5, 0x2, 0x2, 0x61d, 
       0x61e, 0x7, 0x50, 0x2, 0x2, 0x61e, 0x620, 0x5, 0x5a, 0x2e, 0x2, 0x61f, 
       0x621, 0x7, 0x7e, 0x2, 0x2, 0x620, 0x61f, 0x3, 0x2, 0x2, 0x2, 0x620, 
       0x621, 0x3, 0x2, 0x2, 0x2, 0x621, 0x622, 0x3, 0x2, 0x2, 0x2, 0x622, 
       0x623, 0x7, 0x51, 0x2, 0x2, 0x623, 0x625, 0x3, 0x2, 0x2, 0x2, 0x624, 
       0x614, 0x3, 0x2, 0x2, 0x2, 0x624, 0x61c, 0x3, 0x2, 0x2, 0x2, 0x625, 
       0xd5, 0x3, 0x2, 0x2, 0x2, 0x626, 0x628, 0x8, 0x6c, 0x1, 0x2, 0x627, 
       0x629, 0x5, 0xd8, 0x6d, 0x2, 0x628, 0x627, 0x3, 0x2, 0x2, 0x2, 0x628, 
       0x629, 0x3, 0x2, 0x2, 0x2, 0x629, 0x62e, 0x3, 0x2, 0x2, 0x2, 0x62a, 
       0x62b, 0x5, 0xd8, 0x6d, 0x2, 0x62b, 0x62c, 0x7, 0x7e, 0x2, 0x2, 0x62c, 
       0x62e, 0x3, 0x2, 0x2, 0x2, 0x62d, 0x626, 0x3, 0x2, 0x2, 0x2, 0x62d, 
       0x62a, 0x3, 0x2, 0x2, 0x2, 0x62e, 0x63b, 0x3, 0x2, 0x2, 0x2, 0x62f, 
       0x630, 0xc, 0x5, 0x2, 0x2, 0x630, 0x632, 0x7, 0x75, 0x2, 0x2, 0x631, 
       0x633, 0x5, 0xd8, 0x6d, 0x2, 0x632, 0x631, 0x3, 0x2, 0x2, 0x2, 0x632, 
       0x633, 0x3, 0x2, 0x2, 0x2, 0x633, 0x63a, 0x3, 0x2, 0x2, 0x2, 0x634, 
       0x635, 0xc, 0x3, 0x2, 0x2, 0x635, 0x636, 0x7, 0x75, 0x2, 0x2, 0x636, 
       0x637, 0x5, 0xd8, 0x6d, 0x2, 0x637, 0x638, 0x7, 0x7e, 0x2, 0x2, 0x638, 
       0x63a, 0x3, 0x2, 0x2, 0x2, 0x639, 0x62f, 0x3, 0x2, 0x2, 0x2, 0x639, 
       0x634, 0x3, 0x2, 0x2, 0x2, 0x63a, 0x63d, 0x3, 0x2, 0x2, 0x2, 0x63b, 
       0x639, 0x3, 0x2, 0x2, 0x2, 0x63b, 0x63c, 0x3, 0x2, 0x2, 0x2, 0x63c, 
       0xd7, 0x3, 0x2, 0x2, 0x2, 0x63d, 0x63b, 0x3, 0x2, 0x2, 0x2, 0x63e, 
       0x640, 0x5, 0xda, 0x6e, 0x2, 0x63f, 0x641, 0x5, 0xe0, 0x71, 0x2, 
       0x640, 0x63f, 0x3, 0x2, 0x2, 0x2, 0x640, 0x641, 0x3, 0x2, 0x2, 0x2, 
       0x641, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x642, 0x645, 0x7, 0x7f, 0x2, 0x2, 
       0x643, 0x645, 0x5, 0xdc, 0x6f, 0x2, 0x644, 0x642, 0x3, 0x2, 0x2, 
       0x2, 0x644, 0x643, 0x3, 0x2, 0x2, 0x2, 0x645, 0xdb, 0x3, 0x2, 0x2, 
       0x2, 0x646, 0x647, 0x5, 0xde, 0x70, 0x2, 0x647, 0x648, 0x7, 0x7a, 
       0x2, 0x2, 0x648, 0x649, 0x7, 0x7f, 0x2, 0x2, 0x649, 0xdd, 0x3, 0x2, 
       0x2, 0x2, 0x64a, 0x64b, 0x7, 0x7f, 0x2, 0x2, 0x64b, 0xdf, 0x3, 0x2, 
       0x2, 0x2, 0x64c, 0x64d, 0x7, 0x50, 0x2, 0x2, 0x64d, 0x64e, 0x5, 0xe2, 
       0x72, 0x2, 0x64e, 0x64f, 0x7, 0x51, 0x2, 0x2, 0x64f, 0xe1, 0x3, 0x2, 
       0x2, 0x2, 0x650, 0x652, 0x8, 0x72, 0x1, 0x2, 0x651, 0x653, 0x5, 0xe4, 
       0x73, 0x2, 0x652, 0x651, 0x3, 0x2, 0x2, 0x2, 0x652, 0x653, 0x3, 0x2, 
       0x2, 0x2, 0x653, 0x658, 0x3, 0x2, 0x2, 0x2, 0x654, 0x655, 0xc, 0x3, 
       0x2, 0x2, 0x655, 0x657, 0x5, 0xe4, 0x73, 0x2, 0x656, 0x654, 0x3, 
       0x2, 0x2, 0x2, 0x657, 0x65a, 0x3, 0x2, 0x2, 0x2, 0x658, 0x656, 0x3, 
       0x2, 0x2, 0x2, 0x658, 0x659, 0x3, 0x2, 0x2, 0x2, 0x659, 0xe3, 0x3, 
       0x2, 0x2, 0x2, 0x65a, 0x658, 0x3, 0x2, 0x2, 0x2, 0x65b, 0x65c, 0x7, 
       0x50, 0x2, 0x2, 0x65c, 0x65d, 0x5, 0xe2, 0x72, 0x2, 0x65d, 0x65e, 
       0x7, 0x51, 0x2, 0x2, 0x65e, 0x668, 0x3, 0x2, 0x2, 0x2, 0x65f, 0x660, 
       0x7, 0x52, 0x2, 0x2, 0x660, 0x661, 0x5, 0xe2, 0x72, 0x2, 0x661, 0x662, 
       0x7, 0x53, 0x2, 0x2, 0x662, 0x668, 0x3, 0x2, 0x2, 0x2, 0x663, 0x664, 
       0x7, 0x54, 0x2, 0x2, 0x664, 0x665, 0x5, 0xe2, 0x72, 0x2, 0x665, 0x666, 
       0x7, 0x55, 0x2, 0x2, 0x666, 0x668, 0x3, 0x2, 0x2, 0x2, 0x667, 0x65b, 
       0x3, 0x2, 0x2, 0x2, 0x667, 0x65f, 0x3, 0x2, 0x2, 0x2, 0x667, 0x663, 
       0x3, 0x2, 0x2, 0x2, 0x668, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x669, 0x66a, 
       0x8, 0x74, 0x1, 0x2, 0x66a, 0x66b, 0x5, 0xe8, 0x75, 0x2, 0x66b, 0x671, 
       0x3, 0x2, 0x2, 0x2, 0x66c, 0x66d, 0xc, 0x3, 0x2, 0x2, 0x66d, 0x66e, 
       0x7, 0x75, 0x2, 0x2, 0x66e, 0x670, 0x5, 0xe8, 0x75, 0x2, 0x66f, 0x66c, 
       0x3, 0x2, 0x2, 0x2, 0x670, 0x673, 0x3, 0x2, 0x2, 0x2, 0x671, 0x66f, 
       0x3, 0x2, 0x2, 0x2, 0x671, 0x672, 0x3, 0x2, 0x2, 0x2, 0x672, 0xe7, 
       0x3, 0x2, 0x2, 0x2, 0x673, 0x671, 0x3, 0x2, 0x2, 0x2, 0x674, 0x676, 
       0x5, 0xea, 0x76, 0x2, 0x675, 0x677, 0x5, 0x114, 0x8b, 0x2, 0x676, 
       0x675, 0x3, 0x2, 0x2, 0x2, 0x676, 0x677, 0x3, 0x2, 0x2, 0x2, 0x677, 
       0xe9, 0x3, 0x2, 0x2, 0x2, 0x678, 0x67e, 0x5, 0xec, 0x77, 0x2, 0x679, 
       0x67a, 0x5, 0xee, 0x78, 0x2, 0x67a, 0x67b, 0x5, 0xf0, 0x79, 0x2, 
       0x67b, 0x67c, 0x5, 0xf2, 0x7a, 0x2, 0x67c, 0x67e, 0x3, 0x2, 0x2, 
       0x2, 0x67d, 0x678, 0x3, 0x2, 0x2, 0x2, 0x67d, 0x679, 0x3, 0x2, 0x2, 
       0x2, 0x67e, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x67f, 0x684, 0x5, 0xee, 0x78, 
       0x2, 0x680, 0x681, 0x5, 0xf4, 0x7b, 0x2, 0x681, 0x682, 0x5, 0xec, 
       0x77, 0x2, 0x682, 0x684, 0x3, 0x2, 0x2, 0x2, 0x683, 0x67f, 0x3, 0x2, 
       0x2, 0x2, 0x683, 0x680, 0x3, 0x2, 0x2, 0x2, 0x684, 0xed, 0x3, 0x2, 
       0x2, 0x2, 0x685, 0x686, 0x8, 0x78, 0x1, 0x2, 0x686, 0x688, 0x5, 0xfc, 
       0x7f, 0x2, 0x687, 0x689, 0x5, 0xd0, 0x69, 0x2, 0x688, 0x687, 0x3, 
       0x2, 0x2, 0x2, 0x688, 0x689, 0x3, 0x2, 0x2, 0x2, 0x689, 0x68f, 0x3, 
       0x2, 0x2, 0x2, 0x68a, 0x68b, 0x7, 0x50, 0x2, 0x2, 0x68b, 0x68c, 0x5, 
       0xec, 0x77, 0x2, 0x68c, 0x68d, 0x7, 0x51, 0x2, 0x2, 0x68d, 0x68f, 
       0x3, 0x2, 0x2, 0x2, 0x68e, 0x685, 0x3, 0x2, 0x2, 0x2, 0x68e, 0x68a, 
       0x3, 0x2, 0x2, 0x2, 0x68f, 0x69d, 0x3, 0x2, 0x2, 0x2, 0x690, 0x691, 
       0xc, 0x5, 0x2, 0x2, 0x691, 0x69c, 0x5, 0xf0, 0x79, 0x2, 0x692, 0x693, 
       0xc, 0x4, 0x2, 0x2, 0x693, 0x695, 0x7, 0x52, 0x2, 0x2, 0x694, 0x696, 
       0x5, 0x5a, 0x2e, 0x2, 0x695, 0x694, 0x3, 0x2, 0x2, 0x2, 0x695, 0x696, 
       0x3, 0x2, 0x2, 0x2, 0x696, 0x697, 0x3, 0x2, 0x2, 0x2, 0x697, 0x699, 
       0x7, 0x53, 0x2, 0x2, 0x698, 0x69a, 0x5, 0xd0, 0x69, 0x2, 0x699, 0x698, 
       0x3, 0x2, 0x2, 0x2, 0x699, 0x69a, 0x3, 0x2, 0x2, 0x2, 0x69a, 0x69c, 
       0x3, 0x2, 0x2, 0x2, 0x69b, 0x690, 0x3, 0x2, 0x2, 0x2, 0x69b, 0x692, 
       0x3, 0x2, 0x2, 0x2, 0x69c, 0x69f, 0x3, 0x2, 0x2, 0x2, 0x69d, 0x69b, 
       0x3, 0x2, 0x2, 0x2, 0x69d, 0x69e, 0x3, 0x2, 0x2, 0x2, 0x69e, 0xef, 
       0x3, 0x2, 0x2, 0x2, 0x69f, 0x69d, 0x3, 0x2, 0x2, 0x2, 0x6a0, 0x6a1, 
       0x7, 0x50, 0x2, 0x2, 0x6a1, 0x6a2, 0x5, 0x10a, 0x86, 0x2, 0x6a2, 
       0x6a4, 0x7, 0x51, 0x2, 0x2, 0x6a3, 0x6a5, 0x5, 0xf6, 0x7c, 0x2, 0x6a4, 
       0x6a3, 0x3, 0x2, 0x2, 0x2, 0x6a4, 0x6a5, 0x3, 0x2, 0x2, 0x2, 0x6a5, 
       0x6a7, 0x3, 0x2, 0x2, 0x2, 0x6a6, 0x6a8, 0x5, 0xfa, 0x7e, 0x2, 0x6a7, 
       0x6a6, 0x3, 0x2, 0x2, 0x2, 0x6a7, 0x6a8, 0x3, 0x2, 0x2, 0x2, 0x6a8, 
       0x6aa, 0x3, 0x2, 0x2, 0x2, 0x6a9, 0x6ab, 0x5, 0x17a, 0xbe, 0x2, 0x6aa, 
       0x6a9, 0x3, 0x2, 0x2, 0x2, 0x6aa, 0x6ab, 0x3, 0x2, 0x2, 0x2, 0x6ab, 
       0x6ad, 0x3, 0x2, 0x2, 0x2, 0x6ac, 0x6ae, 0x5, 0xd0, 0x69, 0x2, 0x6ad, 
       0x6ac, 0x3, 0x2, 0x2, 0x2, 0x6ad, 0x6ae, 0x3, 0x2, 0x2, 0x2, 0x6ae, 
       0xf1, 0x3, 0x2, 0x2, 0x2, 0x6af, 0x6b0, 0x7, 0x77, 0x2, 0x2, 0x6b0, 
       0x6b2, 0x5, 0x96, 0x4c, 0x2, 0x6b1, 0x6b3, 0x5, 0x100, 0x81, 0x2, 
       0x6b2, 0x6b1, 0x3, 0x2, 0x2, 0x2, 0x6b2, 0x6b3, 0x3, 0x2, 0x2, 0x2, 
       0x6b3, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x6b4, 0x6b6, 0x7, 0x58, 0x2, 0x2, 
       0x6b5, 0x6b7, 0x5, 0xd0, 0x69, 0x2, 0x6b6, 0x6b5, 0x3, 0x2, 0x2, 
       0x2, 0x6b6, 0x6b7, 0x3, 0x2, 0x2, 0x2, 0x6b7, 0x6b9, 0x3, 0x2, 0x2, 
       0x2, 0x6b8, 0x6ba, 0x5, 0xf6, 0x7c, 0x2, 0x6b9, 0x6b8, 0x3, 0x2, 
       0x2, 0x2, 0x6b9, 0x6ba, 0x3, 0x2, 0x2, 0x2, 0x6ba, 0x6cc, 0x3, 0x2, 
       0x2, 0x2, 0x6bb, 0x6bd, 0x7, 0x5c, 0x2, 0x2, 0x6bc, 0x6be, 0x5, 0xd0, 
       0x69, 0x2, 0x6bd, 0x6bc, 0x3, 0x2, 0x2, 0x2, 0x6bd, 0x6be, 0x3, 0x2, 
       0x2, 0x2, 0x6be, 0x6cc, 0x3, 0x2, 0x2, 0x2, 0x6bf, 0x6c1, 0x7, 0x71, 
       0x2, 0x2, 0x6c0, 0x6c2, 0x5, 0xd0, 0x69, 0x2, 0x6c1, 0x6c0, 0x3, 
       0x2, 0x2, 0x2, 0x6c1, 0x6c2, 0x3, 0x2, 0x2, 0x2, 0x6c2, 0x6cc, 0x3, 
       0x2, 0x2, 0x2, 0x6c3, 0x6c4, 0x5, 0xc, 0x7, 0x2, 0x6c4, 0x6c6, 0x7, 
       0x58, 0x2, 0x2, 0x6c5, 0x6c7, 0x5, 0xd0, 0x69, 0x2, 0x6c6, 0x6c5, 
       0x3, 0x2, 0x2, 0x2, 0x6c6, 0x6c7, 0x3, 0x2, 0x2, 0x2, 0x6c7, 0x6c9, 
       0x3, 0x2, 0x2, 0x2, 0x6c8, 0x6ca, 0x5, 0xf6, 0x7c, 0x2, 0x6c9, 0x6c8, 
       0x3, 0x2, 0x2, 0x2, 0x6c9, 0x6ca, 0x3, 0x2, 0x2, 0x2, 0x6ca, 0x6cc, 
       0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6b4, 0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6bb, 
       0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6bf, 0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6c3, 
       0x3, 0x2, 0x2, 0x2, 0x6cc, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x6cd, 0x6cf, 
       0x5, 0xf8, 0x7d, 0x2, 0x6ce, 0x6d0, 0x5, 0xf6, 0x7c, 0x2, 0x6cf, 
       0x6ce, 0x3, 0x2, 0x2, 0x2, 0x6cf, 0x6d0, 0x3, 0x2, 0x2, 0x2, 0x6d0, 
       0xf7, 0x3, 0x2, 0x2, 0x2, 0x6d1, 0x6d2, 0x9, 0x6, 0x2, 0x2, 0x6d2, 
       0xf9, 0x3, 0x2, 0x2, 0x2, 0x6d3, 0x6d4, 0x9, 0x7, 0x2, 0x2, 0x6d4, 
       0xfb, 0x3, 0x2, 0x2, 0x2, 0x6d5, 0x6d7, 0x7, 0x7e, 0x2, 0x2, 0x6d6, 
       0x6d5, 0x3, 0x2, 0x2, 0x2, 0x6d6, 0x6d7, 0x3, 0x2, 0x2, 0x2, 0x6d7, 
       0x6d8, 0x3, 0x2, 0x2, 0x2, 0x6d8, 0x6d9, 0x5, 0x6, 0x4, 0x2, 0x6d9, 
       0xfd, 0x3, 0x2, 0x2, 0x2, 0x6da, 0x6dc, 0x5, 0x94, 0x4b, 0x2, 0x6db, 
       0x6dd, 0x5, 0x100, 0x81, 0x2, 0x6dc, 0x6db, 0x3, 0x2, 0x2, 0x2, 0x6dc, 
       0x6dd, 0x3, 0x2, 0x2, 0x2, 0x6dd, 0xff, 0x3, 0x2, 0x2, 0x2, 0x6de, 
       0x6e7, 0x5, 0x102, 0x82, 0x2, 0x6df, 0x6e1, 0x5, 0x104, 0x83, 0x2, 
       0x6e0, 0x6df, 0x3, 0x2, 0x2, 0x2, 0x6e0, 0x6e1, 0x3, 0x2, 0x2, 0x2, 
       0x6e1, 0x6e2, 0x3, 0x2, 0x2, 0x2, 0x6e2, 0x6e3, 0x5, 0xf0, 0x79, 
       0x2, 0x6e3, 0x6e4, 0x5, 0xf2, 0x7a, 0x2, 0x6e4, 0x6e7, 0x3, 0x2, 
       0x2, 0x2, 0x6e5, 0x6e7, 0x5, 0x106, 0x84, 0x2, 0x6e6, 0x6de, 0x3, 
       0x2, 0x2, 0x2, 0x6e6, 0x6e0, 0x3, 0x2, 0x2, 0x2, 0x6e6, 0x6e5, 0x3, 
       0x2, 0x2, 0x2, 0x6e7, 0x101, 0x3, 0x2, 0x2, 0x2, 0x6e8, 0x6ee, 0x5, 
       0x104, 0x83, 0x2, 0x6e9, 0x6eb, 0x5, 0xf4, 0x7b, 0x2, 0x6ea, 0x6ec, 
       0x5, 0x102, 0x82, 0x2, 0x6eb, 0x6ea, 0x3, 0x2, 0x2, 0x2, 0x6eb, 0x6ec, 
       0x3, 0x2, 0x2, 0x2, 0x6ec, 0x6ee, 0x3, 0x2, 0x2, 0x2, 0x6ed, 0x6e8, 
       0x3, 0x2, 0x2, 0x2, 0x6ed, 0x6e9, 0x3, 0x2, 0x2, 0x2, 0x6ee, 0x103, 
       0x3, 0x2, 0x2, 0x2, 0x6ef, 0x6f0, 0x8, 0x83, 0x1, 0x2, 0x6f0, 0x6fe, 
       0x5, 0xf0, 0x79, 0x2, 0x6f1, 0x6f3, 0x7, 0x52, 0x2, 0x2, 0x6f2, 0x6f4, 
       0x5, 0x5a, 0x2e, 0x2, 0x6f3, 0x6f2, 0x3, 0x2, 0x2, 0x2, 0x6f3, 0x6f4, 
       0x3, 0x2, 0x2, 0x2, 0x6f4, 0x6f5, 0x3, 0x2, 0x2, 0x2, 0x6f5, 0x6f7, 
       0x7, 0x53, 0x2, 0x2, 0x6f6, 0x6f8, 0x5, 0xd0, 0x69, 0x2, 0x6f7, 0x6f6, 
       0x3, 0x2, 0x2, 0x2, 0x6f7, 0x6f8, 0x3, 0x2, 0x2, 0x2, 0x6f8, 0x6fe, 
       0x3, 0x2, 0x2, 0x2, 0x6f9, 0x6fa, 0x7, 0x50, 0x2, 0x2, 0x6fa, 0x6fb, 
       0x5, 0x102, 0x82, 0x2, 0x6fb, 0x6fc, 0x7, 0x51, 0x2, 0x2, 0x6fc, 
       0x6fe, 0x3, 0x2, 0x2, 0x2, 0x6fd, 0x6ef, 0x3, 0x2, 0x2, 0x2, 0x6fd, 
       0x6f1, 0x3, 0x2, 0x2, 0x2, 0x6fd, 0x6f9, 0x3, 0x2, 0x2, 0x2, 0x6fe, 
       0x70c, 0x3, 0x2, 0x2, 0x2, 0x6ff, 0x700, 0xc, 0x7, 0x2, 0x2, 0x700, 
       0x70b, 0x5, 0xf0, 0x79, 0x2, 0x701, 0x702, 0xc, 0x5, 0x2, 0x2, 0x702, 
       0x704, 0x7, 0x52, 0x2, 0x2, 0x703, 0x705, 0x5, 0x5a, 0x2e, 0x2, 0x704, 
       0x703, 0x3, 0x2, 0x2, 0x2, 0x704, 0x705, 0x3, 0x2, 0x2, 0x2, 0x705, 
       0x706, 0x3, 0x2, 0x2, 0x2, 0x706, 0x708, 0x7, 0x53, 0x2, 0x2, 0x707, 
       0x709, 0x5, 0xd0, 0x69, 0x2, 0x708, 0x707, 0x3, 0x2, 0x2, 0x2, 0x708, 
       0x709, 0x3, 0x2, 0x2, 0x2, 0x709, 0x70b, 0x3, 0x2, 0x2, 0x2, 0x70a, 
       0x6ff, 0x3, 0x2, 0x2, 0x2, 0x70a, 0x701, 0x3, 0x2, 0x2, 0x2, 0x70b, 
       0x70e, 0x3, 0x2, 0x2, 0x2, 0x70c, 0x70a, 0x3, 0x2, 0x2, 0x2, 0x70c, 
       0x70d, 0x3, 0x2, 0x2, 0x2, 0x70d, 0x105, 0x3, 0x2, 0x2, 0x2, 0x70e, 
       0x70c, 0x3, 0x2, 0x2, 0x2, 0x70f, 0x714, 0x5, 0x108, 0x85, 0x2, 0x710, 
       0x711, 0x5, 0xf4, 0x7b, 0x2, 0x711, 0x712, 0x5, 0x106, 0x84, 0x2, 
       0x712, 0x714, 0x3, 0x2, 0x2, 0x2, 0x713, 0x70f, 0x3, 0x2, 0x2, 0x2, 
       0x713, 0x710, 0x3, 0x2, 0x2, 0x2, 0x714, 0x107, 0x3, 0x2, 0x2, 0x2, 
       0x715, 0x716, 0x8, 0x85, 0x1, 0x2, 0x716, 0x717, 0x7, 0x7e, 0x2, 
       0x2, 0x717, 0x725, 0x3, 0x2, 0x2, 0x2, 0x718, 0x719, 0xc, 0x5, 0x2, 
       0x2, 0x719, 0x724, 0x5, 0xf0, 0x79, 0x2, 0x71a, 0x71b, 0xc, 0x4, 
       0x2, 0x2, 0x71b, 0x71d, 0x7, 0x52, 0x2, 0x2, 0x71c, 0x71e, 0x5, 0x5a, 
       0x2e, 0x2, 0x71d, 0x71c, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x71e, 0x3, 0x2, 
       0x2, 0x2, 0x71e, 0x71f, 0x3, 0x2, 0x2, 0x2, 0x71f, 0x721, 0x7, 0x53, 
       0x2, 0x2, 0x720, 0x722, 0x5, 0xd0, 0x69, 0x2, 0x721, 0x720, 0x3, 
       0x2, 0x2, 0x2, 0x721, 0x722, 0x3, 0x2, 0x2, 0x2, 0x722, 0x724, 0x3, 
       0x2, 0x2, 0x2, 0x723, 0x718, 0x3, 0x2, 0x2, 0x2, 0x723, 0x71a, 0x3, 
       0x2, 0x2, 0x2, 0x724, 0x727, 0x3, 0x2, 0x2, 0x2, 0x725, 0x723, 0x3, 
       0x2, 0x2, 0x2, 0x725, 0x726, 0x3, 0x2, 0x2, 0x2, 0x726, 0x109, 0x3, 
       0x2, 0x2, 0x2, 0x727, 0x725, 0x3, 0x2, 0x2, 0x2, 0x728, 0x72a, 0x5, 
       0x10c, 0x87, 0x2, 0x729, 0x728, 0x3, 0x2, 0x2, 0x2, 0x729, 0x72a, 
       0x3, 0x2, 0x2, 0x2, 0x72a, 0x72c, 0x3, 0x2, 0x2, 0x2, 0x72b, 0x72d, 
       0x7, 0x7e, 0x2, 0x2, 0x72c, 0x72b, 0x3, 0x2, 0x2, 0x2, 0x72c, 0x72d, 
       0x3, 0x2, 0x2, 0x2, 0x72d, 0x733, 0x3, 0x2, 0x2, 0x2, 0x72e, 0x72f, 
       0x5, 0x10c, 0x87, 0x2, 0x72f, 0x730, 0x7, 0x75, 0x2, 0x2, 0x730, 
       0x731, 0x7, 0x7e, 0x2, 0x2, 0x731, 0x733, 0x3, 0x2, 0x2, 0x2, 0x732, 
       0x729, 0x3, 0x2, 0x2, 0x2, 0x732, 0x72e, 0x3, 0x2, 0x2, 0x2, 0x733, 
       0x10b, 0x3, 0x2, 0x2, 0x2, 0x734, 0x735, 0x8, 0x87, 0x1, 0x2, 0x735, 
       0x736, 0x5, 0x10e, 0x88, 0x2, 0x736, 0x73c, 0x3, 0x2, 0x2, 0x2, 0x737, 
       0x738, 0xc, 0x3, 0x2, 0x2, 0x738, 0x739, 0x7, 0x75, 0x2, 0x2, 0x739, 
       0x73b, 0x5, 0x10e, 0x88, 0x2, 0x73a, 0x737, 0x3, 0x2, 0x2, 0x2, 0x73b, 
       0x73e, 0x3, 0x2, 0x2, 0x2, 0x73c, 0x73a, 0x3, 0x2, 0x2, 0x2, 0x73c, 
       0x73d, 0x3, 0x2, 0x2, 0x2, 0x73d, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x73e, 
       0x73c, 0x3, 0x2, 0x2, 0x2, 0x73f, 0x741, 0x5, 0xd0, 0x69, 0x2, 0x740, 
       0x73f, 0x3, 0x2, 0x2, 0x2, 0x740, 0x741, 0x3, 0x2, 0x2, 0x2, 0x741, 
       0x742, 0x3, 0x2, 0x2, 0x2, 0x742, 0x743, 0x5, 0x88, 0x45, 0x2, 0x743, 
       0x744, 0x5, 0xea, 0x76, 0x2, 0x744, 0x75f, 0x3, 0x2, 0x2, 0x2, 0x745, 
       0x747, 0x5, 0xd0, 0x69, 0x2, 0x746, 0x745, 0x3, 0x2, 0x2, 0x2, 0x746, 
       0x747, 0x3, 0x2, 0x2, 0x2, 0x747, 0x748, 0x3, 0x2, 0x2, 0x2, 0x748, 
       0x749, 0x5, 0x88, 0x45, 0x2, 0x749, 0x74a, 0x5, 0xea, 0x76, 0x2, 
       0x74a, 0x74b, 0x7, 0x60, 0x2, 0x2, 0x74b, 0x74c, 0x5, 0x118, 0x8d, 
       0x2, 0x74c, 0x75f, 0x3, 0x2, 0x2, 0x2, 0x74d, 0x74f, 0x5, 0xd0, 0x69, 
       0x2, 0x74e, 0x74d, 0x3, 0x2, 0x2, 0x2, 0x74e, 0x74f, 0x3, 0x2, 0x2, 
       0x2, 0x74f, 0x750, 0x3, 0x2, 0x2, 0x2, 0x750, 0x752, 0x5, 0x88, 0x45, 
       0x2, 0x751, 0x753, 0x5, 0x100, 0x81, 0x2, 0x752, 0x751, 0x3, 0x2, 
       0x2, 0x2, 0x752, 0x753, 0x3, 0x2, 0x2, 0x2, 0x753, 0x75f, 0x3, 0x2, 
       0x2, 0x2, 0x754, 0x756, 0x5, 0xd0, 0x69, 0x2, 0x755, 0x754, 0x3, 
       0x2, 0x2, 0x2, 0x755, 0x756, 0x3, 0x2, 0x2, 0x2, 0x756, 0x757, 0x3, 
       0x2, 0x2, 0x2, 0x757, 0x759, 0x5, 0x88, 0x45, 0x2, 0x758, 0x75a, 
       0x5, 0x100, 0x81, 0x2, 0x759, 0x758, 0x3, 0x2, 0x2, 0x2, 0x759, 0x75a, 
       0x3, 0x2, 0x2, 0x2, 0x75a, 0x75b, 0x3, 0x2, 0x2, 0x2, 0x75b, 0x75c, 
       0x7, 0x60, 0x2, 0x2, 0x75c, 0x75d, 0x5, 0x118, 0x8d, 0x2, 0x75d, 
       0x75f, 0x3, 0x2, 0x2, 0x2, 0x75e, 0x740, 0x3, 0x2, 0x2, 0x2, 0x75e, 
       0x746, 0x3, 0x2, 0x2, 0x2, 0x75e, 0x74e, 0x3, 0x2, 0x2, 0x2, 0x75e, 
       0x755, 0x3, 0x2, 0x2, 0x2, 0x75f, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x760, 
       0x762, 0x5, 0xd0, 0x69, 0x2, 0x761, 0x760, 0x3, 0x2, 0x2, 0x2, 0x761, 
       0x762, 0x3, 0x2, 0x2, 0x2, 0x762, 0x764, 0x3, 0x2, 0x2, 0x2, 0x763, 
       0x765, 0x5, 0x88, 0x45, 0x2, 0x764, 0x763, 0x3, 0x2, 0x2, 0x2, 0x764, 
       0x765, 0x3, 0x2, 0x2, 0x2, 0x765, 0x766, 0x3, 0x2, 0x2, 0x2, 0x766, 
       0x768, 0x5, 0xea, 0x76, 0x2, 0x767, 0x769, 0x5, 0x132, 0x9a, 0x2, 
       0x768, 0x767, 0x3, 0x2, 0x2, 0x2, 0x768, 0x769, 0x3, 0x2, 0x2, 0x2, 
       0x769, 0x76a, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x76b, 0x5, 0x112, 0x8a, 
       0x2, 0x76b, 0x111, 0x3, 0x2, 0x2, 0x2, 0x76c, 0x76e, 0x5, 0x14a, 
       0xa6, 0x2, 0x76d, 0x76c, 0x3, 0x2, 0x2, 0x2, 0x76d, 0x76e, 0x3, 0x2, 
       0x2, 0x2, 0x76e, 0x76f, 0x3, 0x2, 0x2, 0x2, 0x76f, 0x778, 0x5, 0x62, 
       0x32, 0x2, 0x770, 0x778, 0x5, 0x170, 0xb9, 0x2, 0x771, 0x772, 0x7, 
       0x60, 0x2, 0x2, 0x772, 0x773, 0x7, 0x16, 0x2, 0x2, 0x773, 0x778, 
       0x7, 0x7b, 0x2, 0x2, 0x774, 0x775, 0x7, 0x60, 0x2, 0x2, 0x775, 0x776, 
       0x7, 0x17, 0x2, 0x2, 0x776, 0x778, 0x7, 0x7b, 0x2, 0x2, 0x777, 0x76d, 
       0x3, 0x2, 0x2, 0x2, 0x777, 0x770, 0x3, 0x2, 0x2, 0x2, 0x777, 0x771, 
       0x3, 0x2, 0x2, 0x2, 0x777, 0x774, 0x3, 0x2, 0x2, 0x2, 0x778, 0x113, 
       0x3, 0x2, 0x2, 0x2, 0x779, 0x77f, 0x5, 0x116, 0x8c, 0x2, 0x77a, 0x77b, 
       0x7, 0x50, 0x2, 0x2, 0x77b, 0x77c, 0x5, 0x22, 0x12, 0x2, 0x77c, 0x77d, 
       0x7, 0x51, 0x2, 0x2, 0x77d, 0x77f, 0x3, 0x2, 0x2, 0x2, 0x77e, 0x779, 
       0x3, 0x2, 0x2, 0x2, 0x77e, 0x77a, 0x3, 0x2, 0x2, 0x2, 0x77f, 0x115, 
       0x3, 0x2, 0x2, 0x2, 0x780, 0x781, 0x7, 0x60, 0x2, 0x2, 0x781, 0x784, 
       0x5, 0x118, 0x8d, 0x2, 0x782, 0x784, 0x5, 0x11c, 0x8f, 0x2, 0x783, 
       0x780, 0x3, 0x2, 0x2, 0x2, 0x783, 0x782, 0x3, 0x2, 0x2, 0x2, 0x784, 
       0x117, 0x3, 0x2, 0x2, 0x2, 0x785, 0x788, 0x5, 0x54, 0x2b, 0x2, 0x786, 
       0x788, 0x5, 0x11c, 0x8f, 0x2, 0x787, 0x785, 0x3, 0x2, 0x2, 0x2, 0x787, 
       0x786, 0x3, 0x2, 0x2, 0x2, 0x788, 0x119, 0x3, 0x2, 0x2, 0x2, 0x789, 
       0x78a, 0x8, 0x8e, 0x1, 0x2, 0x78a, 0x78c, 0x5, 0x118, 0x8d, 0x2, 
       0x78b, 0x78d, 0x7, 0x7e, 0x2, 0x2, 0x78c, 0x78b, 0x3, 0x2, 0x2, 0x2, 
       0x78c, 0x78d, 0x3, 0x2, 0x2, 0x2, 0x78d, 0x796, 0x3, 0x2, 0x2, 0x2, 
       0x78e, 0x78f, 0xc, 0x3, 0x2, 0x2, 0x78f, 0x790, 0x7, 0x75, 0x2, 0x2, 
       0x790, 0x792, 0x5, 0x118, 0x8d, 0x2, 0x791, 0x793, 0x7, 0x7e, 0x2, 
       0x2, 0x792, 0x791, 0x3, 0x2, 0x2, 0x2, 0x792, 0x793, 0x3, 0x2, 0x2, 
       0x2, 0x793, 0x795, 0x3, 0x2, 0x2, 0x2, 0x794, 0x78e, 0x3, 0x2, 0x2, 
       0x2, 0x795, 0x798, 0x3, 0x2, 0x2, 0x2, 0x796, 0x794, 0x3, 0x2, 0x2, 
       0x2, 0x796, 0x797, 0x3, 0x2, 0x2, 0x2, 0x797, 0x11b, 0x3, 0x2, 0x2, 
       0x2, 0x798, 0x796, 0x3, 0x2, 0x2, 0x2, 0x799, 0x79a, 0x7, 0x54, 0x2, 
       0x2, 0x79a, 0x79c, 0x5, 0x11a, 0x8e, 0x2, 0x79b, 0x79d, 0x7, 0x75, 
       0x2, 0x2, 0x79c, 0x79b, 0x3, 0x2, 0x2, 0x2, 0x79c, 0x79d, 0x3, 0x2, 
       0x2, 0x2, 0x79d, 0x79e, 0x3, 0x2, 0x2, 0x2, 0x79e, 0x79f, 0x7, 0x55, 
       0x2, 0x2, 0x79f, 0x7a3, 0x3, 0x2, 0x2, 0x2, 0x7a0, 0x7a1, 0x7, 0x54, 
       0x2, 0x2, 0x7a1, 0x7a3, 0x7, 0x55, 0x2, 0x2, 0x7a2, 0x799, 0x3, 0x2, 
       0x2, 0x2, 0x7a2, 0x7a0, 0x3, 0x2, 0x2, 0x2, 0x7a3, 0x11d, 0x3, 0x2, 
       0x2, 0x2, 0x7a4, 0x7a7, 0x7, 0x7f, 0x2, 0x2, 0x7a5, 0x7a7, 0x5, 0x15e, 
       0xb0, 0x2, 0x7a6, 0x7a4, 0x3, 0x2, 0x2, 0x2, 0x7a6, 0x7a5, 0x3, 0x2, 
       0x2, 0x2, 0x7a7, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x7a8, 0x7a9, 0x5, 0x122, 
       0x92, 0x2, 0x7a9, 0x7ab, 0x7, 0x54, 0x2, 0x2, 0x7aa, 0x7ac, 0x5, 
       0x12a, 0x96, 0x2, 0x7ab, 0x7aa, 0x3, 0x2, 0x2, 0x2, 0x7ab, 0x7ac, 
       0x3, 0x2, 0x2, 0x2, 0x7ac, 0x7ad, 0x3, 0x2, 0x2, 0x2, 0x7ad, 0x7ae, 
       0x7, 0x55, 0x2, 0x2, 0x7ae, 0x121, 0x3, 0x2, 0x2, 0x2, 0x7af, 0x7b1, 
       0x5, 0x128, 0x95, 0x2, 0x7b0, 0x7b2, 0x5, 0xd0, 0x69, 0x2, 0x7b1, 
       0x7b0, 0x3, 0x2, 0x2, 0x2, 0x7b1, 0x7b2, 0x3, 0x2, 0x2, 0x2, 0x7b2, 
       0x7b3, 0x3, 0x2, 0x2, 0x2, 0x7b3, 0x7b5, 0x5, 0x124, 0x93, 0x2, 0x7b4, 
       0x7b6, 0x5, 0x126, 0x94, 0x2, 0x7b5, 0x7b4, 0x3, 0x2, 0x2, 0x2, 0x7b5, 
       0x7b6, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7b8, 0x3, 0x2, 0x2, 0x2, 0x7b7, 
       0x7b9, 0x5, 0x138, 0x9d, 0x2, 0x7b8, 0x7b7, 0x3, 0x2, 0x2, 0x2, 0x7b8, 
       0x7b9, 0x3, 0x2, 0x2, 0x2, 0x7b9, 0x7c2, 0x3, 0x2, 0x2, 0x2, 0x7ba, 
       0x7bc, 0x5, 0x128, 0x95, 0x2, 0x7bb, 0x7bd, 0x5, 0xd0, 0x69, 0x2, 
       0x7bc, 0x7bb, 0x3, 0x2, 0x2, 0x2, 0x7bc, 0x7bd, 0x3, 0x2, 0x2, 0x2, 
       0x7bd, 0x7bf, 0x3, 0x2, 0x2, 0x2, 0x7be, 0x7c0, 0x5, 0x138, 0x9d, 
       0x2, 0x7bf, 0x7be, 0x3, 0x2, 0x2, 0x2, 0x7bf, 0x7c0, 0x3, 0x2, 0x2, 
       0x2, 0x7c0, 0x7c2, 0x3, 0x2, 0x2, 0x2, 0x7c1, 0x7af, 0x3, 0x2, 0x2, 
       0x2, 0x7c1, 0x7ba, 0x3, 0x2, 0x2, 0x2, 0x7c2, 0x123, 0x3, 0x2, 0x2, 
       0x2, 0x7c3, 0x7c5, 0x5, 0xc, 0x7, 0x2, 0x7c4, 0x7c3, 0x3, 0x2, 0x2, 
       0x2, 0x7c4, 0x7c5, 0x3, 0x2, 0x2, 0x2, 0x7c5, 0x7c6, 0x3, 0x2, 0x2, 
       0x2, 0x7c6, 0x7c7, 0x5, 0x11e, 0x90, 0x2, 0x7c7, 0x125, 0x3, 0x2, 
       0x2, 0x2, 0x7c8, 0x7c9, 0x7, 0x21, 0x2, 0x2, 0x7c9, 0x127, 0x3, 0x2, 
       0x2, 0x2, 0x7ca, 0x7cb, 0x9, 0x8, 0x2, 0x2, 0x7cb, 0x129, 0x3, 0x2, 
       0x2, 0x2, 0x7cc, 0x7ce, 0x5, 0x12c, 0x97, 0x2, 0x7cd, 0x7cf, 0x5, 
       0x12a, 0x96, 0x2, 0x7ce, 0x7cd, 0x3, 0x2, 0x2, 0x2, 0x7ce, 0x7cf, 
       0x3, 0x2, 0x2, 0x2, 0x7cf, 0x7d6, 0x3, 0x2, 0x2, 0x2, 0x7d0, 0x7d1, 
       0x5, 0x142, 0xa2, 0x2, 0x7d1, 0x7d3, 0x7, 0x79, 0x2, 0x2, 0x7d2, 
       0x7d4, 0x5, 0x12a, 0x96, 0x2, 0x7d3, 0x7d2, 0x3, 0x2, 0x2, 0x2, 0x7d3, 
       0x7d4, 0x3, 0x2, 0x2, 0x2, 0x7d4, 0x7d6, 0x3, 0x2, 0x2, 0x2, 0x7d5, 
       0x7cc, 0x3, 0x2, 0x2, 0x2, 0x7d5, 0x7d0, 0x3, 0x2, 0x2, 0x2, 0x7d6, 
       0x12b, 0x3, 0x2, 0x2, 0x2, 0x7d7, 0x7d9, 0x5, 0xd0, 0x69, 0x2, 0x7d8, 
       0x7d7, 0x3, 0x2, 0x2, 0x2, 0x7d8, 0x7d9, 0x3, 0x2, 0x2, 0x2, 0x7d9, 
       0x7db, 0x3, 0x2, 0x2, 0x2, 0x7da, 0x7dc, 0x5, 0x88, 0x45, 0x2, 0x7db, 
       0x7da, 0x3, 0x2, 0x2, 0x2, 0x7db, 0x7dc, 0x3, 0x2, 0x2, 0x2, 0x7dc, 
       0x7de, 0x3, 0x2, 0x2, 0x2, 0x7dd, 0x7df, 0x5, 0x12e, 0x98, 0x2, 0x7de, 
       0x7dd, 0x3, 0x2, 0x2, 0x2, 0x7de, 0x7df, 0x3, 0x2, 0x2, 0x2, 0x7df, 
       0x7e0, 0x3, 0x2, 0x2, 0x2, 0x7e0, 0x7e8, 0x7, 0x7b, 0x2, 0x2, 0x7e1, 
       0x7e8, 0x5, 0x110, 0x89, 0x2, 0x7e2, 0x7e8, 0x5, 0xc8, 0x65, 0x2, 
       0x7e3, 0x7e8, 0x5, 0x80, 0x41, 0x2, 0x7e4, 0x7e8, 0x5, 0x156, 0xac, 
       0x2, 0x7e5, 0x7e8, 0x5, 0x7c, 0x3f, 0x2, 0x7e6, 0x7e8, 0x5, 0x82, 
       0x42, 0x2, 0x7e7, 0x7d8, 0x3, 0x2, 0x2, 0x2, 0x7e7, 0x7e1, 0x3, 0x2, 
       0x2, 0x2, 0x7e7, 0x7e2, 0x3, 0x2, 0x2, 0x2, 0x7e7, 0x7e3, 0x3, 0x2, 
       0x2, 0x2, 0x7e7, 0x7e4, 0x3, 0x2, 0x2, 0x2, 0x7e7, 0x7e5, 0x3, 0x2, 
       0x2, 0x2, 0x7e7, 0x7e6, 0x3, 0x2, 0x2, 0x2, 0x7e8, 0x12d, 0x3, 0x2, 
       0x2, 0x2, 0x7e9, 0x7ea, 0x8, 0x98, 0x1, 0x2, 0x7ea, 0x7eb, 0x5, 0x130, 
       0x99, 0x2, 0x7eb, 0x7f1, 0x3, 0x2, 0x2, 0x2, 0x7ec, 0x7ed, 0xc, 0x3, 
       0x2, 0x2, 0x7ed, 0x7ee, 0x7, 0x75, 0x2, 0x2, 0x7ee, 0x7f0, 0x5, 0x130, 
       0x99, 0x2, 0x7ef, 0x7ec, 0x3, 0x2, 0x2, 0x2, 0x7f0, 0x7f3, 0x3, 0x2, 
       0x2, 0x2, 0x7f1, 0x7ef, 0x3, 0x2, 0x2, 0x2, 0x7f1, 0x7f2, 0x3, 0x2, 
       0x2, 0x2, 0x7f2, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x7f3, 0x7f1, 0x3, 0x2, 
       0x2, 0x2, 0x7f4, 0x7f6, 0x5, 0xea, 0x76, 0x2, 0x7f5, 0x7f7, 0x5, 
       0x132, 0x9a, 0x2, 0x7f6, 0x7f5, 0x3, 0x2, 0x2, 0x2, 0x7f6, 0x7f7, 
       0x3, 0x2, 0x2, 0x2, 0x7f7, 0x7f9, 0x3, 0x2, 0x2, 0x2, 0x7f8, 0x7fa, 
       0x5, 0x136, 0x9c, 0x2, 0x7f9, 0x7f8, 0x3, 0x2, 0x2, 0x2, 0x7f9, 0x7fa, 
       0x3, 0x2, 0x2, 0x2, 0x7fa, 0x808, 0x3, 0x2, 0x2, 0x2, 0x7fb, 0x7fd, 
       0x5, 0xea, 0x76, 0x2, 0x7fc, 0x7fe, 0x5, 0x116, 0x8c, 0x2, 0x7fd, 
       0x7fc, 0x3, 0x2, 0x2, 0x2, 0x7fd, 0x7fe, 0x3, 0x2, 0x2, 0x2, 0x7fe, 
       0x808, 0x3, 0x2, 0x2, 0x2, 0x7ff, 0x801, 0x7, 0x7f, 0x2, 0x2, 0x800, 
       0x7ff, 0x3, 0x2, 0x2, 0x2, 0x800, 0x801, 0x3, 0x2, 0x2, 0x2, 0x801, 
       0x803, 0x3, 0x2, 0x2, 0x2, 0x802, 0x804, 0x5, 0xd0, 0x69, 0x2, 0x803, 
       0x802, 0x3, 0x2, 0x2, 0x2, 0x803, 0x804, 0x3, 0x2, 0x2, 0x2, 0x804, 
       0x805, 0x3, 0x2, 0x2, 0x2, 0x805, 0x806, 0x7, 0x79, 0x2, 0x2, 0x806, 
       0x808, 0x5, 0x5a, 0x2e, 0x2, 0x807, 0x7f4, 0x3, 0x2, 0x2, 0x2, 0x807, 
       0x7fb, 0x3, 0x2, 0x2, 0x2, 0x807, 0x800, 0x3, 0x2, 0x2, 0x2, 0x808, 
       0x131, 0x3, 0x2, 0x2, 0x2, 0x809, 0x80a, 0x8, 0x9a, 0x1, 0x2, 0x80a, 
       0x80b, 0x5, 0x134, 0x9b, 0x2, 0x80b, 0x810, 0x3, 0x2, 0x2, 0x2, 0x80c, 
       0x80d, 0xc, 0x3, 0x2, 0x2, 0x80d, 0x80f, 0x5, 0x134, 0x9b, 0x2, 0x80e, 
       0x80c, 0x3, 0x2, 0x2, 0x2, 0x80f, 0x812, 0x3, 0x2, 0x2, 0x2, 0x810, 
       0x80e, 0x3, 0x2, 0x2, 0x2, 0x810, 0x811, 0x3, 0x2, 0x2, 0x2, 0x811, 
       0x133, 0x3, 0x2, 0x2, 0x2, 0x812, 0x810, 0x3, 0x2, 0x2, 0x2, 0x813, 
       0x814, 0x9, 0x9, 0x2, 0x2, 0x814, 0x135, 0x3, 0x2, 0x2, 0x2, 0x815, 
       0x816, 0x7, 0x60, 0x2, 0x2, 0x816, 0x817, 0x7, 0x82, 0x2, 0x2, 0x817, 
       0x818, 0x8, 0x9c, 0x1, 0x2, 0x818, 0x137, 0x3, 0x2, 0x2, 0x2, 0x819, 
       0x81a, 0x7, 0x79, 0x2, 0x2, 0x81a, 0x81b, 0x5, 0x13a, 0x9e, 0x2, 
       0x81b, 0x139, 0x3, 0x2, 0x2, 0x2, 0x81c, 0x81d, 0x8, 0x9e, 0x1, 0x2, 
       0x81d, 0x81f, 0x5, 0x13c, 0x9f, 0x2, 0x81e, 0x820, 0x7, 0x7e, 0x2, 
       0x2, 0x81f, 0x81e, 0x3, 0x2, 0x2, 0x2, 0x81f, 0x820, 0x3, 0x2, 0x2, 
       0x2, 0x820, 0x829, 0x3, 0x2, 0x2, 0x2, 0x821, 0x822, 0xc, 0x3, 0x2, 
       0x2, 0x822, 0x823, 0x7, 0x75, 0x2, 0x2, 0x823, 0x825, 0x5, 0x13c, 
       0x9f, 0x2, 0x824, 0x826, 0x7, 0x7e, 0x2, 0x2, 0x825, 0x824, 0x3, 
       0x2, 0x2, 0x2, 0x825, 0x826, 0x3, 0x2, 0x2, 0x2, 0x826, 0x828, 0x3, 
       0x2, 0x2, 0x2, 0x827, 0x821, 0x3, 0x2, 0x2, 0x2, 0x828, 0x82b, 0x3, 
       0x2, 0x2, 0x2, 0x829, 0x827, 0x3, 0x2, 0x2, 0x2, 0x829, 0x82a, 0x3, 
       0x2, 0x2, 0x2, 0x82a, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x82b, 0x829, 0x3, 
       0x2, 0x2, 0x2, 0x82c, 0x82e, 0x5, 0xd0, 0x69, 0x2, 0x82d, 0x82c, 
       0x3, 0x2, 0x2, 0x2, 0x82d, 0x82e, 0x3, 0x2, 0x2, 0x2, 0x82e, 0x82f, 
       0x3, 0x2, 0x2, 0x2, 0x82f, 0x842, 0x5, 0x140, 0xa1, 0x2, 0x830, 0x832, 
       0x5, 0xd0, 0x69, 0x2, 0x831, 0x830, 0x3, 0x2, 0x2, 0x2, 0x831, 0x832, 
       0x3, 0x2, 0x2, 0x2, 0x832, 0x833, 0x3, 0x2, 0x2, 0x2, 0x833, 0x835, 
       0x7, 0x4b, 0x2, 0x2, 0x834, 0x836, 0x5, 0x142, 0xa2, 0x2, 0x835, 
       0x834, 0x3, 0x2, 0x2, 0x2, 0x835, 0x836, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x837, 0x3, 0x2, 0x2, 0x2, 0x837, 0x842, 0x5, 0x140, 0xa1, 0x2, 0x838, 
       0x83a, 0x5, 0xd0, 0x69, 0x2, 0x839, 0x838, 0x3, 0x2, 0x2, 0x2, 0x839, 
       0x83a, 0x3, 0x2, 0x2, 0x2, 0x83a, 0x83b, 0x3, 0x2, 0x2, 0x2, 0x83b, 
       0x83d, 0x5, 0x142, 0xa2, 0x2, 0x83c, 0x83e, 0x7, 0x4b, 0x2, 0x2, 
       0x83d, 0x83c, 0x3, 0x2, 0x2, 0x2, 0x83d, 0x83e, 0x3, 0x2, 0x2, 0x2, 
       0x83e, 0x83f, 0x3, 0x2, 0x2, 0x2, 0x83f, 0x840, 0x5, 0x140, 0xa1, 
       0x2, 0x840, 0x842, 0x3, 0x2, 0x2, 0x2, 0x841, 0x82d, 0x3, 0x2, 0x2, 
       0x2, 0x841, 0x831, 0x3, 0x2, 0x2, 0x2, 0x841, 0x839, 0x3, 0x2, 0x2, 
       0x2, 0x842, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x843, 0x845, 0x5, 0xc, 0x7, 
       0x2, 0x844, 0x843, 0x3, 0x2, 0x2, 0x2, 0x844, 0x845, 0x3, 0x2, 0x2, 
       0x2, 0x845, 0x846, 0x3, 0x2, 0x2, 0x2, 0x846, 0x849, 0x5, 0x11e, 
       0x90, 0x2, 0x847, 0x849, 0x5, 0x9c, 0x4f, 0x2, 0x848, 0x844, 0x3, 
       0x2, 0x2, 0x2, 0x848, 0x847, 0x3, 0x2, 0x2, 0x2, 0x849, 0x13f, 0x3, 
       0x2, 0x2, 0x2, 0x84a, 0x84b, 0x5, 0x13e, 0xa0, 0x2, 0x84b, 0x141, 
       0x3, 0x2, 0x2, 0x2, 0x84c, 0x84d, 0x9, 0xa, 0x2, 0x2, 0x84d, 0x143, 
       0x3, 0x2, 0x2, 0x2, 0x84e, 0x84f, 0x7, 0x2f, 0x2, 0x2, 0x84f, 0x850, 
       0x5, 0x146, 0xa4, 0x2, 0x850, 0x145, 0x3, 0x2, 0x2, 0x2, 0x851, 0x853, 
       0x5, 0x94, 0x4b, 0x2, 0x852, 0x854, 0x5, 0x148, 0xa5, 0x2, 0x853, 
       0x852, 0x3, 0x2, 0x2, 0x2, 0x853, 0x854, 0x3, 0x2, 0x2, 0x2, 0x854, 
       0x147, 0x3, 0x2, 0x2, 0x2, 0x855, 0x857, 0x5, 0xf4, 0x7b, 0x2, 0x856, 
       0x858, 0x5, 0x148, 0xa5, 0x2, 0x857, 0x856, 0x3, 0x2, 0x2, 0x2, 0x857, 
       0x858, 0x3, 0x2, 0x2, 0x2, 0x858, 0x149, 0x3, 0x2, 0x2, 0x2, 0x859, 
       0x85a, 0x7, 0x79, 0x2, 0x2, 0x85a, 0x85b, 0x5, 0x14c, 0xa7, 0x2, 
       0x85b, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x85c, 0x85e, 0x5, 0x14e, 0xa8, 
       0x2, 0x85d, 0x85f, 0x7, 0x7e, 0x2, 0x2, 0x85e, 0x85d, 0x3, 0x2, 0x2, 
       0x2, 0x85e, 0x85f, 0x3, 0x2, 0x2, 0x2, 0x85f, 0x868, 0x3, 0x2, 0x2, 
       0x2, 0x860, 0x862, 0x5, 0x14e, 0xa8, 0x2, 0x861, 0x863, 0x7, 0x7e, 
       0x2, 0x2, 0x862, 0x861, 0x3, 0x2, 0x2, 0x2, 0x862, 0x863, 0x3, 0x2, 
       0x2, 0x2, 0x863, 0x864, 0x3, 0x2, 0x2, 0x2, 0x864, 0x865, 0x7, 0x75, 
       0x2, 0x2, 0x865, 0x866, 0x5, 0x14c, 0xa7, 0x2, 0x866, 0x868, 0x3, 
       0x2, 0x2, 0x2, 0x867, 0x85c, 0x3, 0x2, 0x2, 0x2, 0x867, 0x860, 0x3, 
       0x2, 0x2, 0x2, 0x868, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x869, 0x86a, 0x5, 
       0x150, 0xa9, 0x2, 0x86a, 0x86c, 0x7, 0x50, 0x2, 0x2, 0x86b, 0x86d, 
       0x5, 0x22, 0x12, 0x2, 0x86c, 0x86b, 0x3, 0x2, 0x2, 0x2, 0x86c, 0x86d, 
       0x3, 0x2, 0x2, 0x2, 0x86d, 0x86e, 0x3, 0x2, 0x2, 0x2, 0x86e, 0x86f, 
       0x7, 0x51, 0x2, 0x2, 0x86f, 0x874, 0x3, 0x2, 0x2, 0x2, 0x870, 0x871, 
       0x5, 0x150, 0xa9, 0x2, 0x871, 0x872, 0x5, 0x11c, 0x8f, 0x2, 0x872, 
       0x874, 0x3, 0x2, 0x2, 0x2, 0x873, 0x869, 0x3, 0x2, 0x2, 0x2, 0x873, 
       0x870, 0x3, 0x2, 0x2, 0x2, 0x874, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x875, 
       0x878, 0x5, 0x13e, 0xa0, 0x2, 0x876, 0x878, 0x7, 0x7f, 0x2, 0x2, 
       0x877, 0x875, 0x3, 0x2, 0x2, 0x2, 0x877, 0x876, 0x3, 0x2, 0x2, 0x2, 
       0x878, 0x151, 0x3, 0x2, 0x2, 0x2, 0x879, 0x87a, 0x7, 0x2f, 0x2, 0x2, 
       0x87a, 0x87b, 0x5, 0x186, 0xc4, 0x2, 0x87b, 0x153, 0x3, 0x2, 0x2, 
       0x2, 0x87c, 0x87d, 0x7, 0x2f, 0x2, 0x2, 0x87d, 0x87e, 0x7, 0x88, 
       0x2, 0x2, 0x87e, 0x882, 0x7, 0x7f, 0x2, 0x2, 0x87f, 0x880, 0x7, 0x2f, 
       0x2, 0x2, 0x880, 0x882, 0x7, 0x8b, 0x2, 0x2, 0x881, 0x87c, 0x3, 0x2, 
       0x2, 0x2, 0x881, 0x87f, 0x3, 0x2, 0x2, 0x2, 0x882, 0x155, 0x3, 0x2, 
       0x2, 0x2, 0x883, 0x884, 0x7, 0x3f, 0x2, 0x2, 0x884, 0x885, 0x7, 0x61, 
       0x2, 0x2, 0x885, 0x886, 0x5, 0x158, 0xad, 0x2, 0x886, 0x887, 0x7, 
       0x62, 0x2, 0x2, 0x887, 0x888, 0x5, 0x78, 0x3d, 0x2, 0x888, 0x157, 
       0x3, 0x2, 0x2, 0x2, 0x889, 0x88f, 0x5, 0x15a, 0xae, 0x2, 0x88a, 0x88b, 
       0x5, 0x15a, 0xae, 0x2, 0x88b, 0x88c, 0x7, 0x75, 0x2, 0x2, 0x88c, 
       0x88d, 0x5, 0x158, 0xad, 0x2, 0x88d, 0x88f, 0x3, 0x2, 0x2, 0x2, 0x88e, 
       0x889, 0x3, 0x2, 0x2, 0x2, 0x88e, 0x88a, 0x3, 0x2, 0x2, 0x2, 0x88f, 
       0x159, 0x3, 0x2, 0x2, 0x2, 0x890, 0x893, 0x5, 0x15c, 0xaf, 0x2, 0x891, 
       0x893, 0x5, 0x10e, 0x88, 0x2, 0x892, 0x890, 0x3, 0x2, 0x2, 0x2, 0x892, 
       0x891, 0x3, 0x2, 0x2, 0x2, 0x893, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x894, 
       0x896, 0x7, 0x10, 0x2, 0x2, 0x895, 0x897, 0x7, 0x7e, 0x2, 0x2, 0x896, 
       0x895, 0x3, 0x2, 0x2, 0x2, 0x896, 0x897, 0x3, 0x2, 0x2, 0x2, 0x897, 
       0x899, 0x3, 0x2, 0x2, 0x2, 0x898, 0x89a, 0x7, 0x7f, 0x2, 0x2, 0x899, 
       0x898, 0x3, 0x2, 0x2, 0x2, 0x899, 0x89a, 0x3, 0x2, 0x2, 0x2, 0x89a, 
       0x8c5, 0x3, 0x2, 0x2, 0x2, 0x89b, 0x89d, 0x7, 0x10, 0x2, 0x2, 0x89c, 
       0x89e, 0x7, 0x7f, 0x2, 0x2, 0x89d, 0x89c, 0x3, 0x2, 0x2, 0x2, 0x89d, 
       0x89e, 0x3, 0x2, 0x2, 0x2, 0x89e, 0x89f, 0x3, 0x2, 0x2, 0x2, 0x89f, 
       0x8a0, 0x7, 0x60, 0x2, 0x2, 0x8a0, 0x8c5, 0x5, 0xfe, 0x80, 0x2, 0x8a1, 
       0x8a3, 0x7, 0x47, 0x2, 0x2, 0x8a2, 0x8a4, 0x7, 0x7e, 0x2, 0x2, 0x8a3, 
       0x8a2, 0x3, 0x2, 0x2, 0x2, 0x8a3, 0x8a4, 0x3, 0x2, 0x2, 0x2, 0x8a4, 
       0x8a6, 0x3, 0x2, 0x2, 0x2, 0x8a5, 0x8a7, 0x7, 0x7f, 0x2, 0x2, 0x8a6, 
       0x8a5, 0x3, 0x2, 0x2, 0x2, 0x8a6, 0x8a7, 0x3, 0x2, 0x2, 0x2, 0x8a7, 
       0x8c5, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x8aa, 0x7, 0x47, 0x2, 0x2, 0x8a9, 
       0x8ab, 0x7, 0x7f, 0x2, 0x2, 0x8aa, 0x8a9, 0x3, 0x2, 0x2, 0x2, 0x8aa, 
       0x8ab, 0x3, 0x2, 0x2, 0x2, 0x8ab, 0x8ac, 0x3, 0x2, 0x2, 0x2, 0x8ac, 
       0x8ad, 0x7, 0x60, 0x2, 0x2, 0x8ad, 0x8c5, 0x5, 0xfe, 0x80, 0x2, 0x8ae, 
       0x8af, 0x7, 0x3f, 0x2, 0x2, 0x8af, 0x8b0, 0x7, 0x61, 0x2, 0x2, 0x8b0, 
       0x8b1, 0x5, 0x158, 0xad, 0x2, 0x8b1, 0x8b2, 0x7, 0x62, 0x2, 0x2, 
       0x8b2, 0x8b4, 0x7, 0x10, 0x2, 0x2, 0x8b3, 0x8b5, 0x7, 0x7e, 0x2, 
       0x2, 0x8b4, 0x8b3, 0x3, 0x2, 0x2, 0x2, 0x8b4, 0x8b5, 0x3, 0x2, 0x2, 
       0x2, 0x8b5, 0x8b7, 0x3, 0x2, 0x2, 0x2, 0x8b6, 0x8b8, 0x7, 0x7f, 0x2, 
       0x2, 0x8b7, 0x8b6, 0x3, 0x2, 0x2, 0x2, 0x8b7, 0x8b8, 0x3, 0x2, 0x2, 
       0x2, 0x8b8, 0x8c5, 0x3, 0x2, 0x2, 0x2, 0x8b9, 0x8ba, 0x7, 0x3f, 0x2, 
       0x2, 0x8ba, 0x8bb, 0x7, 0x61, 0x2, 0x2, 0x8bb, 0x8bc, 0x5, 0x158, 
       0xad, 0x2, 0x8bc, 0x8bd, 0x7, 0x62, 0x2, 0x2, 0x8bd, 0x8bf, 0x7, 
       0x10, 0x2, 0x2, 0x8be, 0x8c0, 0x7, 0x7f, 0x2, 0x2, 0x8bf, 0x8be, 
       0x3, 0x2, 0x2, 0x2, 0x8bf, 0x8c0, 0x3, 0x2, 0x2, 0x2, 0x8c0, 0x8c1, 
       0x3, 0x2, 0x2, 0x2, 0x8c1, 0x8c2, 0x7, 0x60, 0x2, 0x2, 0x8c2, 0x8c3, 
       0x5, 0x6, 0x4, 0x2, 0x8c3, 0x8c5, 0x3, 0x2, 0x2, 0x2, 0x8c4, 0x894, 
       0x3, 0x2, 0x2, 0x2, 0x8c4, 0x89b, 0x3, 0x2, 0x2, 0x2, 0x8c4, 0x8a1, 
       0x3, 0x2, 0x2, 0x2, 0x8c4, 0x8a8, 0x3, 0x2, 0x2, 0x2, 0x8c4, 0x8ae, 
       0x3, 0x2, 0x2, 0x2, 0x8c4, 0x8b9, 0x3, 0x2, 0x2, 0x2, 0x8c5, 0x15d, 
       0x3, 0x2, 0x2, 0x2, 0x8c6, 0x8c7, 0x5, 0x162, 0xb2, 0x2, 0x8c7, 0x8c9, 
       0x7, 0x61, 0x2, 0x2, 0x8c8, 0x8ca, 0x5, 0x164, 0xb3, 0x2, 0x8c9, 
       0x8c8, 0x3, 0x2, 0x2, 0x2, 0x8c9, 0x8ca, 0x3, 0x2, 0x2, 0x2, 0x8ca, 
       0x8cb, 0x3, 0x2, 0x2, 0x2, 0x8cb, 0x8cc, 0x7, 0x62, 0x2, 0x2, 0x8cc, 
       0x15f, 0x3, 0x2, 0x2, 0x2, 0x8cd, 0x8dd, 0x5, 0x15e, 0xb0, 0x2, 0x8ce, 
       0x8cf, 0x5, 0x152, 0xaa, 0x2, 0x8cf, 0x8d1, 0x7, 0x61, 0x2, 0x2, 
       0x8d0, 0x8d2, 0x5, 0x164, 0xb3, 0x2, 0x8d1, 0x8d0, 0x3, 0x2, 0x2, 
       0x2, 0x8d1, 0x8d2, 0x3, 0x2, 0x2, 0x2, 0x8d2, 0x8d3, 0x3, 0x2, 0x2, 
       0x2, 0x8d3, 0x8d4, 0x7, 0x62, 0x2, 0x2, 0x8d4, 0x8dd, 0x3, 0x2, 0x2, 
       0x2, 0x8d5, 0x8d6, 0x5, 0x154, 0xab, 0x2, 0x8d6, 0x8d8, 0x7, 0x61, 
       0x2, 0x2, 0x8d7, 0x8d9, 0x5, 0x164, 0xb3, 0x2, 0x8d8, 0x8d7, 0x3, 
       0x2, 0x2, 0x2, 0x8d8, 0x8d9, 0x3, 0x2, 0x2, 0x2, 0x8d9, 0x8da, 0x3, 
       0x2, 0x2, 0x2, 0x8da, 0x8db, 0x7, 0x62, 0x2, 0x2, 0x8db, 0x8dd, 0x3, 
       0x2, 0x2, 0x2, 0x8dc, 0x8cd, 0x3, 0x2, 0x2, 0x2, 0x8dc, 0x8ce, 0x3, 
       0x2, 0x2, 0x2, 0x8dc, 0x8d5, 0x3, 0x2, 0x2, 0x2, 0x8dd, 0x161, 0x3, 
       0x2, 0x2, 0x2, 0x8de, 0x8df, 0x7, 0x7f, 0x2, 0x2, 0x8df, 0x163, 0x3, 
       0x2, 0x2, 0x2, 0x8e0, 0x8e1, 0x8, 0xb3, 0x1, 0x2, 0x8e1, 0x8e3, 0x5, 
       0x166, 0xb4, 0x2, 0x8e2, 0x8e4, 0x7, 0x7e, 0x2, 0x2, 0x8e3, 0x8e2, 
       0x3, 0x2, 0x2, 0x2, 0x8e3, 0x8e4, 0x3, 0x2, 0x2, 0x2, 0x8e4, 0x8ed, 
       0x3, 0x2, 0x2, 0x2, 0x8e5, 0x8e6, 0xc, 0x3, 0x2, 0x2, 0x8e6, 0x8e7, 
       0x7, 0x75, 0x2, 0x2, 0x8e7, 0x8e9, 0x5, 0x166, 0xb4, 0x2, 0x8e8, 
       0x8ea, 0x7, 0x7e, 0x2, 0x2, 0x8e9, 0x8e8, 0x3, 0x2, 0x2, 0x2, 0x8e9, 
       0x8ea, 0x3, 0x2, 0x2, 0x2, 0x8ea, 0x8ec, 0x3, 0x2, 0x2, 0x2, 0x8eb, 
       0x8e5, 0x3, 0x2, 0x2, 0x2, 0x8ec, 0x8ef, 0x3, 0x2, 0x2, 0x2, 0x8ed, 
       0x8eb, 0x3, 0x2, 0x2, 0x2, 0x8ed, 0x8ee, 0x3, 0x2, 0x2, 0x2, 0x8ee, 
       0x165, 0x3, 0x2, 0x2, 0x2, 0x8ef, 0x8ed, 0x3, 0x2, 0x2, 0x2, 0x8f0, 
       0x8f4, 0x5, 0xfe, 0x80, 0x2, 0x8f1, 0x8f4, 0x5, 0x5a, 0x2e, 0x2, 
       0x8f2, 0x8f4, 0x5, 0x6, 0x4, 0x2, 0x8f3, 0x8f0, 0x3, 0x2, 0x2, 0x2, 
       0x8f3, 0x8f1, 0x3, 0x2, 0x2, 0x2, 0x8f3, 0x8f2, 0x3, 0x2, 0x2, 0x2, 
       0x8f4, 0x167, 0x3, 0x2, 0x2, 0x2, 0x8f5, 0x8f6, 0x7, 0x47, 0x2, 0x2, 
       0x8f6, 0x8f7, 0x5, 0xc, 0x7, 0x2, 0x8f7, 0x8f8, 0x7, 0x7f, 0x2, 0x2, 
       0x8f8, 0x901, 0x3, 0x2, 0x2, 0x2, 0x8f9, 0x8fa, 0x7, 0x47, 0x2, 0x2, 
       0x8fa, 0x8fc, 0x5, 0xc, 0x7, 0x2, 0x8fb, 0x8fd, 0x7, 0x3f, 0x2, 0x2, 
       0x8fc, 0x8fb, 0x3, 0x2, 0x2, 0x2, 0x8fc, 0x8fd, 0x3, 0x2, 0x2, 0x2, 
       0x8fd, 0x8fe, 0x3, 0x2, 0x2, 0x2, 0x8fe, 0x8ff, 0x5, 0x15e, 0xb0, 
       0x2, 0x8ff, 0x901, 0x3, 0x2, 0x2, 0x2, 0x900, 0x8f5, 0x3, 0x2, 0x2, 
       0x2, 0x900, 0x8f9, 0x3, 0x2, 0x2, 0x2, 0x901, 0x169, 0x3, 0x2, 0x2, 
       0x2, 0x902, 0x904, 0x7, 0x1f, 0x2, 0x2, 0x903, 0x902, 0x3, 0x2, 0x2, 
       0x2, 0x903, 0x904, 0x3, 0x2, 0x2, 0x2, 0x904, 0x905, 0x3, 0x2, 0x2, 
       0x2, 0x905, 0x906, 0x7, 0x3f, 0x2, 0x2, 0x906, 0x907, 0x5, 0x78, 
       0x3d, 0x2, 0x907, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x908, 0x909, 0x7, 0x3f, 
       0x2, 0x2, 0x909, 0x90a, 0x7, 0x61, 0x2, 0x2, 0x90a, 0x90b, 0x7, 0x62, 
       0x2, 0x2, 0x90b, 0x90c, 0x5, 0x78, 0x3d, 0x2, 0x90c, 0x16d, 0x3, 
       0x2, 0x2, 0x2, 0x90d, 0x90e, 0x7, 0x44, 0x2, 0x2, 0x90e, 0x90f, 0x5, 
       0x62, 0x32, 0x2, 0x90f, 0x910, 0x5, 0x172, 0xba, 0x2, 0x910, 0x16f, 
       0x3, 0x2, 0x2, 0x2, 0x911, 0x913, 0x7, 0x44, 0x2, 0x2, 0x912, 0x914, 
       0x5, 0x14a, 0xa6, 0x2, 0x913, 0x912, 0x3, 0x2, 0x2, 0x2, 0x913, 0x914, 
       0x3, 0x2, 0x2, 0x2, 0x914, 0x915, 0x3, 0x2, 0x2, 0x2, 0x915, 0x916, 
       0x5, 0x62, 0x32, 0x2, 0x916, 0x917, 0x5, 0x172, 0xba, 0x2, 0x917, 
       0x171, 0x3, 0x2, 0x2, 0x2, 0x918, 0x91a, 0x5, 0x174, 0xbb, 0x2, 0x919, 
       0x91b, 0x5, 0x172, 0xba, 0x2, 0x91a, 0x919, 0x3, 0x2, 0x2, 0x2, 0x91a, 
       0x91b, 0x3, 0x2, 0x2, 0x2, 0x91b, 0x173, 0x3, 0x2, 0x2, 0x2, 0x91c, 
       0x91d, 0x7, 0xc, 0x2, 0x2, 0x91d, 0x91e, 0x7, 0x50, 0x2, 0x2, 0x91e, 
       0x91f, 0x5, 0x176, 0xbc, 0x2, 0x91f, 0x920, 0x7, 0x51, 0x2, 0x2, 
       0x920, 0x921, 0x5, 0x62, 0x32, 0x2, 0x921, 0x175, 0x3, 0x2, 0x2, 
       0x2, 0x922, 0x924, 0x5, 0xd0, 0x69, 0x2, 0x923, 0x922, 0x3, 0x2, 
       0x2, 0x2, 0x923, 0x924, 0x3, 0x2, 0x2, 0x2, 0x924, 0x925, 0x3, 0x2, 
       0x2, 0x2, 0x925, 0x926, 0x5, 0x94, 0x4b, 0x2, 0x926, 0x927, 0x5, 
       0xea, 0x76, 0x2, 0x927, 0x931, 0x3, 0x2, 0x2, 0x2, 0x928, 0x92a, 
       0x5, 0xd0, 0x69, 0x2, 0x929, 0x928, 0x3, 0x2, 0x2, 0x2, 0x929, 0x92a, 
       0x3, 0x2, 0x2, 0x2, 0x92a, 0x92b, 0x3, 0x2, 0x2, 0x2, 0x92b, 0x92d, 
       0x5, 0x94, 0x4b, 0x2, 0x92c, 0x92e, 0x5, 0x100, 0x81, 0x2, 0x92d, 
       0x92c, 0x3, 0x2, 0x2, 0x2, 0x92d, 0x92e, 0x3, 0x2, 0x2, 0x2, 0x92e, 
       0x931, 0x3, 0x2, 0x2, 0x2, 0x92f, 0x931, 0x7, 0x7e, 0x2, 0x2, 0x930, 
       0x923, 0x3, 0x2, 0x2, 0x2, 0x930, 0x929, 0x3, 0x2, 0x2, 0x2, 0x930, 
       0x92f, 0x3, 0x2, 0x2, 0x2, 0x931, 0x177, 0x3, 0x2, 0x2, 0x2, 0x932, 
       0x934, 0x7, 0x42, 0x2, 0x2, 0x933, 0x935, 0x5, 0x54, 0x2b, 0x2, 0x934, 
       0x933, 0x3, 0x2, 0x2, 0x2, 0x934, 0x935, 0x3, 0x2, 0x2, 0x2, 0x935, 
       0x179, 0x3, 0x2, 0x2, 0x2, 0x936, 0x939, 0x5, 0x17c, 0xbf, 0x2, 0x937, 
       0x939, 0x5, 0x180, 0xc1, 0x2, 0x938, 0x936, 0x3, 0x2, 0x2, 0x2, 0x938, 
       0x937, 0x3, 0x2, 0x2, 0x2, 0x939, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x93a, 
       0x93b, 0x7, 0x42, 0x2, 0x2, 0x93b, 0x93d, 0x7, 0x50, 0x2, 0x2, 0x93c, 
       0x93e, 0x5, 0x17e, 0xc0, 0x2, 0x93d, 0x93c, 0x3, 0x2, 0x2, 0x2, 0x93d, 
       0x93e, 0x3, 0x2, 0x2, 0x2, 0x93e, 0x93f, 0x3, 0x2, 0x2, 0x2, 0x93f, 
       0x940, 0x7, 0x51, 0x2, 0x2, 0x940, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x941, 
       0x942, 0x8, 0xc0, 0x1, 0x2, 0x942, 0x944, 0x5, 0xfe, 0x80, 0x2, 0x943, 
       0x945, 0x7, 0x7e, 0x2, 0x2, 0x944, 0x943, 0x3, 0x2, 0x2, 0x2, 0x944, 
       0x945, 0x3, 0x2, 0x2, 0x2, 0x945, 0x94e, 0x3, 0x2, 0x2, 0x2, 0x946, 
       0x947, 0xc, 0x3, 0x2, 0x2, 0x947, 0x948, 0x7, 0x75, 0x2, 0x2, 0x948, 
       0x94a, 0x5, 0xfe, 0x80, 0x2, 0x949, 0x94b, 0x7, 0x7e, 0x2, 0x2, 0x94a, 
       0x949, 0x3, 0x2, 0x2, 0x2, 0x94a, 0x94b, 0x3, 0x2, 0x2, 0x2, 0x94b, 
       0x94d, 0x3, 0x2, 0x2, 0x2, 0x94c, 0x946, 0x3, 0x2, 0x2, 0x2, 0x94d, 
       0x950, 0x3, 0x2, 0x2, 0x2, 0x94e, 0x94c, 0x3, 0x2, 0x2, 0x2, 0x94e, 
       0x94f, 0x3, 0x2, 0x2, 0x2, 0x94f, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x950, 
       0x94e, 0x3, 0x2, 0x2, 0x2, 0x951, 0x952, 0x7, 0x2d, 0x2, 0x2, 0x952, 
       0x953, 0x7, 0x50, 0x2, 0x2, 0x953, 0x954, 0x5, 0x5a, 0x2e, 0x2, 0x954, 
       0x955, 0x7, 0x51, 0x2, 0x2, 0x955, 0x958, 0x3, 0x2, 0x2, 0x2, 0x956, 
       0x958, 0x7, 0x2d, 0x2, 0x2, 0x957, 0x951, 0x3, 0x2, 0x2, 0x2, 0x957, 
       0x956, 0x3, 0x2, 0x2, 0x2, 0x958, 0x181, 0x3, 0x2, 0x2, 0x2, 0x959, 
       0x95a, 0x7, 0x62, 0x2, 0x2, 0x95a, 0x95b, 0x7, 0x62, 0x2, 0x2, 0x95b, 
       0x183, 0x3, 0x2, 0x2, 0x2, 0x95c, 0x95d, 0x7, 0x62, 0x2, 0x2, 0x95d, 
       0x95e, 0x7, 0x62, 0x2, 0x2, 0x95e, 0x95f, 0x7, 0x60, 0x2, 0x2, 0x95f, 
       0x185, 0x3, 0x2, 0x2, 0x2, 0x960, 0x991, 0x7, 0x2c, 0x2, 0x2, 0x961, 
       0x991, 0x7, 0x17, 0x2, 0x2, 0x962, 0x963, 0x7, 0x2c, 0x2, 0x2, 0x963, 
       0x964, 0x7, 0x52, 0x2, 0x2, 0x964, 0x991, 0x7, 0x53, 0x2, 0x2, 0x965, 
       0x966, 0x7, 0x17, 0x2, 0x2, 0x966, 0x967, 0x7, 0x52, 0x2, 0x2, 0x967, 
       0x991, 0x7, 0x53, 0x2, 0x2, 0x968, 0x991, 0x7, 0x56, 0x2, 0x2, 0x969, 
       0x991, 0x7, 0x57, 0x2, 0x2, 0x96a, 0x991, 0x7, 0x58, 0x2, 0x2, 0x96b, 
       0x991, 0x7, 0x59, 0x2, 0x2, 0x96c, 0x991, 0x7, 0x5a, 0x2, 0x2, 0x96d, 
       0x991, 0x7, 0x5b, 0x2, 0x2, 0x96e, 0x991, 0x7, 0x5c, 0x2, 0x2, 0x96f, 
       0x991, 0x7, 0x5d, 0x2, 0x2, 0x970, 0x991, 0x7, 0x5e, 0x2, 0x2, 0x971, 
       0x991, 0x7, 0x5f, 0x2, 0x2, 0x972, 0x991, 0x7, 0x60, 0x2, 0x2, 0x973, 
       0x991, 0x7, 0x61, 0x2, 0x2, 0x974, 0x991, 0x7, 0x62, 0x2, 0x2, 0x975, 
       0x991, 0x7, 0x63, 0x2, 0x2, 0x976, 0x991, 0x7, 0x64, 0x2, 0x2, 0x977, 
       0x991, 0x7, 0x65, 0x2, 0x2, 0x978, 0x991, 0x7, 0x66, 0x2, 0x2, 0x979, 
       0x991, 0x7, 0x67, 0x2, 0x2, 0x97a, 0x991, 0x7, 0x68, 0x2, 0x2, 0x97b, 
       0x991, 0x7, 0x69, 0x2, 0x2, 0x97c, 0x991, 0x7, 0x6a, 0x2, 0x2, 0x97d, 
       0x991, 0x7, 0x6b, 0x2, 0x2, 0x97e, 0x991, 0x5, 0x182, 0xc2, 0x2, 
       0x97f, 0x991, 0x5, 0x184, 0xc3, 0x2, 0x980, 0x991, 0x7, 0x6c, 0x2, 
       0x2, 0x981, 0x991, 0x7, 0x6d, 0x2, 0x2, 0x982, 0x991, 0x7, 0x6e, 
       0x2, 0x2, 0x983, 0x991, 0x7, 0x6f, 0x2, 0x2, 0x984, 0x991, 0x7, 0x70, 
       0x2, 0x2, 0x985, 0x991, 0x7, 0x71, 0x2, 0x2, 0x986, 0x991, 0x7, 0x72, 
       0x2, 0x2, 0x987, 0x991, 0x7, 0x73, 0x2, 0x2, 0x988, 0x991, 0x7, 0x74, 
       0x2, 0x2, 0x989, 0x991, 0x7, 0x75, 0x2, 0x2, 0x98a, 0x991, 0x7, 0x76, 
       0x2, 0x2, 0x98b, 0x991, 0x7, 0x77, 0x2, 0x2, 0x98c, 0x98d, 0x7, 0x50, 
       0x2, 0x2, 0x98d, 0x991, 0x7, 0x51, 0x2, 0x2, 0x98e, 0x98f, 0x7, 0x52, 
       0x2, 0x2, 0x98f, 0x991, 0x7, 0x53, 0x2, 0x2, 0x990, 0x960, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x961, 0x3, 0x2, 0x2, 0x2, 0x990, 0x962, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x965, 0x3, 0x2, 0x2, 0x2, 0x990, 0x968, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x969, 0x3, 0x2, 0x2, 0x2, 0x990, 0x96a, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x96b, 0x3, 0x2, 0x2, 0x2, 0x990, 0x96c, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x96d, 0x3, 0x2, 0x2, 0x2, 0x990, 0x96e, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x96f, 0x3, 0x2, 0x2, 0x2, 0x990, 0x970, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x971, 0x3, 0x2, 0x2, 0x2, 0x990, 0x972, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x973, 0x3, 0x2, 0x2, 0x2, 0x990, 0x974, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x975, 0x3, 0x2, 0x2, 0x2, 0x990, 0x976, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x977, 0x3, 0x2, 0x2, 0x2, 0x990, 0x978, 0x3, 0x2, 
  };
  static uint16_t serializedATNSegment1[] = {
    0x2, 0x2, 0x990, 0x979, 0x3, 0x2, 0x2, 0x2, 0x990, 0x97a, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x97b, 0x3, 0x2, 0x2, 0x2, 0x990, 0x97c, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x97d, 0x3, 0x2, 0x2, 0x2, 0x990, 0x97e, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x97f, 0x3, 0x2, 0x2, 0x2, 0x990, 0x980, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x981, 0x3, 0x2, 0x2, 0x2, 0x990, 0x982, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x983, 0x3, 0x2, 0x2, 0x2, 0x990, 0x984, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x985, 0x3, 0x2, 0x2, 0x2, 0x990, 0x986, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x987, 0x3, 0x2, 0x2, 0x2, 0x990, 0x988, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x989, 0x3, 0x2, 0x2, 0x2, 0x990, 0x98a, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x98b, 0x3, 0x2, 0x2, 0x2, 0x990, 0x98c, 0x3, 0x2, 
       0x2, 0x2, 0x990, 0x98e, 0x3, 0x2, 0x2, 0x2, 0x991, 0x187, 0x3, 0x2, 
       0x2, 0x2, 0x992, 0x99a, 0x7, 0x80, 0x2, 0x2, 0x993, 0x99a, 0x7, 0x86, 
       0x2, 0x2, 0x994, 0x99a, 0x7, 0x87, 0x2, 0x2, 0x995, 0x99a, 0x7, 0x88, 
       0x2, 0x2, 0x996, 0x99a, 0x5, 0x18a, 0xc6, 0x2, 0x997, 0x99a, 0x5, 
       0x18c, 0xc7, 0x2, 0x998, 0x99a, 0x5, 0x18e, 0xc8, 0x2, 0x999, 0x992, 
       0x3, 0x2, 0x2, 0x2, 0x999, 0x993, 0x3, 0x2, 0x2, 0x2, 0x999, 0x994, 
       0x3, 0x2, 0x2, 0x2, 0x999, 0x995, 0x3, 0x2, 0x2, 0x2, 0x999, 0x996, 
       0x3, 0x2, 0x2, 0x2, 0x999, 0x997, 0x3, 0x2, 0x2, 0x2, 0x999, 0x998, 
       0x3, 0x2, 0x2, 0x2, 0x99a, 0x189, 0x3, 0x2, 0x2, 0x2, 0x99b, 0x99c, 
       0x9, 0xb, 0x2, 0x2, 0x99c, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x99d, 0x99e, 
       0x7, 0x2e, 0x2, 0x2, 0x99e, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x99f, 0x9a0, 
       0x9, 0xc, 0x2, 0x2, 0x9a0, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x191, 
       0x19d, 0x1a1, 0x1ac, 0x1b0, 0x1bf, 0x1c6, 0x1cb, 0x1cd, 0x1d2, 0x1d8, 
       0x1e2, 0x1e9, 0x1ef, 0x1f3, 0x1f8, 0x1fe, 0x205, 0x20b, 0x20e, 0x211, 
       0x214, 0x21b, 0x222, 0x256, 0x265, 0x26b, 0x271, 0x27e, 0x280, 0x286, 
       0x295, 0x29b, 0x2b9, 0x2be, 0x2c2, 0x2c6, 0x2c9, 0x2cd, 0x2d3, 0x2d5, 
       0x2dd, 0x2e1, 0x2e4, 0x2eb, 0x2f2, 0x2f6, 0x2fb, 0x2ff, 0x302, 0x307, 
       0x30d, 0x31a, 0x325, 0x327, 0x336, 0x338, 0x344, 0x346, 0x353, 0x355, 
       0x367, 0x369, 0x375, 0x377, 0x382, 0x38d, 0x398, 0x3a3, 0x3ae, 0x3b8, 
       0x3c0, 0x3cd, 0x3d7, 0x3de, 0x3e2, 0x3e6, 0x3ea, 0x3ee, 0x3f3, 0x3f6, 
       0x3f9, 0x3ff, 0x407, 0x40c, 0x40f, 0x415, 0x420, 0x437, 0x43b, 0x443, 
       0x449, 0x45d, 0x461, 0x46e, 0x472, 0x475, 0x47c, 0x484, 0x48e, 0x499, 
       0x4a5, 0x4af, 0x4b4, 0x4bb, 0x4be, 0x4c3, 0x4c8, 0x4dd, 0x4e1, 0x4e6, 
       0x4f1, 0x4f7, 0x4fb, 0x500, 0x504, 0x509, 0x50c, 0x522, 0x528, 0x533, 
       0x537, 0x53a, 0x544, 0x54a, 0x54d, 0x554, 0x55e, 0x562, 0x565, 0x568, 
       0x56c, 0x571, 0x573, 0x577, 0x57b, 0x584, 0x591, 0x599, 0x59f, 0x5a5, 
       0x5a9, 0x5ac, 0x5b5, 0x5be, 0x5c6, 0x5d1, 0x5d7, 0x5e2, 0x5e5, 0x5ea, 
       0x5f9, 0x5ff, 0x608, 0x612, 0x618, 0x620, 0x624, 0x628, 0x62d, 0x632, 
       0x639, 0x63b, 0x640, 0x644, 0x652, 0x658, 0x667, 0x671, 0x676, 0x67d, 
       0x683, 0x688, 0x68e, 0x695, 0x699, 0x69b, 0x69d, 0x6a4, 0x6a7, 0x6aa, 
       0x6ad, 0x6b2, 0x6b6, 0x6b9, 0x6bd, 0x6c1, 0x6c6, 0x6c9, 0x6cb, 0x6cf, 
       0x6d6, 0x6dc, 0x6e0, 0x6e6, 0x6eb, 0x6ed, 0x6f3, 0x6f7, 0x6fd, 0x704, 
       0x708, 0x70a, 0x70c, 0x713, 0x71d, 0x721, 0x723, 0x725, 0x729, 0x72c, 
       0x732, 0x73c, 0x740, 0x746, 0x74e, 0x752, 0x755, 0x759, 0x75e, 0x761, 
       0x764, 0x768, 0x76d, 0x777, 0x77e, 0x783, 0x787, 0x78c, 0x792, 0x796, 
       0x79c, 0x7a2, 0x7a6, 0x7ab, 0x7b1, 0x7b5, 0x7b8, 0x7bc, 0x7bf, 0x7c1, 
       0x7c4, 0x7ce, 0x7d3, 0x7d5, 0x7d8, 0x7db, 0x7de, 0x7e7, 0x7f1, 0x7f6, 
       0x7f9, 0x7fd, 0x800, 0x803, 0x807, 0x810, 0x81f, 0x825, 0x829, 0x82d, 
       0x831, 0x835, 0x839, 0x83d, 0x841, 0x844, 0x848, 0x853, 0x857, 0x85e, 
       0x862, 0x867, 0x86c, 0x873, 0x877, 0x881, 0x88e, 0x892, 0x896, 0x899, 
       0x89d, 0x8a3, 0x8a6, 0x8aa, 0x8b4, 0x8b7, 0x8bf, 0x8c4, 0x8c9, 0x8d1, 
       0x8d8, 0x8dc, 0x8e3, 0x8e9, 0x8ed, 0x8f3, 0x8fc, 0x900, 0x903, 0x913, 
       0x91a, 0x923, 0x929, 0x92d, 0x930, 0x934, 0x938, 0x93d, 0x944, 0x94a, 
       0x94e, 0x957, 0x990, 0x999, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));
  _serializedATN.insert(_serializedATN.end(), serializedATNSegment1,
    serializedATNSegment1 + sizeof(serializedATNSegment1) / sizeof(serializedATNSegment1[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CPP14Parser::Initializer CPP14Parser::_init;
