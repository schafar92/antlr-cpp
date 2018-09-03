
// Generated from CPP14.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  CPP14Parser : public antlr4::Parser {
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

  enum {
    RuleTranslationunit = 0, RulePrimaryexpression = 1, RuleIdexpression = 2, 
    RuleUnqualifiedid = 3, RuleQualifiedid = 4, RuleNestednamespecifier = 5, 
    RuleLambdaexpression = 6, RuleLambdaintroducer = 7, RuleLambdacapture = 8, 
    RuleCapturedefault = 9, RuleCapturelist = 10, RuleCapture = 11, RuleSimplecapture = 12, 
    RuleInitcapture = 13, RuleLambdadeclarator = 14, RulePostfixexpression = 15, 
    RuleExpressionlist = 16, RulePseudodestructorname = 17, RuleUnaryexpression = 18, 
    RuleUnaryoperator = 19, RuleNewexpression = 20, RuleNewplacement = 21, 
    RuleNewtypeid = 22, RuleNewdeclarator = 23, RuleNoptrnewdeclarator = 24, 
    RuleNewinitializer = 25, RuleDeleteexpression = 26, RuleNoexceptexpression = 27, 
    RuleCastexpression = 28, RulePmexpression = 29, RuleMultiplicativeexpression = 30, 
    RuleAdditiveexpression = 31, RuleShiftexpression = 32, RuleRelationalexpression = 33, 
    RuleEqualityexpression = 34, RuleAndexpression = 35, RuleExclusiveorexpression = 36, 
    RuleInclusiveorexpression = 37, RuleLogicalandexpression = 38, RuleLogicalorexpression = 39, 
    RuleConditionalexpression = 40, RuleAssignmentexpression = 41, RuleAssignmentoperator = 42, 
    RuleExpression = 43, RuleConstantexpression = 44, RuleStatement = 45, 
    RuleLabeledstatement = 46, RuleExpressionstatement = 47, RuleCompoundstatement = 48, 
    RuleStatementseq = 49, RuleSelectionstatement = 50, RuleCondition = 51, 
    RuleIterationstatement = 52, RuleForinitstatement = 53, RuleForrangedeclaration = 54, 
    RuleForrangeinitializer = 55, RuleJumpstatement = 56, RuleDeclarationstatement = 57, 
    RuleDeclarationseq = 58, RuleDeclaration = 59, RuleBlockdeclaration = 60, 
    RuleAliasdeclaration = 61, RuleSimpledeclaration = 62, RuleStatic_assertdeclaration = 63, 
    RuleEmptydeclaration = 64, RuleAttributedeclaration = 65, RuleDeclspecifier = 66, 
    RuleDeclspecifierseq = 67, RuleStorageclassspecifier = 68, RuleFunctionspecifier = 69, 
    RuleTypedefname = 70, RuleTypespecifier = 71, RuleTrailingtypespecifier = 72, 
    RuleTypespecifierseq = 73, RuleTrailingtypespecifierseq = 74, RuleSimpletypespecifier = 75, 
    RuleThetypename = 76, RuleDecltypespecifier = 77, RuleElaboratedtypespecifier = 78, 
    RuleEnumname = 79, RuleEnumspecifier = 80, RuleEnumhead = 81, RuleOpaqueenumdeclaration = 82, 
    RuleEnumkey = 83, RuleEnumbase = 84, RuleEnumeratorlist = 85, RuleEnumeratordefinition = 86, 
    RuleEnumerator = 87, RuleNamespacename = 88, RuleOriginalnamespacename = 89, 
    RuleNamespacedefinition = 90, RuleNamednamespacedefinition = 91, RuleOriginalnamespacedefinition = 92, 
    RuleExtensionnamespacedefinition = 93, RuleUnnamednamespacedefinition = 94, 
    RuleNamespacebody = 95, RuleNamespacealias = 96, RuleNamespacealiasdefinition = 97, 
    RuleQualifiednamespacespecifier = 98, RuleUsingdeclaration = 99, RuleUsingdirective = 100, 
    RuleAsmdefinition = 101, RuleLinkagespecification = 102, RuleAttributespecifierseq = 103, 
    RuleAttributespecifier = 104, RuleAlignmentspecifier = 105, RuleAttributelist = 106, 
    RuleAttribute = 107, RuleAttributetoken = 108, RuleAttributescopedtoken = 109, 
    RuleAttributenamespace = 110, RuleAttributeargumentclause = 111, RuleBalancedtokenseq = 112, 
    RuleBalancedtoken = 113, RuleInitdeclaratorlist = 114, RuleInitdeclarator = 115, 
    RuleDeclarator = 116, RulePtrdeclarator = 117, RuleNoptrdeclarator = 118, 
    RuleParametersandqualifiers = 119, RuleTrailingreturntype = 120, RulePtroperator = 121, 
    RuleCvqualifierseq = 122, RuleCvqualifier = 123, RuleRefqualifier = 124, 
    RuleDeclaratorid = 125, RuleThetypeid = 126, RuleAbstractdeclarator = 127, 
    RulePtrabstractdeclarator = 128, RuleNoptrabstractdeclarator = 129, 
    RuleAbstractpackdeclarator = 130, RuleNoptrabstractpackdeclarator = 131, 
    RuleParameterdeclarationclause = 132, RuleParameterdeclarationlist = 133, 
    RuleParameterdeclaration = 134, RuleFunctiondefinition = 135, RuleFunctionbody = 136, 
    RuleInitializer = 137, RuleBraceorequalinitializer = 138, RuleInitializerclause = 139, 
    RuleInitializerlist = 140, RuleBracedinitlist = 141, RuleClassname = 142, 
    RuleClassspecifier = 143, RuleClasshead = 144, RuleClassheadname = 145, 
    RuleClassvirtspecifier = 146, RuleClasskey = 147, RuleMemberspecification = 148, 
    RuleMemberdeclaration = 149, RuleMemberdeclaratorlist = 150, RuleMemberdeclarator = 151, 
    RuleVirtspecifierseq = 152, RuleVirtspecifier = 153, RulePurespecifier = 154, 
    RuleBaseclause = 155, RuleBasespecifierlist = 156, RuleBasespecifier = 157, 
    RuleClassordecltype = 158, RuleBasetypespecifier = 159, RuleAccessspecifier = 160, 
    RuleConversionfunctionid = 161, RuleConversiontypeid = 162, RuleConversiondeclarator = 163, 
    RuleCtorinitializer = 164, RuleMeminitializerlist = 165, RuleMeminitializer = 166, 
    RuleMeminitializerid = 167, RuleOperatorfunctionid = 168, RuleLiteraloperatorid = 169, 
    RuleTemplatedeclaration = 170, RuleTemplateparameterlist = 171, RuleTemplateparameter = 172, 
    RuleTypeparameter = 173, RuleSimpletemplateid = 174, RuleTemplateid = 175, 
    RuleTemplatename = 176, RuleTemplateargumentlist = 177, RuleTemplateargument = 178, 
    RuleTypenamespecifier = 179, RuleExplicitinstantiation = 180, RuleExplicitspecialization = 181, 
    RuleTryblock = 182, RuleFunctiontryblock = 183, RuleHandlerseq = 184, 
    RuleHandler = 185, RuleExceptiondeclaration = 186, RuleThrowexpression = 187, 
    RuleExceptionspecification = 188, RuleDynamicexceptionspecification = 189, 
    RuleTypeidlist = 190, RuleNoexceptspecification = 191, RuleRightShift = 192, 
    RuleRightShiftAssign = 193, RuleTheoperator = 194, RuleLiteral = 195, 
    RuleBooleanliteral = 196, RulePointerliteral = 197, RuleUserdefinedliteral = 198
  };

  CPP14Parser(antlr4::TokenStream *input);
  ~CPP14Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class TranslationunitContext;
  class PrimaryexpressionContext;
  class IdexpressionContext;
  class UnqualifiedidContext;
  class QualifiedidContext;
  class NestednamespecifierContext;
  class LambdaexpressionContext;
  class LambdaintroducerContext;
  class LambdacaptureContext;
  class CapturedefaultContext;
  class CapturelistContext;
  class CaptureContext;
  class SimplecaptureContext;
  class InitcaptureContext;
  class LambdadeclaratorContext;
  class PostfixexpressionContext;
  class ExpressionlistContext;
  class PseudodestructornameContext;
  class UnaryexpressionContext;
  class UnaryoperatorContext;
  class NewexpressionContext;
  class NewplacementContext;
  class NewtypeidContext;
  class NewdeclaratorContext;
  class NoptrnewdeclaratorContext;
  class NewinitializerContext;
  class DeleteexpressionContext;
  class NoexceptexpressionContext;
  class CastexpressionContext;
  class PmexpressionContext;
  class MultiplicativeexpressionContext;
  class AdditiveexpressionContext;
  class ShiftexpressionContext;
  class RelationalexpressionContext;
  class EqualityexpressionContext;
  class AndexpressionContext;
  class ExclusiveorexpressionContext;
  class InclusiveorexpressionContext;
  class LogicalandexpressionContext;
  class LogicalorexpressionContext;
  class ConditionalexpressionContext;
  class AssignmentexpressionContext;
  class AssignmentoperatorContext;
  class ExpressionContext;
  class ConstantexpressionContext;
  class StatementContext;
  class LabeledstatementContext;
  class ExpressionstatementContext;
  class CompoundstatementContext;
  class StatementseqContext;
  class SelectionstatementContext;
  class ConditionContext;
  class IterationstatementContext;
  class ForinitstatementContext;
  class ForrangedeclarationContext;
  class ForrangeinitializerContext;
  class JumpstatementContext;
  class DeclarationstatementContext;
  class DeclarationseqContext;
  class DeclarationContext;
  class BlockdeclarationContext;
  class AliasdeclarationContext;
  class SimpledeclarationContext;
  class Static_assertdeclarationContext;
  class EmptydeclarationContext;
  class AttributedeclarationContext;
  class DeclspecifierContext;
  class DeclspecifierseqContext;
  class StorageclassspecifierContext;
  class FunctionspecifierContext;
  class TypedefnameContext;
  class TypespecifierContext;
  class TrailingtypespecifierContext;
  class TypespecifierseqContext;
  class TrailingtypespecifierseqContext;
  class SimpletypespecifierContext;
  class ThetypenameContext;
  class DecltypespecifierContext;
  class ElaboratedtypespecifierContext;
  class EnumnameContext;
  class EnumspecifierContext;
  class EnumheadContext;
  class OpaqueenumdeclarationContext;
  class EnumkeyContext;
  class EnumbaseContext;
  class EnumeratorlistContext;
  class EnumeratordefinitionContext;
  class EnumeratorContext;
  class NamespacenameContext;
  class OriginalnamespacenameContext;
  class NamespacedefinitionContext;
  class NamednamespacedefinitionContext;
  class OriginalnamespacedefinitionContext;
  class ExtensionnamespacedefinitionContext;
  class UnnamednamespacedefinitionContext;
  class NamespacebodyContext;
  class NamespacealiasContext;
  class NamespacealiasdefinitionContext;
  class QualifiednamespacespecifierContext;
  class UsingdeclarationContext;
  class UsingdirectiveContext;
  class AsmdefinitionContext;
  class LinkagespecificationContext;
  class AttributespecifierseqContext;
  class AttributespecifierContext;
  class AlignmentspecifierContext;
  class AttributelistContext;
  class AttributeContext;
  class AttributetokenContext;
  class AttributescopedtokenContext;
  class AttributenamespaceContext;
  class AttributeargumentclauseContext;
  class BalancedtokenseqContext;
  class BalancedtokenContext;
  class InitdeclaratorlistContext;
  class InitdeclaratorContext;
  class DeclaratorContext;
  class PtrdeclaratorContext;
  class NoptrdeclaratorContext;
  class ParametersandqualifiersContext;
  class TrailingreturntypeContext;
  class PtroperatorContext;
  class CvqualifierseqContext;
  class CvqualifierContext;
  class RefqualifierContext;
  class DeclaratoridContext;
  class ThetypeidContext;
  class AbstractdeclaratorContext;
  class PtrabstractdeclaratorContext;
  class NoptrabstractdeclaratorContext;
  class AbstractpackdeclaratorContext;
  class NoptrabstractpackdeclaratorContext;
  class ParameterdeclarationclauseContext;
  class ParameterdeclarationlistContext;
  class ParameterdeclarationContext;
  class FunctiondefinitionContext;
  class FunctionbodyContext;
  class InitializerContext;
  class BraceorequalinitializerContext;
  class InitializerclauseContext;
  class InitializerlistContext;
  class BracedinitlistContext;
  class ClassnameContext;
  class ClassspecifierContext;
  class ClassheadContext;
  class ClassheadnameContext;
  class ClassvirtspecifierContext;
  class ClasskeyContext;
  class MemberspecificationContext;
  class MemberdeclarationContext;
  class MemberdeclaratorlistContext;
  class MemberdeclaratorContext;
  class VirtspecifierseqContext;
  class VirtspecifierContext;
  class PurespecifierContext;
  class BaseclauseContext;
  class BasespecifierlistContext;
  class BasespecifierContext;
  class ClassordecltypeContext;
  class BasetypespecifierContext;
  class AccessspecifierContext;
  class ConversionfunctionidContext;
  class ConversiontypeidContext;
  class ConversiondeclaratorContext;
  class CtorinitializerContext;
  class MeminitializerlistContext;
  class MeminitializerContext;
  class MeminitializeridContext;
  class OperatorfunctionidContext;
  class LiteraloperatoridContext;
  class TemplatedeclarationContext;
  class TemplateparameterlistContext;
  class TemplateparameterContext;
  class TypeparameterContext;
  class SimpletemplateidContext;
  class TemplateidContext;
  class TemplatenameContext;
  class TemplateargumentlistContext;
  class TemplateargumentContext;
  class TypenamespecifierContext;
  class ExplicitinstantiationContext;
  class ExplicitspecializationContext;
  class TryblockContext;
  class FunctiontryblockContext;
  class HandlerseqContext;
  class HandlerContext;
  class ExceptiondeclarationContext;
  class ThrowexpressionContext;
  class ExceptionspecificationContext;
  class DynamicexceptionspecificationContext;
  class TypeidlistContext;
  class NoexceptspecificationContext;
  class RightShiftContext;
  class RightShiftAssignContext;
  class TheoperatorContext;
  class LiteralContext;
  class BooleanliteralContext;
  class PointerliteralContext;
  class UserdefinedliteralContext; 

  class  TranslationunitContext : public antlr4::ParserRuleContext {
  public:
    TranslationunitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    DeclarationseqContext *declarationseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TranslationunitContext* translationunit();

  class  PrimaryexpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    antlr4::tree::TerminalNode *This();
    ExpressionContext *expression();
    IdexpressionContext *idexpression();
    LambdaexpressionContext *lambdaexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryexpressionContext* primaryexpression();

  class  IdexpressionContext : public antlr4::ParserRuleContext {
  public:
    IdexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnqualifiedidContext *unqualifiedid();
    QualifiedidContext *qualifiedid();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdexpressionContext* idexpression();

  class  UnqualifiedidContext : public antlr4::ParserRuleContext {
  public:
    UnqualifiedidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    OperatorfunctionidContext *operatorfunctionid();
    ConversionfunctionidContext *conversionfunctionid();
    LiteraloperatoridContext *literaloperatorid();
    ClassnameContext *classname();
    DecltypespecifierContext *decltypespecifier();
    TemplateidContext *templateid();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnqualifiedidContext* unqualifiedid();

  class  QualifiedidContext : public antlr4::ParserRuleContext {
  public:
    QualifiedidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NestednamespecifierContext *nestednamespecifier();
    UnqualifiedidContext *unqualifiedid();
    antlr4::tree::TerminalNode *Template();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedidContext* qualifiedid();

  class  NestednamespecifierContext : public antlr4::ParserRuleContext {
  public:
    NestednamespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ThetypenameContext *thetypename();
    NamespacenameContext *namespacename();
    DecltypespecifierContext *decltypespecifier();
    NestednamespecifierContext *nestednamespecifier();
    antlr4::tree::TerminalNode *Identifier();
    SimpletemplateidContext *simpletemplateid();
    antlr4::tree::TerminalNode *Template();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NestednamespecifierContext* nestednamespecifier();
  NestednamespecifierContext* nestednamespecifier(int precedence);
  class  LambdaexpressionContext : public antlr4::ParserRuleContext {
  public:
    LambdaexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaintroducerContext *lambdaintroducer();
    CompoundstatementContext *compoundstatement();
    LambdadeclaratorContext *lambdadeclarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaexpressionContext* lambdaexpression();

  class  LambdaintroducerContext : public antlr4::ParserRuleContext {
  public:
    LambdaintroducerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdacaptureContext *lambdacapture();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaintroducerContext* lambdaintroducer();

  class  LambdacaptureContext : public antlr4::ParserRuleContext {
  public:
    LambdacaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CapturedefaultContext *capturedefault();
    CapturelistContext *capturelist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdacaptureContext* lambdacapture();

  class  CapturedefaultContext : public antlr4::ParserRuleContext {
  public:
    CapturedefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CapturedefaultContext* capturedefault();

  class  CapturelistContext : public antlr4::ParserRuleContext {
  public:
    CapturelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CaptureContext *capture();
    CapturelistContext *capturelist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CapturelistContext* capturelist();
  CapturelistContext* capturelist(int precedence);
  class  CaptureContext : public antlr4::ParserRuleContext {
  public:
    CaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimplecaptureContext *simplecapture();
    InitcaptureContext *initcapture();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaptureContext* capture();

  class  SimplecaptureContext : public antlr4::ParserRuleContext {
  public:
    SimplecaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *This();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimplecaptureContext* simplecapture();

  class  InitcaptureContext : public antlr4::ParserRuleContext {
  public:
    InitcaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    InitializerContext *initializer();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitcaptureContext* initcapture();

  class  LambdadeclaratorContext : public antlr4::ParserRuleContext {
  public:
    LambdadeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterdeclarationclauseContext *parameterdeclarationclause();
    antlr4::tree::TerminalNode *Mutable();
    ExceptionspecificationContext *exceptionspecification();
    AttributespecifierseqContext *attributespecifierseq();
    TrailingreturntypeContext *trailingreturntype();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdadeclaratorContext* lambdadeclarator();

  class  PostfixexpressionContext : public antlr4::ParserRuleContext {
  public:
    PostfixexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryexpressionContext *primaryexpression();
    SimpletypespecifierContext *simpletypespecifier();
    ExpressionlistContext *expressionlist();
    TypenamespecifierContext *typenamespecifier();
    BracedinitlistContext *bracedinitlist();
    antlr4::tree::TerminalNode *Dynamic_cast();
    ThetypeidContext *thetypeid();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Static_cast();
    antlr4::tree::TerminalNode *Reinterpret_cast();
    antlr4::tree::TerminalNode *Const_cast();
    antlr4::tree::TerminalNode *Typeid();
    PostfixexpressionContext *postfixexpression();
    IdexpressionContext *idexpression();
    antlr4::tree::TerminalNode *Template();
    PseudodestructornameContext *pseudodestructorname();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostfixexpressionContext* postfixexpression();
  PostfixexpressionContext* postfixexpression(int precedence);
  class  ExpressionlistContext : public antlr4::ParserRuleContext {
  public:
    ExpressionlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerlistContext *initializerlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionlistContext* expressionlist();

  class  PseudodestructornameContext : public antlr4::ParserRuleContext {
  public:
    PseudodestructornameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ThetypenameContext *> thetypename();
    ThetypenameContext* thetypename(size_t i);
    NestednamespecifierContext *nestednamespecifier();
    antlr4::tree::TerminalNode *Template();
    SimpletemplateidContext *simpletemplateid();
    DecltypespecifierContext *decltypespecifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PseudodestructornameContext* pseudodestructorname();

  class  UnaryexpressionContext : public antlr4::ParserRuleContext {
  public:
    UnaryexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixexpressionContext *postfixexpression();
    CastexpressionContext *castexpression();
    UnaryoperatorContext *unaryoperator();
    antlr4::tree::TerminalNode *Sizeof();
    UnaryexpressionContext *unaryexpression();
    ThetypeidContext *thetypeid();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Alignof();
    NoexceptexpressionContext *noexceptexpression();
    NewexpressionContext *newexpression();
    DeleteexpressionContext *deleteexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryexpressionContext* unaryexpression();

  class  UnaryoperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryoperatorContext* unaryoperator();

  class  NewexpressionContext : public antlr4::ParserRuleContext {
  public:
    NewexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    NewtypeidContext *newtypeid();
    NewplacementContext *newplacement();
    NewinitializerContext *newinitializer();
    ThetypeidContext *thetypeid();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewexpressionContext* newexpression();

  class  NewplacementContext : public antlr4::ParserRuleContext {
  public:
    NewplacementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionlistContext *expressionlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewplacementContext* newplacement();

  class  NewtypeidContext : public antlr4::ParserRuleContext {
  public:
    NewtypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypespecifierseqContext *typespecifierseq();
    NewdeclaratorContext *newdeclarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewtypeidContext* newtypeid();

  class  NewdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NewdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PtroperatorContext *ptroperator();
    NewdeclaratorContext *newdeclarator();
    NoptrnewdeclaratorContext *noptrnewdeclarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewdeclaratorContext* newdeclarator();

  class  NoptrnewdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoptrnewdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    AttributespecifierseqContext *attributespecifierseq();
    NoptrnewdeclaratorContext *noptrnewdeclarator();
    ConstantexpressionContext *constantexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoptrnewdeclaratorContext* noptrnewdeclarator();
  NoptrnewdeclaratorContext* noptrnewdeclarator(int precedence);
  class  NewinitializerContext : public antlr4::ParserRuleContext {
  public:
    NewinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionlistContext *expressionlist();
    BracedinitlistContext *bracedinitlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewinitializerContext* newinitializer();

  class  DeleteexpressionContext : public antlr4::ParserRuleContext {
  public:
    DeleteexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Delete();
    CastexpressionContext *castexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteexpressionContext* deleteexpression();

  class  NoexceptexpressionContext : public antlr4::ParserRuleContext {
  public:
    NoexceptexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Noexcept();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoexceptexpressionContext* noexceptexpression();

  class  CastexpressionContext : public antlr4::ParserRuleContext {
  public:
    CastexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryexpressionContext *unaryexpression();
    ThetypeidContext *thetypeid();
    CastexpressionContext *castexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CastexpressionContext* castexpression();

  class  PmexpressionContext : public antlr4::ParserRuleContext {
  public:
    PmexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CastexpressionContext *castexpression();
    PmexpressionContext *pmexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PmexpressionContext* pmexpression();
  PmexpressionContext* pmexpression(int precedence);
  class  MultiplicativeexpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PmexpressionContext *pmexpression();
    MultiplicativeexpressionContext *multiplicativeexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplicativeexpressionContext* multiplicativeexpression();
  MultiplicativeexpressionContext* multiplicativeexpression(int precedence);
  class  AdditiveexpressionContext : public antlr4::ParserRuleContext {
  public:
    AdditiveexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiplicativeexpressionContext *multiplicativeexpression();
    AdditiveexpressionContext *additiveexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdditiveexpressionContext* additiveexpression();
  AdditiveexpressionContext* additiveexpression(int precedence);
  class  ShiftexpressionContext : public antlr4::ParserRuleContext {
  public:
    ShiftexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AdditiveexpressionContext *additiveexpression();
    ShiftexpressionContext *shiftexpression();
    RightShiftContext *rightShift();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftexpressionContext* shiftexpression();
  ShiftexpressionContext* shiftexpression(int precedence);
  class  RelationalexpressionContext : public antlr4::ParserRuleContext {
  public:
    RelationalexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShiftexpressionContext *shiftexpression();
    RelationalexpressionContext *relationalexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalexpressionContext* relationalexpression();
  RelationalexpressionContext* relationalexpression(int precedence);
  class  EqualityexpressionContext : public antlr4::ParserRuleContext {
  public:
    EqualityexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationalexpressionContext *relationalexpression();
    EqualityexpressionContext *equalityexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualityexpressionContext* equalityexpression();
  EqualityexpressionContext* equalityexpression(int precedence);
  class  AndexpressionContext : public antlr4::ParserRuleContext {
  public:
    AndexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EqualityexpressionContext *equalityexpression();
    AndexpressionContext *andexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AndexpressionContext* andexpression();
  AndexpressionContext* andexpression(int precedence);
  class  ExclusiveorexpressionContext : public antlr4::ParserRuleContext {
  public:
    ExclusiveorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AndexpressionContext *andexpression();
    ExclusiveorexpressionContext *exclusiveorexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExclusiveorexpressionContext* exclusiveorexpression();
  ExclusiveorexpressionContext* exclusiveorexpression(int precedence);
  class  InclusiveorexpressionContext : public antlr4::ParserRuleContext {
  public:
    InclusiveorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExclusiveorexpressionContext *exclusiveorexpression();
    InclusiveorexpressionContext *inclusiveorexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InclusiveorexpressionContext* inclusiveorexpression();
  InclusiveorexpressionContext* inclusiveorexpression(int precedence);
  class  LogicalandexpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalandexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InclusiveorexpressionContext *inclusiveorexpression();
    LogicalandexpressionContext *logicalandexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalandexpressionContext* logicalandexpression();
  LogicalandexpressionContext* logicalandexpression(int precedence);
  class  LogicalorexpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalandexpressionContext *logicalandexpression();
    LogicalorexpressionContext *logicalorexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalorexpressionContext* logicalorexpression();
  LogicalorexpressionContext* logicalorexpression(int precedence);
  class  ConditionalexpressionContext : public antlr4::ParserRuleContext {
  public:
    ConditionalexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalorexpressionContext *logicalorexpression();
    ExpressionContext *expression();
    AssignmentexpressionContext *assignmentexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalexpressionContext* conditionalexpression();

  class  AssignmentexpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignmentexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalexpressionContext *conditionalexpression();
    LogicalorexpressionContext *logicalorexpression();
    AssignmentoperatorContext *assignmentoperator();
    InitializerclauseContext *initializerclause();
    ThrowexpressionContext *throwexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentexpressionContext* assignmentexpression();

  class  AssignmentoperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RightShiftAssignContext *rightShiftAssign();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentoperatorContext* assignmentoperator();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentexpressionContext *assignmentexpression();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  ConstantexpressionContext : public antlr4::ParserRuleContext {
  public:
    ConstantexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalexpressionContext *conditionalexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantexpressionContext* constantexpression();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabeledstatementContext *labeledstatement();
    ExpressionstatementContext *expressionstatement();
    AttributespecifierseqContext *attributespecifierseq();
    CompoundstatementContext *compoundstatement();
    SelectionstatementContext *selectionstatement();
    IterationstatementContext *iterationstatement();
    JumpstatementContext *jumpstatement();
    DeclarationstatementContext *declarationstatement();
    TryblockContext *tryblock();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  LabeledstatementContext : public antlr4::ParserRuleContext {
  public:
    LabeledstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    StatementContext *statement();
    AttributespecifierseqContext *attributespecifierseq();
    antlr4::tree::TerminalNode *Case();
    ConstantexpressionContext *constantexpression();
    antlr4::tree::TerminalNode *Default();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabeledstatementContext* labeledstatement();

  class  ExpressionstatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionstatementContext* expressionstatement();

  class  CompoundstatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementseqContext *statementseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundstatementContext* compoundstatement();

  class  StatementseqContext : public antlr4::ParserRuleContext {
  public:
    StatementseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    StatementseqContext *statementseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementseqContext* statementseq();
  StatementseqContext* statementseq(int precedence);
  class  SelectionstatementContext : public antlr4::ParserRuleContext {
  public:
    SelectionstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    ConditionContext *condition();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *Else();
    antlr4::tree::TerminalNode *Switch();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectionstatementContext* selectionstatement();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    DeclspecifierseqContext *declspecifierseq();
    DeclaratorContext *declarator();
    InitializerclauseContext *initializerclause();
    AttributespecifierseqContext *attributespecifierseq();
    BracedinitlistContext *bracedinitlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  IterationstatementContext : public antlr4::ParserRuleContext {
  public:
    IterationstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    ConditionContext *condition();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Do();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *For();
    ForinitstatementContext *forinitstatement();
    ForrangedeclarationContext *forrangedeclaration();
    ForrangeinitializerContext *forrangeinitializer();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IterationstatementContext* iterationstatement();

  class  ForinitstatementContext : public antlr4::ParserRuleContext {
  public:
    ForinitstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionstatementContext *expressionstatement();
    SimpledeclarationContext *simpledeclaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForinitstatementContext* forinitstatement();

  class  ForrangedeclarationContext : public antlr4::ParserRuleContext {
  public:
    ForrangedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclspecifierseqContext *declspecifierseq();
    DeclaratorContext *declarator();
    AttributespecifierseqContext *attributespecifierseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForrangedeclarationContext* forrangedeclaration();

  class  ForrangeinitializerContext : public antlr4::ParserRuleContext {
  public:
    ForrangeinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    BracedinitlistContext *bracedinitlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForrangeinitializerContext* forrangeinitializer();

  class  JumpstatementContext : public antlr4::ParserRuleContext {
  public:
    JumpstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *Return();
    ExpressionContext *expression();
    BracedinitlistContext *bracedinitlist();
    antlr4::tree::TerminalNode *Goto();
    antlr4::tree::TerminalNode *Identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JumpstatementContext* jumpstatement();

  class  DeclarationstatementContext : public antlr4::ParserRuleContext {
  public:
    DeclarationstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockdeclarationContext *blockdeclaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationstatementContext* declarationstatement();

  class  DeclarationseqContext : public antlr4::ParserRuleContext {
  public:
    DeclarationseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    DeclarationseqContext *declarationseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationseqContext* declarationseq();
  DeclarationseqContext* declarationseq(int precedence);
  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockdeclarationContext *blockdeclaration();
    FunctiondefinitionContext *functiondefinition();
    TemplatedeclarationContext *templatedeclaration();
    ExplicitinstantiationContext *explicitinstantiation();
    ExplicitspecializationContext *explicitspecialization();
    LinkagespecificationContext *linkagespecification();
    NamespacedefinitionContext *namespacedefinition();
    EmptydeclarationContext *emptydeclaration();
    AttributedeclarationContext *attributedeclaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  BlockdeclarationContext : public antlr4::ParserRuleContext {
  public:
    BlockdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpledeclarationContext *simpledeclaration();
    AsmdefinitionContext *asmdefinition();
    NamespacealiasdefinitionContext *namespacealiasdefinition();
    UsingdeclarationContext *usingdeclaration();
    UsingdirectiveContext *usingdirective();
    Static_assertdeclarationContext *static_assertdeclaration();
    AliasdeclarationContext *aliasdeclaration();
    OpaqueenumdeclarationContext *opaqueenumdeclaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockdeclarationContext* blockdeclaration();

  class  AliasdeclarationContext : public antlr4::ParserRuleContext {
  public:
    AliasdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    antlr4::tree::TerminalNode *Identifier();
    ThetypeidContext *thetypeid();
    AttributespecifierseqContext *attributespecifierseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AliasdeclarationContext* aliasdeclaration();

  class  SimpledeclarationContext : public antlr4::ParserRuleContext {
  public:
    SimpledeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclspecifierseqContext *declspecifierseq();
    InitdeclaratorlistContext *initdeclaratorlist();
    AttributespecifierseqContext *attributespecifierseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpledeclarationContext* simpledeclaration();

  class  Static_assertdeclarationContext : public antlr4::ParserRuleContext {
  public:
    Static_assertdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Static_assert();
    ConstantexpressionContext *constantexpression();
    antlr4::tree::TerminalNode *Stringliteral();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Static_assertdeclarationContext* static_assertdeclaration();

  class  EmptydeclarationContext : public antlr4::ParserRuleContext {
  public:
    EmptydeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptydeclarationContext* emptydeclaration();

  class  AttributedeclarationContext : public antlr4::ParserRuleContext {
  public:
    AttributedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributespecifierseqContext *attributespecifierseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributedeclarationContext* attributedeclaration();

  class  DeclspecifierContext : public antlr4::ParserRuleContext {
  public:
    DeclspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StorageclassspecifierContext *storageclassspecifier();
    TypespecifierContext *typespecifier();
    FunctionspecifierContext *functionspecifier();
    antlr4::tree::TerminalNode *Friend();
    antlr4::tree::TerminalNode *Typedef();
    antlr4::tree::TerminalNode *Constexpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclspecifierContext* declspecifier();

  class  DeclspecifierseqContext : public antlr4::ParserRuleContext {
  public:
    DeclspecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclspecifierContext *declspecifier();
    AttributespecifierseqContext *attributespecifierseq();
    DeclspecifierseqContext *declspecifierseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclspecifierseqContext* declspecifierseq();

  class  StorageclassspecifierContext : public antlr4::ParserRuleContext {
  public:
    StorageclassspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Register();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Thread_local();
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *Mutable();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StorageclassspecifierContext* storageclassspecifier();

  class  FunctionspecifierContext : public antlr4::ParserRuleContext {
  public:
    FunctionspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Inline();
    antlr4::tree::TerminalNode *Virtual();
    antlr4::tree::TerminalNode *Explicit();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionspecifierContext* functionspecifier();

  class  TypedefnameContext : public antlr4::ParserRuleContext {
  public:
    TypedefnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypedefnameContext* typedefname();

  class  TypespecifierContext : public antlr4::ParserRuleContext {
  public:
    TypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TrailingtypespecifierContext *trailingtypespecifier();
    ClassspecifierContext *classspecifier();
    EnumspecifierContext *enumspecifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypespecifierContext* typespecifier();

  class  TrailingtypespecifierContext : public antlr4::ParserRuleContext {
  public:
    TrailingtypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpletypespecifierContext *simpletypespecifier();
    ElaboratedtypespecifierContext *elaboratedtypespecifier();
    TypenamespecifierContext *typenamespecifier();
    CvqualifierContext *cvqualifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailingtypespecifierContext* trailingtypespecifier();

  class  TypespecifierseqContext : public antlr4::ParserRuleContext {
  public:
    TypespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypespecifierContext *typespecifier();
    AttributespecifierseqContext *attributespecifierseq();
    TypespecifierseqContext *typespecifierseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypespecifierseqContext* typespecifierseq();

  class  TrailingtypespecifierseqContext : public antlr4::ParserRuleContext {
  public:
    TrailingtypespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TrailingtypespecifierContext *trailingtypespecifier();
    AttributespecifierseqContext *attributespecifierseq();
    TrailingtypespecifierseqContext *trailingtypespecifierseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailingtypespecifierseqContext* trailingtypespecifierseq();

  class  SimpletypespecifierContext : public antlr4::ParserRuleContext {
  public:
    SimpletypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ThetypenameContext *thetypename();
    NestednamespecifierContext *nestednamespecifier();
    antlr4::tree::TerminalNode *Template();
    SimpletemplateidContext *simpletemplateid();
    antlr4::tree::TerminalNode *Char();
    antlr4::tree::TerminalNode *Char16();
    antlr4::tree::TerminalNode *Char32();
    antlr4::tree::TerminalNode *Wchar();
    antlr4::tree::TerminalNode *Bool();
    antlr4::tree::TerminalNode *Short();
    antlr4::tree::TerminalNode *Int();
    antlr4::tree::TerminalNode *Long();
    antlr4::tree::TerminalNode *Signed();
    antlr4::tree::TerminalNode *Unsigned();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *Double();
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *Auto();
    DecltypespecifierContext *decltypespecifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpletypespecifierContext* simpletypespecifier();

  class  ThetypenameContext : public antlr4::ParserRuleContext {
  public:
    ThetypenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassnameContext *classname();
    EnumnameContext *enumname();
    TypedefnameContext *typedefname();
    SimpletemplateidContext *simpletemplateid();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThetypenameContext* thetypename();

  class  DecltypespecifierContext : public antlr4::ParserRuleContext {
  public:
    DecltypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Decltype();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Auto();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecltypespecifierContext* decltypespecifier();

  class  ElaboratedtypespecifierContext : public antlr4::ParserRuleContext {
  public:
    ElaboratedtypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClasskeyContext *classkey();
    antlr4::tree::TerminalNode *Identifier();
    AttributespecifierseqContext *attributespecifierseq();
    NestednamespecifierContext *nestednamespecifier();
    SimpletemplateidContext *simpletemplateid();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Enum();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElaboratedtypespecifierContext* elaboratedtypespecifier();

  class  EnumnameContext : public antlr4::ParserRuleContext {
  public:
    EnumnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumnameContext* enumname();

  class  EnumspecifierContext : public antlr4::ParserRuleContext {
  public:
    EnumspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumheadContext *enumhead();
    EnumeratorlistContext *enumeratorlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumspecifierContext* enumspecifier();

  class  EnumheadContext : public antlr4::ParserRuleContext {
  public:
    EnumheadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumkeyContext *enumkey();
    AttributespecifierseqContext *attributespecifierseq();
    antlr4::tree::TerminalNode *Identifier();
    EnumbaseContext *enumbase();
    NestednamespecifierContext *nestednamespecifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumheadContext* enumhead();

  class  OpaqueenumdeclarationContext : public antlr4::ParserRuleContext {
  public:
    OpaqueenumdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumkeyContext *enumkey();
    antlr4::tree::TerminalNode *Identifier();
    AttributespecifierseqContext *attributespecifierseq();
    EnumbaseContext *enumbase();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpaqueenumdeclarationContext* opaqueenumdeclaration();

  class  EnumkeyContext : public antlr4::ParserRuleContext {
  public:
    EnumkeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Struct();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumkeyContext* enumkey();

  class  EnumbaseContext : public antlr4::ParserRuleContext {
  public:
    EnumbaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypespecifierseqContext *typespecifierseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumbaseContext* enumbase();

  class  EnumeratorlistContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumeratordefinitionContext *enumeratordefinition();
    EnumeratorlistContext *enumeratorlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorlistContext* enumeratorlist();
  EnumeratorlistContext* enumeratorlist(int precedence);
  class  EnumeratordefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumeratordefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumeratorContext *enumerator();
    ConstantexpressionContext *constantexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratordefinitionContext* enumeratordefinition();

  class  EnumeratorContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorContext* enumerator();

  class  NamespacenameContext : public antlr4::ParserRuleContext {
  public:
    NamespacenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OriginalnamespacenameContext *originalnamespacename();
    NamespacealiasContext *namespacealias();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespacenameContext* namespacename();

  class  OriginalnamespacenameContext : public antlr4::ParserRuleContext {
  public:
    OriginalnamespacenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OriginalnamespacenameContext* originalnamespacename();

  class  NamespacedefinitionContext : public antlr4::ParserRuleContext {
  public:
    NamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamednamespacedefinitionContext *namednamespacedefinition();
    UnnamednamespacedefinitionContext *unnamednamespacedefinition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespacedefinitionContext* namespacedefinition();

  class  NamednamespacedefinitionContext : public antlr4::ParserRuleContext {
  public:
    NamednamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OriginalnamespacedefinitionContext *originalnamespacedefinition();
    ExtensionnamespacedefinitionContext *extensionnamespacedefinition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamednamespacedefinitionContext* namednamespacedefinition();

  class  OriginalnamespacedefinitionContext : public antlr4::ParserRuleContext {
  public:
    OriginalnamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *Identifier();
    NamespacebodyContext *namespacebody();
    antlr4::tree::TerminalNode *Inline();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OriginalnamespacedefinitionContext* originalnamespacedefinition();

  class  ExtensionnamespacedefinitionContext : public antlr4::ParserRuleContext {
  public:
    ExtensionnamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    OriginalnamespacenameContext *originalnamespacename();
    NamespacebodyContext *namespacebody();
    antlr4::tree::TerminalNode *Inline();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtensionnamespacedefinitionContext* extensionnamespacedefinition();

  class  UnnamednamespacedefinitionContext : public antlr4::ParserRuleContext {
  public:
    UnnamednamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    NamespacebodyContext *namespacebody();
    antlr4::tree::TerminalNode *Inline();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnnamednamespacedefinitionContext* unnamednamespacedefinition();

  class  NamespacebodyContext : public antlr4::ParserRuleContext {
  public:
    NamespacebodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationseqContext *declarationseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespacebodyContext* namespacebody();

  class  NamespacealiasContext : public antlr4::ParserRuleContext {
  public:
    NamespacealiasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespacealiasContext* namespacealias();

  class  NamespacealiasdefinitionContext : public antlr4::ParserRuleContext {
  public:
    NamespacealiasdefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *Identifier();
    QualifiednamespacespecifierContext *qualifiednamespacespecifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespacealiasdefinitionContext* namespacealiasdefinition();

  class  QualifiednamespacespecifierContext : public antlr4::ParserRuleContext {
  public:
    QualifiednamespacespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamespacenameContext *namespacename();
    NestednamespecifierContext *nestednamespecifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiednamespacespecifierContext* qualifiednamespacespecifier();

  class  UsingdeclarationContext : public antlr4::ParserRuleContext {
  public:
    UsingdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    NestednamespecifierContext *nestednamespecifier();
    UnqualifiedidContext *unqualifiedid();
    antlr4::tree::TerminalNode *Typename();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsingdeclarationContext* usingdeclaration();

  class  UsingdirectiveContext : public antlr4::ParserRuleContext {
  public:
    UsingdirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    antlr4::tree::TerminalNode *Namespace();
    NamespacenameContext *namespacename();
    AttributespecifierseqContext *attributespecifierseq();
    NestednamespecifierContext *nestednamespecifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsingdirectiveContext* usingdirective();

  class  AsmdefinitionContext : public antlr4::ParserRuleContext {
  public:
    AsmdefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Asm();
    antlr4::tree::TerminalNode *Stringliteral();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AsmdefinitionContext* asmdefinition();

  class  LinkagespecificationContext : public antlr4::ParserRuleContext {
  public:
    LinkagespecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *Stringliteral();
    DeclarationseqContext *declarationseq();
    DeclarationContext *declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LinkagespecificationContext* linkagespecification();

  class  AttributespecifierseqContext : public antlr4::ParserRuleContext {
  public:
    AttributespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributespecifierContext *attributespecifier();
    AttributespecifierseqContext *attributespecifierseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributespecifierseqContext* attributespecifierseq();
  AttributespecifierseqContext* attributespecifierseq(int precedence);
  class  AttributespecifierContext : public antlr4::ParserRuleContext {
  public:
    AttributespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributelistContext *attributelist();
    AlignmentspecifierContext *alignmentspecifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributespecifierContext* attributespecifier();

  class  AlignmentspecifierContext : public antlr4::ParserRuleContext {
  public:
    AlignmentspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Alignas();
    ThetypeidContext *thetypeid();
    ConstantexpressionContext *constantexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlignmentspecifierContext* alignmentspecifier();

  class  AttributelistContext : public antlr4::ParserRuleContext {
  public:
    AttributelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeContext *attribute();
    AttributelistContext *attributelist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributelistContext* attributelist();
  AttributelistContext* attributelist(int precedence);
  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributetokenContext *attributetoken();
    AttributeargumentclauseContext *attributeargumentclause();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeContext* attribute();

  class  AttributetokenContext : public antlr4::ParserRuleContext {
  public:
    AttributetokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    AttributescopedtokenContext *attributescopedtoken();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributetokenContext* attributetoken();

  class  AttributescopedtokenContext : public antlr4::ParserRuleContext {
  public:
    AttributescopedtokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributenamespaceContext *attributenamespace();
    antlr4::tree::TerminalNode *Identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributescopedtokenContext* attributescopedtoken();

  class  AttributenamespaceContext : public antlr4::ParserRuleContext {
  public:
    AttributenamespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributenamespaceContext* attributenamespace();

  class  AttributeargumentclauseContext : public antlr4::ParserRuleContext {
  public:
    AttributeargumentclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BalancedtokenseqContext *balancedtokenseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeargumentclauseContext* attributeargumentclause();

  class  BalancedtokenseqContext : public antlr4::ParserRuleContext {
  public:
    BalancedtokenseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BalancedtokenContext *balancedtoken();
    BalancedtokenseqContext *balancedtokenseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BalancedtokenseqContext* balancedtokenseq();
  BalancedtokenseqContext* balancedtokenseq(int precedence);
  class  BalancedtokenContext : public antlr4::ParserRuleContext {
  public:
    BalancedtokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BalancedtokenseqContext *balancedtokenseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BalancedtokenContext* balancedtoken();

  class  InitdeclaratorlistContext : public antlr4::ParserRuleContext {
  public:
    InitdeclaratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitdeclaratorContext *initdeclarator();
    InitdeclaratorlistContext *initdeclaratorlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitdeclaratorlistContext* initdeclaratorlist();
  InitdeclaratorlistContext* initdeclaratorlist(int precedence);
  class  InitdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    InitdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    InitializerContext *initializer();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitdeclaratorContext* initdeclarator();

  class  DeclaratorContext : public antlr4::ParserRuleContext {
  public:
    DeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PtrdeclaratorContext *ptrdeclarator();
    NoptrdeclaratorContext *noptrdeclarator();
    ParametersandqualifiersContext *parametersandqualifiers();
    TrailingreturntypeContext *trailingreturntype();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratorContext* declarator();

  class  PtrdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    PtrdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoptrdeclaratorContext *noptrdeclarator();
    PtroperatorContext *ptroperator();
    PtrdeclaratorContext *ptrdeclarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PtrdeclaratorContext* ptrdeclarator();

  class  NoptrdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoptrdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratoridContext *declaratorid();
    AttributespecifierseqContext *attributespecifierseq();
    PtrdeclaratorContext *ptrdeclarator();
    NoptrdeclaratorContext *noptrdeclarator();
    ParametersandqualifiersContext *parametersandqualifiers();
    ConstantexpressionContext *constantexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoptrdeclaratorContext* noptrdeclarator();
  NoptrdeclaratorContext* noptrdeclarator(int precedence);
  class  ParametersandqualifiersContext : public antlr4::ParserRuleContext {
  public:
    ParametersandqualifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterdeclarationclauseContext *parameterdeclarationclause();
    CvqualifierseqContext *cvqualifierseq();
    RefqualifierContext *refqualifier();
    ExceptionspecificationContext *exceptionspecification();
    AttributespecifierseqContext *attributespecifierseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametersandqualifiersContext* parametersandqualifiers();

  class  TrailingreturntypeContext : public antlr4::ParserRuleContext {
  public:
    TrailingreturntypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TrailingtypespecifierseqContext *trailingtypespecifierseq();
    AbstractdeclaratorContext *abstractdeclarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailingreturntypeContext* trailingreturntype();

  class  PtroperatorContext : public antlr4::ParserRuleContext {
  public:
    PtroperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributespecifierseqContext *attributespecifierseq();
    CvqualifierseqContext *cvqualifierseq();
    NestednamespecifierContext *nestednamespecifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PtroperatorContext* ptroperator();

  class  CvqualifierseqContext : public antlr4::ParserRuleContext {
  public:
    CvqualifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CvqualifierContext *cvqualifier();
    CvqualifierseqContext *cvqualifierseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CvqualifierseqContext* cvqualifierseq();

  class  CvqualifierContext : public antlr4::ParserRuleContext {
  public:
    CvqualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Volatile();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CvqualifierContext* cvqualifier();

  class  RefqualifierContext : public antlr4::ParserRuleContext {
  public:
    RefqualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RefqualifierContext* refqualifier();

  class  DeclaratoridContext : public antlr4::ParserRuleContext {
  public:
    DeclaratoridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdexpressionContext *idexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratoridContext* declaratorid();

  class  ThetypeidContext : public antlr4::ParserRuleContext {
  public:
    ThetypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypespecifierseqContext *typespecifierseq();
    AbstractdeclaratorContext *abstractdeclarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThetypeidContext* thetypeid();

  class  AbstractdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    AbstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PtrabstractdeclaratorContext *ptrabstractdeclarator();
    ParametersandqualifiersContext *parametersandqualifiers();
    TrailingreturntypeContext *trailingreturntype();
    NoptrabstractdeclaratorContext *noptrabstractdeclarator();
    AbstractpackdeclaratorContext *abstractpackdeclarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbstractdeclaratorContext* abstractdeclarator();

  class  PtrabstractdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    PtrabstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoptrabstractdeclaratorContext *noptrabstractdeclarator();
    PtroperatorContext *ptroperator();
    PtrabstractdeclaratorContext *ptrabstractdeclarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PtrabstractdeclaratorContext* ptrabstractdeclarator();

  class  NoptrabstractdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoptrabstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParametersandqualifiersContext *parametersandqualifiers();
    ConstantexpressionContext *constantexpression();
    AttributespecifierseqContext *attributespecifierseq();
    PtrabstractdeclaratorContext *ptrabstractdeclarator();
    NoptrabstractdeclaratorContext *noptrabstractdeclarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoptrabstractdeclaratorContext* noptrabstractdeclarator();
  NoptrabstractdeclaratorContext* noptrabstractdeclarator(int precedence);
  class  AbstractpackdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    AbstractpackdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoptrabstractpackdeclaratorContext *noptrabstractpackdeclarator();
    PtroperatorContext *ptroperator();
    AbstractpackdeclaratorContext *abstractpackdeclarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbstractpackdeclaratorContext* abstractpackdeclarator();

  class  NoptrabstractpackdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoptrabstractpackdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoptrabstractpackdeclaratorContext *noptrabstractpackdeclarator();
    ParametersandqualifiersContext *parametersandqualifiers();
    ConstantexpressionContext *constantexpression();
    AttributespecifierseqContext *attributespecifierseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoptrabstractpackdeclaratorContext* noptrabstractpackdeclarator();
  NoptrabstractpackdeclaratorContext* noptrabstractpackdeclarator(int precedence);
  class  ParameterdeclarationclauseContext : public antlr4::ParserRuleContext {
  public:
    ParameterdeclarationclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterdeclarationlistContext *parameterdeclarationlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterdeclarationclauseContext* parameterdeclarationclause();

  class  ParameterdeclarationlistContext : public antlr4::ParserRuleContext {
  public:
    ParameterdeclarationlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterdeclarationContext *parameterdeclaration();
    ParameterdeclarationlistContext *parameterdeclarationlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterdeclarationlistContext* parameterdeclarationlist();
  ParameterdeclarationlistContext* parameterdeclarationlist(int precedence);
  class  ParameterdeclarationContext : public antlr4::ParserRuleContext {
  public:
    ParameterdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclspecifierseqContext *declspecifierseq();
    DeclaratorContext *declarator();
    AttributespecifierseqContext *attributespecifierseq();
    InitializerclauseContext *initializerclause();
    AbstractdeclaratorContext *abstractdeclarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterdeclarationContext* parameterdeclaration();

  class  FunctiondefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctiondefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    FunctionbodyContext *functionbody();
    AttributespecifierseqContext *attributespecifierseq();
    DeclspecifierseqContext *declspecifierseq();
    VirtspecifierseqContext *virtspecifierseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctiondefinitionContext* functiondefinition();

  class  FunctionbodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionbodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundstatementContext *compoundstatement();
    CtorinitializerContext *ctorinitializer();
    FunctiontryblockContext *functiontryblock();
    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *Delete();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionbodyContext* functionbody();

  class  InitializerContext : public antlr4::ParserRuleContext {
  public:
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BraceorequalinitializerContext *braceorequalinitializer();
    ExpressionlistContext *expressionlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerContext* initializer();

  class  BraceorequalinitializerContext : public antlr4::ParserRuleContext {
  public:
    BraceorequalinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerclauseContext *initializerclause();
    BracedinitlistContext *bracedinitlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BraceorequalinitializerContext* braceorequalinitializer();

  class  InitializerclauseContext : public antlr4::ParserRuleContext {
  public:
    InitializerclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentexpressionContext *assignmentexpression();
    BracedinitlistContext *bracedinitlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerclauseContext* initializerclause();

  class  InitializerlistContext : public antlr4::ParserRuleContext {
  public:
    InitializerlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerclauseContext *initializerclause();
    InitializerlistContext *initializerlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerlistContext* initializerlist();
  InitializerlistContext* initializerlist(int precedence);
  class  BracedinitlistContext : public antlr4::ParserRuleContext {
  public:
    BracedinitlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerlistContext *initializerlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BracedinitlistContext* bracedinitlist();

  class  ClassnameContext : public antlr4::ParserRuleContext {
  public:
    ClassnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    SimpletemplateidContext *simpletemplateid();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassnameContext* classname();

  class  ClassspecifierContext : public antlr4::ParserRuleContext {
  public:
    ClassspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassheadContext *classhead();
    MemberspecificationContext *memberspecification();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassspecifierContext* classspecifier();

  class  ClassheadContext : public antlr4::ParserRuleContext {
  public:
    ClassheadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClasskeyContext *classkey();
    ClassheadnameContext *classheadname();
    AttributespecifierseqContext *attributespecifierseq();
    ClassvirtspecifierContext *classvirtspecifier();
    BaseclauseContext *baseclause();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassheadContext* classhead();

  class  ClassheadnameContext : public antlr4::ParserRuleContext {
  public:
    ClassheadnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassnameContext *classname();
    NestednamespecifierContext *nestednamespecifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassheadnameContext* classheadname();

  class  ClassvirtspecifierContext : public antlr4::ParserRuleContext {
  public:
    ClassvirtspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Final();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassvirtspecifierContext* classvirtspecifier();

  class  ClasskeyContext : public antlr4::ParserRuleContext {
  public:
    ClasskeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Struct();
    antlr4::tree::TerminalNode *Union();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClasskeyContext* classkey();

  class  MemberspecificationContext : public antlr4::ParserRuleContext {
  public:
    MemberspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MemberdeclarationContext *memberdeclaration();
    MemberspecificationContext *memberspecification();
    AccessspecifierContext *accessspecifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberspecificationContext* memberspecification();

  class  MemberdeclarationContext : public antlr4::ParserRuleContext {
  public:
    MemberdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributespecifierseqContext *attributespecifierseq();
    DeclspecifierseqContext *declspecifierseq();
    MemberdeclaratorlistContext *memberdeclaratorlist();
    FunctiondefinitionContext *functiondefinition();
    UsingdeclarationContext *usingdeclaration();
    Static_assertdeclarationContext *static_assertdeclaration();
    TemplatedeclarationContext *templatedeclaration();
    AliasdeclarationContext *aliasdeclaration();
    EmptydeclarationContext *emptydeclaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberdeclarationContext* memberdeclaration();

  class  MemberdeclaratorlistContext : public antlr4::ParserRuleContext {
  public:
    MemberdeclaratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MemberdeclaratorContext *memberdeclarator();
    MemberdeclaratorlistContext *memberdeclaratorlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberdeclaratorlistContext* memberdeclaratorlist();
  MemberdeclaratorlistContext* memberdeclaratorlist(int precedence);
  class  MemberdeclaratorContext : public antlr4::ParserRuleContext {
  public:
    MemberdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    VirtspecifierseqContext *virtspecifierseq();
    PurespecifierContext *purespecifier();
    BraceorequalinitializerContext *braceorequalinitializer();
    ConstantexpressionContext *constantexpression();
    antlr4::tree::TerminalNode *Identifier();
    AttributespecifierseqContext *attributespecifierseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberdeclaratorContext* memberdeclarator();

  class  VirtspecifierseqContext : public antlr4::ParserRuleContext {
  public:
    VirtspecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VirtspecifierContext *virtspecifier();
    VirtspecifierseqContext *virtspecifierseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VirtspecifierseqContext* virtspecifierseq();
  VirtspecifierseqContext* virtspecifierseq(int precedence);
  class  VirtspecifierContext : public antlr4::ParserRuleContext {
  public:
    VirtspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Override();
    antlr4::tree::TerminalNode *Final();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VirtspecifierContext* virtspecifier();

  class  PurespecifierContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *val = nullptr;;
    PurespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Octalliteral();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PurespecifierContext* purespecifier();

  class  BaseclauseContext : public antlr4::ParserRuleContext {
  public:
    BaseclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasespecifierlistContext *basespecifierlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseclauseContext* baseclause();

  class  BasespecifierlistContext : public antlr4::ParserRuleContext {
  public:
    BasespecifierlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasespecifierContext *basespecifier();
    BasespecifierlistContext *basespecifierlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasespecifierlistContext* basespecifierlist();
  BasespecifierlistContext* basespecifierlist(int precedence);
  class  BasespecifierContext : public antlr4::ParserRuleContext {
  public:
    BasespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasetypespecifierContext *basetypespecifier();
    AttributespecifierseqContext *attributespecifierseq();
    antlr4::tree::TerminalNode *Virtual();
    AccessspecifierContext *accessspecifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasespecifierContext* basespecifier();

  class  ClassordecltypeContext : public antlr4::ParserRuleContext {
  public:
    ClassordecltypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassnameContext *classname();
    NestednamespecifierContext *nestednamespecifier();
    DecltypespecifierContext *decltypespecifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassordecltypeContext* classordecltype();

  class  BasetypespecifierContext : public antlr4::ParserRuleContext {
  public:
    BasetypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassordecltypeContext *classordecltype();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasetypespecifierContext* basetypespecifier();

  class  AccessspecifierContext : public antlr4::ParserRuleContext {
  public:
    AccessspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Protected();
    antlr4::tree::TerminalNode *Public();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessspecifierContext* accessspecifier();

  class  ConversionfunctionidContext : public antlr4::ParserRuleContext {
  public:
    ConversionfunctionidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    ConversiontypeidContext *conversiontypeid();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversionfunctionidContext* conversionfunctionid();

  class  ConversiontypeidContext : public antlr4::ParserRuleContext {
  public:
    ConversiontypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypespecifierseqContext *typespecifierseq();
    ConversiondeclaratorContext *conversiondeclarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversiontypeidContext* conversiontypeid();

  class  ConversiondeclaratorContext : public antlr4::ParserRuleContext {
  public:
    ConversiondeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PtroperatorContext *ptroperator();
    ConversiondeclaratorContext *conversiondeclarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversiondeclaratorContext* conversiondeclarator();

  class  CtorinitializerContext : public antlr4::ParserRuleContext {
  public:
    CtorinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MeminitializerlistContext *meminitializerlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CtorinitializerContext* ctorinitializer();

  class  MeminitializerlistContext : public antlr4::ParserRuleContext {
  public:
    MeminitializerlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MeminitializerContext *meminitializer();
    MeminitializerlistContext *meminitializerlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MeminitializerlistContext* meminitializerlist();

  class  MeminitializerContext : public antlr4::ParserRuleContext {
  public:
    MeminitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MeminitializeridContext *meminitializerid();
    ExpressionlistContext *expressionlist();
    BracedinitlistContext *bracedinitlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MeminitializerContext* meminitializer();

  class  MeminitializeridContext : public antlr4::ParserRuleContext {
  public:
    MeminitializeridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassordecltypeContext *classordecltype();
    antlr4::tree::TerminalNode *Identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MeminitializeridContext* meminitializerid();

  class  OperatorfunctionidContext : public antlr4::ParserRuleContext {
  public:
    OperatorfunctionidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    TheoperatorContext *theoperator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorfunctionidContext* operatorfunctionid();

  class  LiteraloperatoridContext : public antlr4::ParserRuleContext {
  public:
    LiteraloperatoridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    antlr4::tree::TerminalNode *Stringliteral();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Userdefinedstringliteral();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteraloperatoridContext* literaloperatorid();

  class  TemplatedeclarationContext : public antlr4::ParserRuleContext {
  public:
    TemplatedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    TemplateparameterlistContext *templateparameterlist();
    DeclarationContext *declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplatedeclarationContext* templatedeclaration();

  class  TemplateparameterlistContext : public antlr4::ParserRuleContext {
  public:
    TemplateparameterlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplateparameterContext *templateparameter();
    TemplateparameterlistContext *templateparameterlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateparameterlistContext* templateparameterlist();

  class  TemplateparameterContext : public antlr4::ParserRuleContext {
  public:
    TemplateparameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeparameterContext *typeparameter();
    ParameterdeclarationContext *parameterdeclaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateparameterContext* templateparameter();

  class  TypeparameterContext : public antlr4::ParserRuleContext {
  public:
    TypeparameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Identifier();
    ThetypeidContext *thetypeid();
    antlr4::tree::TerminalNode *Typename();
    antlr4::tree::TerminalNode *Template();
    TemplateparameterlistContext *templateparameterlist();
    IdexpressionContext *idexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeparameterContext* typeparameter();

  class  SimpletemplateidContext : public antlr4::ParserRuleContext {
  public:
    SimpletemplateidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplatenameContext *templatename();
    TemplateargumentlistContext *templateargumentlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpletemplateidContext* simpletemplateid();

  class  TemplateidContext : public antlr4::ParserRuleContext {
  public:
    TemplateidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpletemplateidContext *simpletemplateid();
    OperatorfunctionidContext *operatorfunctionid();
    TemplateargumentlistContext *templateargumentlist();
    LiteraloperatoridContext *literaloperatorid();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateidContext* templateid();

  class  TemplatenameContext : public antlr4::ParserRuleContext {
  public:
    TemplatenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplatenameContext* templatename();

  class  TemplateargumentlistContext : public antlr4::ParserRuleContext {
  public:
    TemplateargumentlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplateargumentContext *templateargument();
    TemplateargumentlistContext *templateargumentlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateargumentlistContext* templateargumentlist();
  TemplateargumentlistContext* templateargumentlist(int precedence);
  class  TemplateargumentContext : public antlr4::ParserRuleContext {
  public:
    TemplateargumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ThetypeidContext *thetypeid();
    ConstantexpressionContext *constantexpression();
    IdexpressionContext *idexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateargumentContext* templateargument();

  class  TypenamespecifierContext : public antlr4::ParserRuleContext {
  public:
    TypenamespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Typename();
    NestednamespecifierContext *nestednamespecifier();
    antlr4::tree::TerminalNode *Identifier();
    SimpletemplateidContext *simpletemplateid();
    antlr4::tree::TerminalNode *Template();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypenamespecifierContext* typenamespecifier();

  class  ExplicitinstantiationContext : public antlr4::ParserRuleContext {
  public:
    ExplicitinstantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    DeclarationContext *declaration();
    antlr4::tree::TerminalNode *Extern();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplicitinstantiationContext* explicitinstantiation();

  class  ExplicitspecializationContext : public antlr4::ParserRuleContext {
  public:
    ExplicitspecializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    DeclarationContext *declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplicitspecializationContext* explicitspecialization();

  class  TryblockContext : public antlr4::ParserRuleContext {
  public:
    TryblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    CompoundstatementContext *compoundstatement();
    HandlerseqContext *handlerseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TryblockContext* tryblock();

  class  FunctiontryblockContext : public antlr4::ParserRuleContext {
  public:
    FunctiontryblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    CompoundstatementContext *compoundstatement();
    HandlerseqContext *handlerseq();
    CtorinitializerContext *ctorinitializer();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctiontryblockContext* functiontryblock();

  class  HandlerseqContext : public antlr4::ParserRuleContext {
  public:
    HandlerseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HandlerContext *handler();
    HandlerseqContext *handlerseq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerseqContext* handlerseq();

  class  HandlerContext : public antlr4::ParserRuleContext {
  public:
    HandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Catch();
    ExceptiondeclarationContext *exceptiondeclaration();
    CompoundstatementContext *compoundstatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerContext* handler();

  class  ExceptiondeclarationContext : public antlr4::ParserRuleContext {
  public:
    ExceptiondeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypespecifierseqContext *typespecifierseq();
    DeclaratorContext *declarator();
    AttributespecifierseqContext *attributespecifierseq();
    AbstractdeclaratorContext *abstractdeclarator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptiondeclarationContext* exceptiondeclaration();

  class  ThrowexpressionContext : public antlr4::ParserRuleContext {
  public:
    ThrowexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Throw();
    AssignmentexpressionContext *assignmentexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThrowexpressionContext* throwexpression();

  class  ExceptionspecificationContext : public antlr4::ParserRuleContext {
  public:
    ExceptionspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DynamicexceptionspecificationContext *dynamicexceptionspecification();
    NoexceptspecificationContext *noexceptspecification();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptionspecificationContext* exceptionspecification();

  class  DynamicexceptionspecificationContext : public antlr4::ParserRuleContext {
  public:
    DynamicexceptionspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Throw();
    TypeidlistContext *typeidlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DynamicexceptionspecificationContext* dynamicexceptionspecification();

  class  TypeidlistContext : public antlr4::ParserRuleContext {
  public:
    TypeidlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ThetypeidContext *thetypeid();
    TypeidlistContext *typeidlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeidlistContext* typeidlist();
  TypeidlistContext* typeidlist(int precedence);
  class  NoexceptspecificationContext : public antlr4::ParserRuleContext {
  public:
    NoexceptspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Noexcept();
    ConstantexpressionContext *constantexpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoexceptspecificationContext* noexceptspecification();

  class  RightShiftContext : public antlr4::ParserRuleContext {
  public:
    RightShiftContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Greater();
    antlr4::tree::TerminalNode* Greater(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RightShiftContext* rightShift();

  class  RightShiftAssignContext : public antlr4::ParserRuleContext {
  public:
    RightShiftAssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Greater();
    antlr4::tree::TerminalNode* Greater(size_t i);
    antlr4::tree::TerminalNode *Assign();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RightShiftAssignContext* rightShiftAssign();

  class  TheoperatorContext : public antlr4::ParserRuleContext {
  public:
    TheoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *Delete();
    RightShiftContext *rightShift();
    RightShiftAssignContext *rightShiftAssign();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TheoperatorContext* theoperator();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Integerliteral();
    antlr4::tree::TerminalNode *Characterliteral();
    antlr4::tree::TerminalNode *Floatingliteral();
    antlr4::tree::TerminalNode *Stringliteral();
    BooleanliteralContext *booleanliteral();
    PointerliteralContext *pointerliteral();
    UserdefinedliteralContext *userdefinedliteral();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  BooleanliteralContext : public antlr4::ParserRuleContext {
  public:
    BooleanliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *False();
    antlr4::tree::TerminalNode *True();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanliteralContext* booleanliteral();

  class  PointerliteralContext : public antlr4::ParserRuleContext {
  public:
    PointerliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Nullptr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerliteralContext* pointerliteral();

  class  UserdefinedliteralContext : public antlr4::ParserRuleContext {
  public:
    UserdefinedliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Userdefinedintegerliteral();
    antlr4::tree::TerminalNode *Userdefinedfloatingliteral();
    antlr4::tree::TerminalNode *Userdefinedstringliteral();
    antlr4::tree::TerminalNode *Userdefinedcharacterliteral();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserdefinedliteralContext* userdefinedliteral();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool nestednamespecifierSempred(NestednamespecifierContext *_localctx, size_t predicateIndex);
  bool capturelistSempred(CapturelistContext *_localctx, size_t predicateIndex);
  bool postfixexpressionSempred(PostfixexpressionContext *_localctx, size_t predicateIndex);
  bool noptrnewdeclaratorSempred(NoptrnewdeclaratorContext *_localctx, size_t predicateIndex);
  bool pmexpressionSempred(PmexpressionContext *_localctx, size_t predicateIndex);
  bool multiplicativeexpressionSempred(MultiplicativeexpressionContext *_localctx, size_t predicateIndex);
  bool additiveexpressionSempred(AdditiveexpressionContext *_localctx, size_t predicateIndex);
  bool shiftexpressionSempred(ShiftexpressionContext *_localctx, size_t predicateIndex);
  bool relationalexpressionSempred(RelationalexpressionContext *_localctx, size_t predicateIndex);
  bool equalityexpressionSempred(EqualityexpressionContext *_localctx, size_t predicateIndex);
  bool andexpressionSempred(AndexpressionContext *_localctx, size_t predicateIndex);
  bool exclusiveorexpressionSempred(ExclusiveorexpressionContext *_localctx, size_t predicateIndex);
  bool inclusiveorexpressionSempred(InclusiveorexpressionContext *_localctx, size_t predicateIndex);
  bool logicalandexpressionSempred(LogicalandexpressionContext *_localctx, size_t predicateIndex);
  bool logicalorexpressionSempred(LogicalorexpressionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool statementseqSempred(StatementseqContext *_localctx, size_t predicateIndex);
  bool declarationseqSempred(DeclarationseqContext *_localctx, size_t predicateIndex);
  bool enumeratorlistSempred(EnumeratorlistContext *_localctx, size_t predicateIndex);
  bool attributespecifierseqSempred(AttributespecifierseqContext *_localctx, size_t predicateIndex);
  bool attributelistSempred(AttributelistContext *_localctx, size_t predicateIndex);
  bool balancedtokenseqSempred(BalancedtokenseqContext *_localctx, size_t predicateIndex);
  bool initdeclaratorlistSempred(InitdeclaratorlistContext *_localctx, size_t predicateIndex);
  bool noptrdeclaratorSempred(NoptrdeclaratorContext *_localctx, size_t predicateIndex);
  bool noptrabstractdeclaratorSempred(NoptrabstractdeclaratorContext *_localctx, size_t predicateIndex);
  bool noptrabstractpackdeclaratorSempred(NoptrabstractpackdeclaratorContext *_localctx, size_t predicateIndex);
  bool parameterdeclarationlistSempred(ParameterdeclarationlistContext *_localctx, size_t predicateIndex);
  bool initializerlistSempred(InitializerlistContext *_localctx, size_t predicateIndex);
  bool memberdeclaratorlistSempred(MemberdeclaratorlistContext *_localctx, size_t predicateIndex);
  bool virtspecifierseqSempred(VirtspecifierseqContext *_localctx, size_t predicateIndex);
  bool basespecifierlistSempred(BasespecifierlistContext *_localctx, size_t predicateIndex);
  bool templateargumentlistSempred(TemplateargumentlistContext *_localctx, size_t predicateIndex);
  bool typeidlistSempred(TypeidlistContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

