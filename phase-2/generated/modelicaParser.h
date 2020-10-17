
// Generated from modelica.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  modelicaParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    IDENTIFIER = 51, VALID_ID_START = 52, CONSTANT = 53, WS = 54, EF = 55, 
    ZERO = 56
  };

  enum {
    RuleProgram = 0, RuleData_type = 1, RuleIdentifier = 2, RuleString = 3, 
    RuleConstant = 4, RuleUnary_op = 5, RuleBinary_op = 6, RuleBinary_minus = 7, 
    RuleBinary_logical = 8, RuleBinary_mdr = 9, RuleBinary_as = 10, RuleBinary_rel = 11, 
    RuleBinary_eq = 12, RuleCont = 13, RuleRet = 14, RuleEl_if = 15, RuleInput = 16, 
    RuleOutput = 17, RuleEmpty = 18, RuleInput_stmt = 19, RuleOut_stmt = 20, 
    RuleDeclaration = 21, RuleValue = 22, RuleFunction_call = 23, RuleParameter = 24, 
    RuleExpression = 25, RuleStatement = 26, RuleBlock = 27, RuleWhile_stmt = 28, 
    RuleFor_stmt = 29, RuleTernary_stmt = 30, RuleIf_stmt = 31, RuleElse_stmt = 32, 
    RuleFunction_def = 33, RuleReturn_stmt = 34, RuleO_c_b = 35, RuleC_c_b = 36, 
    RuleO_s_b = 37, RuleC_s_b = 38, RuleQ_mark = 39, RuleSemi_c = 40, RuleColon = 41, 
    RuleL_o_b = 42, RuleR_c_b = 43, RuleAdd = 44, RuleSubtract = 45, RuleQuotes = 46, 
    RuleMultiply = 47, RuleDivide = 48, RuleGt = 49, RuleLt = 50, RuleEq = 51, 
    RuleEquals = 52, RuleNot_equals = 53, RuleLt_equal = 54, RuleGt_equal = 55, 
    RuleOr_bop = 56, RuleAnd_bop = 57, RuleNegation = 58, RulePlus_equal = 59, 
    RuleLeft_shift = 60, RuleRight_shift = 61, RulePoint = 62, RuleComma = 63, 
    RuleMod = 64
  };

  modelicaParser(antlr4::TokenStream *input);
  ~modelicaParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class Data_typeContext;
  class IdentifierContext;
  class StringContext;
  class ConstantContext;
  class Unary_opContext;
  class Binary_opContext;
  class Binary_minusContext;
  class Binary_logicalContext;
  class Binary_mdrContext;
  class Binary_asContext;
  class Binary_relContext;
  class Binary_eqContext;
  class ContContext;
  class RetContext;
  class El_ifContext;
  class InputContext;
  class OutputContext;
  class EmptyContext;
  class Input_stmtContext;
  class Out_stmtContext;
  class DeclarationContext;
  class ValueContext;
  class Function_callContext;
  class ParameterContext;
  class ExpressionContext;
  class StatementContext;
  class BlockContext;
  class While_stmtContext;
  class For_stmtContext;
  class Ternary_stmtContext;
  class If_stmtContext;
  class Else_stmtContext;
  class Function_defContext;
  class Return_stmtContext;
  class O_c_bContext;
  class C_c_bContext;
  class O_s_bContext;
  class C_s_bContext;
  class Q_markContext;
  class Semi_cContext;
  class ColonContext;
  class L_o_bContext;
  class R_c_bContext;
  class AddContext;
  class SubtractContext;
  class QuotesContext;
  class MultiplyContext;
  class DivideContext;
  class GtContext;
  class LtContext;
  class EqContext;
  class EqualsContext;
  class Not_equalsContext;
  class Lt_equalContext;
  class Gt_equalContext;
  class Or_bopContext;
  class And_bopContext;
  class NegationContext;
  class Plus_equalContext;
  class Left_shiftContext;
  class Right_shiftContext;
  class PointContext;
  class CommaContext;
  class ModContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Function_defContext *> function_def();
    Function_defContext* function_def(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  Data_typeContext : public antlr4::ParserRuleContext {
  public:
    Data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_typeContext* data_type();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ZERO();
    antlr4::tree::TerminalNode* ZERO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CONSTANT();
    antlr4::tree::TerminalNode* CONSTANT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTANT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  Unary_opContext : public antlr4::ParserRuleContext {
  public:
    Unary_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_opContext* unary_op();

  class  Binary_opContext : public antlr4::ParserRuleContext {
  public:
    Binary_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Or_bopContext *or_bop();
    And_bopContext *and_bop();
    Plus_equalContext *plus_equal();
    Left_shiftContext *left_shift();
    Right_shiftContext *right_shift();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_opContext* binary_op();

  class  Binary_minusContext : public antlr4::ParserRuleContext {
  public:
    Binary_minusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractContext *subtract();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_minusContext* binary_minus();

  class  Binary_logicalContext : public antlr4::ParserRuleContext {
  public:
    Binary_logicalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NegationContext *negation();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_logicalContext* binary_logical();

  class  Binary_mdrContext : public antlr4::ParserRuleContext {
  public:
    Binary_mdrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiplyContext *multiply();
    DivideContext *divide();
    ModContext *mod();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_mdrContext* binary_mdr();

  class  Binary_asContext : public antlr4::ParserRuleContext {
  public:
    Binary_asContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddContext *add();
    SubtractContext *subtract();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_asContext* binary_as();

  class  Binary_relContext : public antlr4::ParserRuleContext {
  public:
    Binary_relContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LtContext *lt();
    Lt_equalContext *lt_equal();
    Gt_equalContext *gt_equal();
    GtContext *gt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_relContext* binary_rel();

  class  Binary_eqContext : public antlr4::ParserRuleContext {
  public:
    Binary_eqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EqualsContext *equals();
    Not_equalsContext *not_equals();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_eqContext* binary_eq();

  class  ContContext : public antlr4::ParserRuleContext {
  public:
    ContContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContContext* cont();

  class  RetContext : public antlr4::ParserRuleContext {
  public:
    RetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RetContext* ret();

  class  El_ifContext : public antlr4::ParserRuleContext {
  public:
    El_ifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  El_ifContext* el_if();

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputContext* input();

  class  OutputContext : public antlr4::ParserRuleContext {
  public:
    OutputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OutputContext* output();

  class  EmptyContext : public antlr4::ParserRuleContext {
  public:
    EmptyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptyContext* empty();

  class  Input_stmtContext : public antlr4::ParserRuleContext {
  public:
    Input_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InputContext *input();
    L_o_bContext *l_o_b();
    R_c_bContext *r_c_b();
    ExpressionContext *expression();
    IdentifierContext *identifier();
    ConstantContext *constant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Input_stmtContext* input_stmt();

  class  Out_stmtContext : public antlr4::ParserRuleContext {
  public:
    Out_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OutputContext *output();
    L_o_bContext *l_o_b();
    R_c_bContext *r_c_b();
    ExpressionContext *expression();
    StringContext *string();
    antlr4::tree::TerminalNode *WS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Out_stmtContext* out_stmt();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<C_s_bContext *> c_s_b();
    C_s_bContext* c_s_b(size_t i);
    std::vector<O_s_bContext *> o_s_b();
    O_s_bContext* o_s_b(size_t i);
    std::vector<CommaContext *> comma();
    CommaContext* comma(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ValueContext() = default;
    void copyFrom(ValueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Function_callingContext : public ValueContext {
  public:
    Function_callingContext(ValueContext *ctx);

    Function_callContext *function_call();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Identifier_varContext : public ValueContext {
  public:
    Identifier_varContext(ValueContext *ctx);

    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Constant_litContext : public ValueContext {
  public:
    Constant_litContext(ValueContext *ctx);

    ConstantContext *constant();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ValueContext* value();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    L_o_bContext *l_o_b();
    ParameterContext *parameter();
    R_c_bContext *r_c_b();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<CommaContext *> comma();
    CommaContext* comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  And_bop_exprContext : public ExpressionContext {
  public:
    And_bop_exprContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    And_bopContext *and_bop();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Relational_expsContext : public ExpressionContext {
  public:
    Relational_expsContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Binary_relContext *binary_rel();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_equalityContext : public ExpressionContext {
  public:
    Expr_equalityContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Value_exprContext : public ExpressionContext {
  public:
    Value_exprContext(ExpressionContext *ctx);

    ValueContext *value();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Mul_div_rem_exprContext : public ExpressionContext {
  public:
    Mul_div_rem_exprContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Binary_mdrContext *binary_mdr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Array_exprContext : public ExpressionContext {
  public:
    Array_exprContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    C_s_bContext *c_s_b();
    O_s_bContext *o_s_b();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_exprContext : public ExpressionContext {
  public:
    Unary_exprContext(ExpressionContext *ctx);

    Unary_opContext *unary_op();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Add_sub_expsContext : public ExpressionContext {
  public:
    Add_sub_expsContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Binary_asContext *binary_as();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_binop_exprContext : public ExpressionContext {
  public:
    Expr_binop_exprContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Binary_opContext *binary_op();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Negative_numbersContext : public ExpressionContext {
  public:
    Negative_numbersContext(ExpressionContext *ctx);

    Binary_minusContext *binary_minus();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Logical_notContext : public ExpressionContext {
  public:
    Logical_notContext(ExpressionContext *ctx);

    NegationContext *negation();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_bracketContext : public ExpressionContext {
  public:
    Expr_bracketContext(ExpressionContext *ctx);

    L_o_bContext *l_o_b();
    ExpressionContext *expression();
    R_c_bContext *r_c_b();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Equality_exprContext : public ExpressionContext {
  public:
    Equality_exprContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Binary_eqContext *binary_eq();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LmaoContext : public ExpressionContext {
  public:
    LmaoContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    C_s_bContext *c_s_b();
    O_s_bContext *o_s_b();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_unaryContext : public ExpressionContext {
  public:
    Expr_unaryContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    Unary_opContext *unary_op();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Or_bop_exprContext : public ExpressionContext {
  public:
    Or_bop_exprContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Or_bopContext *or_bop();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Expr_callContext : public StatementContext {
  public:
    Expr_callContext(StatementContext *ctx);

    ExpressionContext *expression();
    Semi_cContext *semi_c();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Declaration_callContext : public StatementContext {
  public:
    Declaration_callContext(StatementContext *ctx);

    DeclarationContext *declaration();
    Semi_cContext *semi_c();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  While_callContext : public StatementContext {
  public:
    While_callContext(StatementContext *ctx);

    While_stmtContext *while_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  If_callContext : public StatementContext {
  public:
    If_callContext(StatementContext *ctx);

    If_stmtContext *if_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Break_callContext : public StatementContext {
  public:
    Break_callContext(StatementContext *ctx);

    Semi_cContext *semi_c();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Out_callContext : public StatementContext {
  public:
    Out_callContext(StatementContext *ctx);

    Out_stmtContext *out_stmt();
    Semi_cContext *semi_c();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  For_callContext : public StatementContext {
  public:
    For_callContext(StatementContext *ctx);

    For_stmtContext *for_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Continue_callContext : public StatementContext {
  public:
    Continue_callContext(StatementContext *ctx);

    ContContext *cont();
    Semi_cContext *semi_c();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Else_callContext : public StatementContext {
  public:
    Else_callContext(StatementContext *ctx);

    Else_stmtContext *else_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Input_callContext : public StatementContext {
  public:
    Input_callContext(StatementContext *ctx);

    Input_stmtContext *input_stmt();
    Semi_cContext *semi_c();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Return_callContext : public StatementContext {
  public:
    Return_callContext(StatementContext *ctx);

    Return_stmtContext *return_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Func_callContext : public StatementContext {
  public:
    Func_callContext(StatementContext *ctx);

    Function_callContext *function_call();
    Semi_cContext *semi_c();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    O_c_bContext *o_c_b();
    C_c_bContext *c_c_b();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  While_stmtContext : public antlr4::ParserRuleContext {
  public:
    While_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    L_o_bContext *l_o_b();
    R_c_bContext *r_c_b();
    BlockContext *block();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_stmtContext* while_stmt();

  class  For_stmtContext : public antlr4::ParserRuleContext {
  public:
    For_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    L_o_bContext *l_o_b();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<Semi_cContext *> semi_c();
    Semi_cContext* semi_c(size_t i);
    R_c_bContext *r_c_b();
    BlockContext *block();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_stmtContext* for_stmt();

  class  Ternary_stmtContext : public antlr4::ParserRuleContext {
  public:
    Ternary_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    O_c_bContext *o_c_b();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    R_c_bContext *r_c_b();
    Q_markContext *q_mark();
    ColonContext *colon();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ternary_stmtContext* ternary_stmt();

  class  If_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    L_o_bContext *l_o_b();
    ExpressionContext *expression();
    R_c_bContext *r_c_b();
    BlockContext *block();
    Else_stmtContext *else_stmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_stmtContext* if_stmt();

  class  Else_stmtContext : public antlr4::ParserRuleContext {
  public:
    Else_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Else_stmtContext* else_stmt();

  class  Function_defContext : public antlr4::ParserRuleContext {
  public:
    Function_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    L_o_bContext *l_o_b();
    R_c_bContext *r_c_b();
    BlockContext *block();
    std::vector<CommaContext *> comma();
    CommaContext* comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_defContext* function_def();

  class  Return_stmtContext : public antlr4::ParserRuleContext {
  public:
    Return_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RetContext *ret();
    ExpressionContext *expression();
    Semi_cContext *semi_c();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_stmtContext* return_stmt();

  class  O_c_bContext : public antlr4::ParserRuleContext {
  public:
    O_c_bContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  O_c_bContext* o_c_b();

  class  C_c_bContext : public antlr4::ParserRuleContext {
  public:
    C_c_bContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  C_c_bContext* c_c_b();

  class  O_s_bContext : public antlr4::ParserRuleContext {
  public:
    O_s_bContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  O_s_bContext* o_s_b();

  class  C_s_bContext : public antlr4::ParserRuleContext {
  public:
    C_s_bContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  C_s_bContext* c_s_b();

  class  Q_markContext : public antlr4::ParserRuleContext {
  public:
    Q_markContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Q_markContext* q_mark();

  class  Semi_cContext : public antlr4::ParserRuleContext {
  public:
    Semi_cContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Semi_cContext* semi_c();

  class  ColonContext : public antlr4::ParserRuleContext {
  public:
    ColonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColonContext* colon();

  class  L_o_bContext : public antlr4::ParserRuleContext {
  public:
    L_o_bContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  L_o_bContext* l_o_b();

  class  R_c_bContext : public antlr4::ParserRuleContext {
  public:
    R_c_bContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  R_c_bContext* r_c_b();

  class  AddContext : public antlr4::ParserRuleContext {
  public:
    AddContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddContext* add();

  class  SubtractContext : public antlr4::ParserRuleContext {
  public:
    SubtractContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubtractContext* subtract();

  class  QuotesContext : public antlr4::ParserRuleContext {
  public:
    QuotesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuotesContext* quotes();

  class  MultiplyContext : public antlr4::ParserRuleContext {
  public:
    MultiplyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplyContext* multiply();

  class  DivideContext : public antlr4::ParserRuleContext {
  public:
    DivideContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DivideContext* divide();

  class  GtContext : public antlr4::ParserRuleContext {
  public:
    GtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GtContext* gt();

  class  LtContext : public antlr4::ParserRuleContext {
  public:
    LtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LtContext* lt();

  class  EqContext : public antlr4::ParserRuleContext {
  public:
    EqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqContext* eq();

  class  EqualsContext : public antlr4::ParserRuleContext {
  public:
    EqualsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualsContext* equals();

  class  Not_equalsContext : public antlr4::ParserRuleContext {
  public:
    Not_equalsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Not_equalsContext* not_equals();

  class  Lt_equalContext : public antlr4::ParserRuleContext {
  public:
    Lt_equalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lt_equalContext* lt_equal();

  class  Gt_equalContext : public antlr4::ParserRuleContext {
  public:
    Gt_equalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Gt_equalContext* gt_equal();

  class  Or_bopContext : public antlr4::ParserRuleContext {
  public:
    Or_bopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Or_bopContext* or_bop();

  class  And_bopContext : public antlr4::ParserRuleContext {
  public:
    And_bopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  And_bopContext* and_bop();

  class  NegationContext : public antlr4::ParserRuleContext {
  public:
    NegationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NegationContext* negation();

  class  Plus_equalContext : public antlr4::ParserRuleContext {
  public:
    Plus_equalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Plus_equalContext* plus_equal();

  class  Left_shiftContext : public antlr4::ParserRuleContext {
  public:
    Left_shiftContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Left_shiftContext* left_shift();

  class  Right_shiftContext : public antlr4::ParserRuleContext {
  public:
    Right_shiftContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Right_shiftContext* right_shift();

  class  PointContext : public antlr4::ParserRuleContext {
  public:
    PointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointContext* point();

  class  CommaContext : public antlr4::ParserRuleContext {
  public:
    CommaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommaContext* comma();

  class  ModContext : public antlr4::ParserRuleContext {
  public:
    ModContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModContext* mod();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

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

