
// Generated from modelica.g4 by ANTLR 4.7.2


#include "modelicaVisitor.h"

#include "modelicaParser.h"


using namespace antlrcpp;
using namespace antlr4;

modelicaParser::modelicaParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

modelicaParser::~modelicaParser() {
  delete _interpreter;
}

std::string modelicaParser::getGrammarFileName() const {
  return "modelica.g4";
}

const std::vector<std::string>& modelicaParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& modelicaParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

modelicaParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::Function_defContext *> modelicaParser::ProgramContext::function_def() {
  return getRuleContexts<modelicaParser::Function_defContext>();
}

modelicaParser::Function_defContext* modelicaParser::ProgramContext::function_def(size_t i) {
  return getRuleContext<modelicaParser::Function_defContext>(i);
}


size_t modelicaParser::ProgramContext::getRuleIndex() const {
  return modelicaParser::RuleProgram;
}


antlrcpp::Any modelicaParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::ProgramContext* modelicaParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, modelicaParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(130);
      function_def();
      setState(133); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << modelicaParser::T__0)
      | (1ULL << modelicaParser::T__1)
      | (1ULL << modelicaParser::T__2)
      | (1ULL << modelicaParser::T__3)
      | (1ULL << modelicaParser::T__4))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Data_typeContext ------------------------------------------------------------------

modelicaParser::Data_typeContext::Data_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::Data_typeContext::getRuleIndex() const {
  return modelicaParser::RuleData_type;
}


antlrcpp::Any modelicaParser::Data_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitData_type(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Data_typeContext* modelicaParser::data_type() {
  Data_typeContext *_localctx = _tracker.createInstance<Data_typeContext>(_ctx, getState());
  enterRule(_localctx, 2, modelicaParser::RuleData_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << modelicaParser::T__0)
      | (1ULL << modelicaParser::T__1)
      | (1ULL << modelicaParser::T__2)
      | (1ULL << modelicaParser::T__3)
      | (1ULL << modelicaParser::T__4))) != 0))) {
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

//----------------- IdentifierContext ------------------------------------------------------------------

modelicaParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::IdentifierContext::IDENTIFIER() {
  return getToken(modelicaParser::IDENTIFIER, 0);
}


size_t modelicaParser::IdentifierContext::getRuleIndex() const {
  return modelicaParser::RuleIdentifier;
}


antlrcpp::Any modelicaParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::IdentifierContext* modelicaParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 4, modelicaParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    match(modelicaParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

modelicaParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> modelicaParser::StringContext::ZERO() {
  return getTokens(modelicaParser::ZERO);
}

tree::TerminalNode* modelicaParser::StringContext::ZERO(size_t i) {
  return getToken(modelicaParser::ZERO, i);
}

std::vector<tree::TerminalNode *> modelicaParser::StringContext::CONSTANT() {
  return getTokens(modelicaParser::CONSTANT);
}

tree::TerminalNode* modelicaParser::StringContext::CONSTANT(size_t i) {
  return getToken(modelicaParser::CONSTANT, i);
}

std::vector<tree::TerminalNode *> modelicaParser::StringContext::IDENTIFIER() {
  return getTokens(modelicaParser::IDENTIFIER);
}

tree::TerminalNode* modelicaParser::StringContext::IDENTIFIER(size_t i) {
  return getToken(modelicaParser::IDENTIFIER, i);
}


size_t modelicaParser::StringContext::getRuleIndex() const {
  return modelicaParser::RuleString;
}


antlrcpp::Any modelicaParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::StringContext* modelicaParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 6, modelicaParser::RuleString);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    match(modelicaParser::T__5);
    setState(143);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << modelicaParser::IDENTIFIER)
      | (1ULL << modelicaParser::CONSTANT)
      | (1ULL << modelicaParser::ZERO))) != 0)) {
      setState(140);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << modelicaParser::IDENTIFIER)
        | (1ULL << modelicaParser::CONSTANT)
        | (1ULL << modelicaParser::ZERO))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(145);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(146);
    match(modelicaParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

modelicaParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* modelicaParser::ConstantContext::CONSTANT() {
  return getToken(modelicaParser::CONSTANT, 0);
}


size_t modelicaParser::ConstantContext::getRuleIndex() const {
  return modelicaParser::RuleConstant;
}


antlrcpp::Any modelicaParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::ConstantContext* modelicaParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 8, modelicaParser::RuleConstant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(modelicaParser::CONSTANT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_opContext ------------------------------------------------------------------

modelicaParser::Unary_opContext::Unary_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::Unary_opContext::getRuleIndex() const {
  return modelicaParser::RuleUnary_op;
}


antlrcpp::Any modelicaParser::Unary_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitUnary_op(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Unary_opContext* modelicaParser::unary_op() {
  Unary_opContext *_localctx = _tracker.createInstance<Unary_opContext>(_ctx, getState());
  enterRule(_localctx, 10, modelicaParser::RuleUnary_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << modelicaParser::T__6)
      | (1ULL << modelicaParser::T__7)
      | (1ULL << modelicaParser::T__8)
      | (1ULL << modelicaParser::T__9))) != 0))) {
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

//----------------- Binary_opContext ------------------------------------------------------------------

modelicaParser::Binary_opContext::Binary_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Or_bopContext* modelicaParser::Binary_opContext::or_bop() {
  return getRuleContext<modelicaParser::Or_bopContext>(0);
}

modelicaParser::And_bopContext* modelicaParser::Binary_opContext::and_bop() {
  return getRuleContext<modelicaParser::And_bopContext>(0);
}

modelicaParser::Plus_equalContext* modelicaParser::Binary_opContext::plus_equal() {
  return getRuleContext<modelicaParser::Plus_equalContext>(0);
}

modelicaParser::Left_shiftContext* modelicaParser::Binary_opContext::left_shift() {
  return getRuleContext<modelicaParser::Left_shiftContext>(0);
}

modelicaParser::Right_shiftContext* modelicaParser::Binary_opContext::right_shift() {
  return getRuleContext<modelicaParser::Right_shiftContext>(0);
}


size_t modelicaParser::Binary_opContext::getRuleIndex() const {
  return modelicaParser::RuleBinary_op;
}


antlrcpp::Any modelicaParser::Binary_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitBinary_op(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Binary_opContext* modelicaParser::binary_op() {
  Binary_opContext *_localctx = _tracker.createInstance<Binary_opContext>(_ctx, getState());
  enterRule(_localctx, 12, modelicaParser::RuleBinary_op);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::T__41: {
        setState(152);
        or_bop();
        break;
      }

      case modelicaParser::T__42: {
        setState(153);
        and_bop();
        break;
      }

      case modelicaParser::T__44: {
        setState(154);
        plus_equal();
        break;
      }

      case modelicaParser::T__45: {
        setState(155);
        left_shift();
        break;
      }

      case modelicaParser::T__46: {
        setState(156);
        right_shift();
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

//----------------- Binary_minusContext ------------------------------------------------------------------

modelicaParser::Binary_minusContext::Binary_minusContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::SubtractContext* modelicaParser::Binary_minusContext::subtract() {
  return getRuleContext<modelicaParser::SubtractContext>(0);
}


size_t modelicaParser::Binary_minusContext::getRuleIndex() const {
  return modelicaParser::RuleBinary_minus;
}


antlrcpp::Any modelicaParser::Binary_minusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitBinary_minus(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Binary_minusContext* modelicaParser::binary_minus() {
  Binary_minusContext *_localctx = _tracker.createInstance<Binary_minusContext>(_ctx, getState());
  enterRule(_localctx, 14, modelicaParser::RuleBinary_minus);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    subtract();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_logicalContext ------------------------------------------------------------------

modelicaParser::Binary_logicalContext::Binary_logicalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::NegationContext* modelicaParser::Binary_logicalContext::negation() {
  return getRuleContext<modelicaParser::NegationContext>(0);
}


size_t modelicaParser::Binary_logicalContext::getRuleIndex() const {
  return modelicaParser::RuleBinary_logical;
}


antlrcpp::Any modelicaParser::Binary_logicalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitBinary_logical(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Binary_logicalContext* modelicaParser::binary_logical() {
  Binary_logicalContext *_localctx = _tracker.createInstance<Binary_logicalContext>(_ctx, getState());
  enterRule(_localctx, 16, modelicaParser::RuleBinary_logical);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    negation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_mdrContext ------------------------------------------------------------------

modelicaParser::Binary_mdrContext::Binary_mdrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::MultiplyContext* modelicaParser::Binary_mdrContext::multiply() {
  return getRuleContext<modelicaParser::MultiplyContext>(0);
}

modelicaParser::DivideContext* modelicaParser::Binary_mdrContext::divide() {
  return getRuleContext<modelicaParser::DivideContext>(0);
}

modelicaParser::ModContext* modelicaParser::Binary_mdrContext::mod() {
  return getRuleContext<modelicaParser::ModContext>(0);
}


size_t modelicaParser::Binary_mdrContext::getRuleIndex() const {
  return modelicaParser::RuleBinary_mdr;
}


antlrcpp::Any modelicaParser::Binary_mdrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitBinary_mdr(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Binary_mdrContext* modelicaParser::binary_mdr() {
  Binary_mdrContext *_localctx = _tracker.createInstance<Binary_mdrContext>(_ctx, getState());
  enterRule(_localctx, 18, modelicaParser::RuleBinary_mdr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::T__33: {
        setState(163);
        multiply();
        break;
      }

      case modelicaParser::T__34: {
        setState(164);
        divide();
        break;
      }

      case modelicaParser::T__49: {
        setState(165);
        mod();
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

//----------------- Binary_asContext ------------------------------------------------------------------

modelicaParser::Binary_asContext::Binary_asContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::AddContext* modelicaParser::Binary_asContext::add() {
  return getRuleContext<modelicaParser::AddContext>(0);
}

modelicaParser::SubtractContext* modelicaParser::Binary_asContext::subtract() {
  return getRuleContext<modelicaParser::SubtractContext>(0);
}


size_t modelicaParser::Binary_asContext::getRuleIndex() const {
  return modelicaParser::RuleBinary_as;
}


antlrcpp::Any modelicaParser::Binary_asContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitBinary_as(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Binary_asContext* modelicaParser::binary_as() {
  Binary_asContext *_localctx = _tracker.createInstance<Binary_asContext>(_ctx, getState());
  enterRule(_localctx, 20, modelicaParser::RuleBinary_as);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::T__32: {
        setState(168);
        add();
        break;
      }

      case modelicaParser::T__9: {
        setState(169);
        subtract();
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

//----------------- Binary_relContext ------------------------------------------------------------------

modelicaParser::Binary_relContext::Binary_relContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::LtContext* modelicaParser::Binary_relContext::lt() {
  return getRuleContext<modelicaParser::LtContext>(0);
}

modelicaParser::Lt_equalContext* modelicaParser::Binary_relContext::lt_equal() {
  return getRuleContext<modelicaParser::Lt_equalContext>(0);
}

modelicaParser::Gt_equalContext* modelicaParser::Binary_relContext::gt_equal() {
  return getRuleContext<modelicaParser::Gt_equalContext>(0);
}

modelicaParser::GtContext* modelicaParser::Binary_relContext::gt() {
  return getRuleContext<modelicaParser::GtContext>(0);
}


size_t modelicaParser::Binary_relContext::getRuleIndex() const {
  return modelicaParser::RuleBinary_rel;
}


antlrcpp::Any modelicaParser::Binary_relContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitBinary_rel(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Binary_relContext* modelicaParser::binary_rel() {
  Binary_relContext *_localctx = _tracker.createInstance<Binary_relContext>(_ctx, getState());
  enterRule(_localctx, 22, modelicaParser::RuleBinary_rel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::T__36: {
        setState(172);
        lt();
        break;
      }

      case modelicaParser::T__39: {
        setState(173);
        lt_equal();
        break;
      }

      case modelicaParser::T__40: {
        setState(174);
        gt_equal();
        break;
      }

      case modelicaParser::T__35: {
        setState(175);
        gt();
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

//----------------- Binary_eqContext ------------------------------------------------------------------

modelicaParser::Binary_eqContext::Binary_eqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::EqualsContext* modelicaParser::Binary_eqContext::equals() {
  return getRuleContext<modelicaParser::EqualsContext>(0);
}

modelicaParser::Not_equalsContext* modelicaParser::Binary_eqContext::not_equals() {
  return getRuleContext<modelicaParser::Not_equalsContext>(0);
}


size_t modelicaParser::Binary_eqContext::getRuleIndex() const {
  return modelicaParser::RuleBinary_eq;
}


antlrcpp::Any modelicaParser::Binary_eqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitBinary_eq(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Binary_eqContext* modelicaParser::binary_eq() {
  Binary_eqContext *_localctx = _tracker.createInstance<Binary_eqContext>(_ctx, getState());
  enterRule(_localctx, 24, modelicaParser::RuleBinary_eq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::T__37: {
        setState(178);
        equals();
        break;
      }

      case modelicaParser::T__38: {
        setState(179);
        not_equals();
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

//----------------- ContContext ------------------------------------------------------------------

modelicaParser::ContContext::ContContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::ContContext::getRuleIndex() const {
  return modelicaParser::RuleCont;
}


antlrcpp::Any modelicaParser::ContContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitCont(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::ContContext* modelicaParser::cont() {
  ContContext *_localctx = _tracker.createInstance<ContContext>(_ctx, getState());
  enterRule(_localctx, 26, modelicaParser::RuleCont);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    match(modelicaParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetContext ------------------------------------------------------------------

modelicaParser::RetContext::RetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::RetContext::getRuleIndex() const {
  return modelicaParser::RuleRet;
}


antlrcpp::Any modelicaParser::RetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitRet(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::RetContext* modelicaParser::ret() {
  RetContext *_localctx = _tracker.createInstance<RetContext>(_ctx, getState());
  enterRule(_localctx, 28, modelicaParser::RuleRet);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(modelicaParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- El_ifContext ------------------------------------------------------------------

modelicaParser::El_ifContext::El_ifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::El_ifContext::getRuleIndex() const {
  return modelicaParser::RuleEl_if;
}


antlrcpp::Any modelicaParser::El_ifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitEl_if(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::El_ifContext* modelicaParser::el_if() {
  El_ifContext *_localctx = _tracker.createInstance<El_ifContext>(_ctx, getState());
  enterRule(_localctx, 30, modelicaParser::RuleEl_if);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    match(modelicaParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputContext ------------------------------------------------------------------

modelicaParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::InputContext::getRuleIndex() const {
  return modelicaParser::RuleInput;
}


antlrcpp::Any modelicaParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitInput(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::InputContext* modelicaParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 32, modelicaParser::RuleInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    match(modelicaParser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutputContext ------------------------------------------------------------------

modelicaParser::OutputContext::OutputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::OutputContext::getRuleIndex() const {
  return modelicaParser::RuleOutput;
}


antlrcpp::Any modelicaParser::OutputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitOutput(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::OutputContext* modelicaParser::output() {
  OutputContext *_localctx = _tracker.createInstance<OutputContext>(_ctx, getState());
  enterRule(_localctx, 34, modelicaParser::RuleOutput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(modelicaParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyContext ------------------------------------------------------------------

modelicaParser::EmptyContext::EmptyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::EmptyContext::getRuleIndex() const {
  return modelicaParser::RuleEmpty;
}


antlrcpp::Any modelicaParser::EmptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitEmpty(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::EmptyContext* modelicaParser::empty() {
  EmptyContext *_localctx = _tracker.createInstance<EmptyContext>(_ctx, getState());
  enterRule(_localctx, 36, modelicaParser::RuleEmpty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    _la = _input->LA(1);
    if (!(_la == modelicaParser::T__15

    || _la == modelicaParser::T__16)) {
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

//----------------- Input_stmtContext ------------------------------------------------------------------

modelicaParser::Input_stmtContext::Input_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::InputContext* modelicaParser::Input_stmtContext::input() {
  return getRuleContext<modelicaParser::InputContext>(0);
}

modelicaParser::L_o_bContext* modelicaParser::Input_stmtContext::l_o_b() {
  return getRuleContext<modelicaParser::L_o_bContext>(0);
}

modelicaParser::R_c_bContext* modelicaParser::Input_stmtContext::r_c_b() {
  return getRuleContext<modelicaParser::R_c_bContext>(0);
}

modelicaParser::ExpressionContext* modelicaParser::Input_stmtContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}

modelicaParser::IdentifierContext* modelicaParser::Input_stmtContext::identifier() {
  return getRuleContext<modelicaParser::IdentifierContext>(0);
}

modelicaParser::ConstantContext* modelicaParser::Input_stmtContext::constant() {
  return getRuleContext<modelicaParser::ConstantContext>(0);
}


size_t modelicaParser::Input_stmtContext::getRuleIndex() const {
  return modelicaParser::RuleInput_stmt;
}


antlrcpp::Any modelicaParser::Input_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitInput_stmt(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Input_stmtContext* modelicaParser::input_stmt() {
  Input_stmtContext *_localctx = _tracker.createInstance<Input_stmtContext>(_ctx, getState());
  enterRule(_localctx, 38, modelicaParser::RuleInput_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    input();
    setState(195);
    l_o_b();
    setState(200);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      break;
    }

    case 2: {
      setState(197);
      expression(0);
      break;
    }

    case 3: {
      setState(198);
      identifier();
      break;
    }

    case 4: {
      setState(199);
      constant();
      break;
    }

    }
    setState(202);
    r_c_b();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Out_stmtContext ------------------------------------------------------------------

modelicaParser::Out_stmtContext::Out_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::OutputContext* modelicaParser::Out_stmtContext::output() {
  return getRuleContext<modelicaParser::OutputContext>(0);
}

modelicaParser::L_o_bContext* modelicaParser::Out_stmtContext::l_o_b() {
  return getRuleContext<modelicaParser::L_o_bContext>(0);
}

modelicaParser::R_c_bContext* modelicaParser::Out_stmtContext::r_c_b() {
  return getRuleContext<modelicaParser::R_c_bContext>(0);
}

modelicaParser::ExpressionContext* modelicaParser::Out_stmtContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}

modelicaParser::StringContext* modelicaParser::Out_stmtContext::string() {
  return getRuleContext<modelicaParser::StringContext>(0);
}

tree::TerminalNode* modelicaParser::Out_stmtContext::WS() {
  return getToken(modelicaParser::WS, 0);
}


size_t modelicaParser::Out_stmtContext::getRuleIndex() const {
  return modelicaParser::RuleOut_stmt;
}


antlrcpp::Any modelicaParser::Out_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitOut_stmt(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Out_stmtContext* modelicaParser::out_stmt() {
  Out_stmtContext *_localctx = _tracker.createInstance<Out_stmtContext>(_ctx, getState());
  enterRule(_localctx, 40, modelicaParser::RuleOut_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    output();
    setState(205);
    l_o_b();
    setState(210);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::T__6:
      case modelicaParser::T__7:
      case modelicaParser::T__8:
      case modelicaParser::T__9:
      case modelicaParser::T__30:
      case modelicaParser::T__43:
      case modelicaParser::IDENTIFIER:
      case modelicaParser::CONSTANT: {
        setState(206);
        expression(0);
        break;
      }

      case modelicaParser::T__5: {
        setState(207);
        string();
        break;
      }

      case modelicaParser::WS: {
        setState(208);
        match(modelicaParser::WS);
        break;
      }

      case modelicaParser::T__31: {
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(212);
    r_c_b();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

modelicaParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::Data_typeContext* modelicaParser::DeclarationContext::data_type() {
  return getRuleContext<modelicaParser::Data_typeContext>(0);
}

std::vector<modelicaParser::ExpressionContext *> modelicaParser::DeclarationContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::DeclarationContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

std::vector<modelicaParser::C_s_bContext *> modelicaParser::DeclarationContext::c_s_b() {
  return getRuleContexts<modelicaParser::C_s_bContext>();
}

modelicaParser::C_s_bContext* modelicaParser::DeclarationContext::c_s_b(size_t i) {
  return getRuleContext<modelicaParser::C_s_bContext>(i);
}

std::vector<modelicaParser::O_s_bContext *> modelicaParser::DeclarationContext::o_s_b() {
  return getRuleContexts<modelicaParser::O_s_bContext>();
}

modelicaParser::O_s_bContext* modelicaParser::DeclarationContext::o_s_b(size_t i) {
  return getRuleContext<modelicaParser::O_s_bContext>(i);
}

std::vector<modelicaParser::CommaContext *> modelicaParser::DeclarationContext::comma() {
  return getRuleContexts<modelicaParser::CommaContext>();
}

modelicaParser::CommaContext* modelicaParser::DeclarationContext::comma(size_t i) {
  return getRuleContext<modelicaParser::CommaContext>(i);
}

std::vector<modelicaParser::IdentifierContext *> modelicaParser::DeclarationContext::identifier() {
  return getRuleContexts<modelicaParser::IdentifierContext>();
}

modelicaParser::IdentifierContext* modelicaParser::DeclarationContext::identifier(size_t i) {
  return getRuleContext<modelicaParser::IdentifierContext>(i);
}


size_t modelicaParser::DeclarationContext::getRuleIndex() const {
  return modelicaParser::RuleDeclaration;
}


antlrcpp::Any modelicaParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::DeclarationContext* modelicaParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 42, modelicaParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(214);
    data_type();
    setState(215);
    expression(0);
    setState(225);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::T__26) {
      setState(216);
      c_s_b();
      setState(219);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case modelicaParser::IDENTIFIER: {
          setState(217);
          identifier();
          break;
        }

        case modelicaParser::T__25: {
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(221);
      o_s_b();
      setState(227);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(244);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(228);
        comma();
        setState(229);
        expression(0);
        setState(239);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == modelicaParser::T__26) {
          setState(230);
          c_s_b();
          setState(233);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case modelicaParser::IDENTIFIER: {
              setState(231);
              identifier();
              break;
            }

            case modelicaParser::T__25: {
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(235);
          o_s_b();
          setState(241);
          _errHandler->sync(this);
          _la = _input->LA(1);
        } 
      }
      setState(246);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

modelicaParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::ValueContext::getRuleIndex() const {
  return modelicaParser::RuleValue;
}

void modelicaParser::ValueContext::copyFrom(ValueContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Function_callingContext ------------------------------------------------------------------

modelicaParser::Function_callContext* modelicaParser::Function_callingContext::function_call() {
  return getRuleContext<modelicaParser::Function_callContext>(0);
}

modelicaParser::Function_callingContext::Function_callingContext(ValueContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Function_callingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitFunction_calling(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Identifier_varContext ------------------------------------------------------------------

modelicaParser::IdentifierContext* modelicaParser::Identifier_varContext::identifier() {
  return getRuleContext<modelicaParser::IdentifierContext>(0);
}

modelicaParser::Identifier_varContext::Identifier_varContext(ValueContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Identifier_varContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitIdentifier_var(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Constant_litContext ------------------------------------------------------------------

modelicaParser::ConstantContext* modelicaParser::Constant_litContext::constant() {
  return getRuleContext<modelicaParser::ConstantContext>(0);
}

modelicaParser::Constant_litContext::Constant_litContext(ValueContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Constant_litContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitConstant_lit(this);
  else
    return visitor->visitChildren(this);
}
modelicaParser::ValueContext* modelicaParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 44, modelicaParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(250);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ValueContext *>(_tracker.createInstance<modelicaParser::Identifier_varContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(247);
      identifier();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ValueContext *>(_tracker.createInstance<modelicaParser::Constant_litContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(248);
      constant();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<ValueContext *>(_tracker.createInstance<modelicaParser::Function_callingContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(249);
      function_call();
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

//----------------- Function_callContext ------------------------------------------------------------------

modelicaParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::IdentifierContext* modelicaParser::Function_callContext::identifier() {
  return getRuleContext<modelicaParser::IdentifierContext>(0);
}

modelicaParser::L_o_bContext* modelicaParser::Function_callContext::l_o_b() {
  return getRuleContext<modelicaParser::L_o_bContext>(0);
}

modelicaParser::ParameterContext* modelicaParser::Function_callContext::parameter() {
  return getRuleContext<modelicaParser::ParameterContext>(0);
}

modelicaParser::R_c_bContext* modelicaParser::Function_callContext::r_c_b() {
  return getRuleContext<modelicaParser::R_c_bContext>(0);
}


size_t modelicaParser::Function_callContext::getRuleIndex() const {
  return modelicaParser::RuleFunction_call;
}


antlrcpp::Any modelicaParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Function_callContext* modelicaParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 46, modelicaParser::RuleFunction_call);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    identifier();
    setState(253);
    l_o_b();
    setState(254);
    parameter();
    setState(255);
    r_c_b();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

modelicaParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::ExpressionContext *> modelicaParser::ParameterContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::ParameterContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

std::vector<modelicaParser::CommaContext *> modelicaParser::ParameterContext::comma() {
  return getRuleContexts<modelicaParser::CommaContext>();
}

modelicaParser::CommaContext* modelicaParser::ParameterContext::comma(size_t i) {
  return getRuleContext<modelicaParser::CommaContext>(i);
}


size_t modelicaParser::ParameterContext::getRuleIndex() const {
  return modelicaParser::RuleParameter;
}


antlrcpp::Any modelicaParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::ParameterContext* modelicaParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 48, modelicaParser::RuleParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    expression(0);
    setState(263);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == modelicaParser::T__48) {
      setState(258);
      comma();
      setState(259);
      expression(0);
      setState(265);
      _errHandler->sync(this);
      _la = _input->LA(1);
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

modelicaParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::ExpressionContext::getRuleIndex() const {
  return modelicaParser::RuleExpression;
}

void modelicaParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- And_bop_exprContext ------------------------------------------------------------------

std::vector<modelicaParser::ExpressionContext *> modelicaParser::And_bop_exprContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::And_bop_exprContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

modelicaParser::And_bopContext* modelicaParser::And_bop_exprContext::and_bop() {
  return getRuleContext<modelicaParser::And_bopContext>(0);
}

modelicaParser::And_bop_exprContext::And_bop_exprContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::And_bop_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitAnd_bop_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Relational_expsContext ------------------------------------------------------------------

std::vector<modelicaParser::ExpressionContext *> modelicaParser::Relational_expsContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::Relational_expsContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

modelicaParser::Binary_relContext* modelicaParser::Relational_expsContext::binary_rel() {
  return getRuleContext<modelicaParser::Binary_relContext>(0);
}

modelicaParser::Relational_expsContext::Relational_expsContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Relational_expsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitRelational_exps(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_equalityContext ------------------------------------------------------------------

std::vector<modelicaParser::ExpressionContext *> modelicaParser::Expr_equalityContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::Expr_equalityContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

modelicaParser::Expr_equalityContext::Expr_equalityContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Expr_equalityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitExpr_equality(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Value_exprContext ------------------------------------------------------------------

modelicaParser::ValueContext* modelicaParser::Value_exprContext::value() {
  return getRuleContext<modelicaParser::ValueContext>(0);
}

modelicaParser::Value_exprContext::Value_exprContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Value_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitValue_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Mul_div_rem_exprContext ------------------------------------------------------------------

std::vector<modelicaParser::ExpressionContext *> modelicaParser::Mul_div_rem_exprContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::Mul_div_rem_exprContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

modelicaParser::Binary_mdrContext* modelicaParser::Mul_div_rem_exprContext::binary_mdr() {
  return getRuleContext<modelicaParser::Binary_mdrContext>(0);
}

modelicaParser::Mul_div_rem_exprContext::Mul_div_rem_exprContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Mul_div_rem_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitMul_div_rem_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Array_exprContext ------------------------------------------------------------------

std::vector<modelicaParser::ExpressionContext *> modelicaParser::Array_exprContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::Array_exprContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

modelicaParser::C_s_bContext* modelicaParser::Array_exprContext::c_s_b() {
  return getRuleContext<modelicaParser::C_s_bContext>(0);
}

modelicaParser::O_s_bContext* modelicaParser::Array_exprContext::o_s_b() {
  return getRuleContext<modelicaParser::O_s_bContext>(0);
}

modelicaParser::Array_exprContext::Array_exprContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Array_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitArray_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Unary_exprContext ------------------------------------------------------------------

modelicaParser::Unary_opContext* modelicaParser::Unary_exprContext::unary_op() {
  return getRuleContext<modelicaParser::Unary_opContext>(0);
}

modelicaParser::ExpressionContext* modelicaParser::Unary_exprContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}

modelicaParser::Unary_exprContext::Unary_exprContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Unary_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitUnary_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Add_sub_expsContext ------------------------------------------------------------------

std::vector<modelicaParser::ExpressionContext *> modelicaParser::Add_sub_expsContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::Add_sub_expsContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

modelicaParser::Binary_asContext* modelicaParser::Add_sub_expsContext::binary_as() {
  return getRuleContext<modelicaParser::Binary_asContext>(0);
}

modelicaParser::Add_sub_expsContext::Add_sub_expsContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Add_sub_expsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitAdd_sub_exps(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_binop_exprContext ------------------------------------------------------------------

std::vector<modelicaParser::ExpressionContext *> modelicaParser::Expr_binop_exprContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::Expr_binop_exprContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

modelicaParser::Binary_opContext* modelicaParser::Expr_binop_exprContext::binary_op() {
  return getRuleContext<modelicaParser::Binary_opContext>(0);
}

modelicaParser::Expr_binop_exprContext::Expr_binop_exprContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Expr_binop_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitExpr_binop_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Negative_numbersContext ------------------------------------------------------------------

modelicaParser::Binary_minusContext* modelicaParser::Negative_numbersContext::binary_minus() {
  return getRuleContext<modelicaParser::Binary_minusContext>(0);
}

modelicaParser::ExpressionContext* modelicaParser::Negative_numbersContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}

modelicaParser::Negative_numbersContext::Negative_numbersContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Negative_numbersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitNegative_numbers(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Logical_notContext ------------------------------------------------------------------

modelicaParser::NegationContext* modelicaParser::Logical_notContext::negation() {
  return getRuleContext<modelicaParser::NegationContext>(0);
}

modelicaParser::ExpressionContext* modelicaParser::Logical_notContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}

modelicaParser::Logical_notContext::Logical_notContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Logical_notContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitLogical_not(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_bracketContext ------------------------------------------------------------------

modelicaParser::L_o_bContext* modelicaParser::Expr_bracketContext::l_o_b() {
  return getRuleContext<modelicaParser::L_o_bContext>(0);
}

modelicaParser::ExpressionContext* modelicaParser::Expr_bracketContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}

modelicaParser::R_c_bContext* modelicaParser::Expr_bracketContext::r_c_b() {
  return getRuleContext<modelicaParser::R_c_bContext>(0);
}

modelicaParser::Expr_bracketContext::Expr_bracketContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Expr_bracketContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitExpr_bracket(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Equality_exprContext ------------------------------------------------------------------

std::vector<modelicaParser::ExpressionContext *> modelicaParser::Equality_exprContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::Equality_exprContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

modelicaParser::Binary_eqContext* modelicaParser::Equality_exprContext::binary_eq() {
  return getRuleContext<modelicaParser::Binary_eqContext>(0);
}

modelicaParser::Equality_exprContext::Equality_exprContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Equality_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitEquality_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LmaoContext ------------------------------------------------------------------

std::vector<modelicaParser::ExpressionContext *> modelicaParser::LmaoContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::LmaoContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

modelicaParser::C_s_bContext* modelicaParser::LmaoContext::c_s_b() {
  return getRuleContext<modelicaParser::C_s_bContext>(0);
}

modelicaParser::O_s_bContext* modelicaParser::LmaoContext::o_s_b() {
  return getRuleContext<modelicaParser::O_s_bContext>(0);
}

modelicaParser::LmaoContext::LmaoContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::LmaoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitLmao(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_unaryContext ------------------------------------------------------------------

modelicaParser::ExpressionContext* modelicaParser::Expr_unaryContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}

modelicaParser::Unary_opContext* modelicaParser::Expr_unaryContext::unary_op() {
  return getRuleContext<modelicaParser::Unary_opContext>(0);
}

modelicaParser::Expr_unaryContext::Expr_unaryContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Expr_unaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitExpr_unary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Or_bop_exprContext ------------------------------------------------------------------

std::vector<modelicaParser::ExpressionContext *> modelicaParser::Or_bop_exprContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::Or_bop_exprContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

modelicaParser::Or_bopContext* modelicaParser::Or_bop_exprContext::or_bop() {
  return getRuleContext<modelicaParser::Or_bopContext>(0);
}

modelicaParser::Or_bop_exprContext::Or_bop_exprContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Or_bop_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitOr_bop_expr(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::ExpressionContext* modelicaParser::expression() {
   return expression(0);
}

modelicaParser::ExpressionContext* modelicaParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  modelicaParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  modelicaParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, modelicaParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(281);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Expr_bracketContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(267);
      l_o_b();
      setState(268);
      expression(0);
      setState(269);
      r_c_b();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Negative_numbersContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(271);
      binary_minus();
      setState(272);
      expression(15);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Logical_notContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(274);
      negation();
      setState(275);
      expression(14);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<Unary_exprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(277);
      unary_op();
      setState(278);
      expression(3);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<Value_exprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(280);
      value();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(328);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(326);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Mul_div_rem_exprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(283);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(284);
          binary_mdr();
          setState(285);
          expression(14);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Add_sub_expsContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(287);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(288);
          binary_as();
          setState(289);
          expression(13);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Relational_expsContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(291);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(292);
          binary_rel();
          setState(293);
          expression(12);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<Equality_exprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(295);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(296);
          binary_eq();
          setState(297);
          expression(11);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<And_bop_exprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(299);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(300);
          and_bop();
          setState(301);
          expression(10);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<Or_bop_exprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(303);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(304);
          or_bop();
          setState(305);
          expression(9);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<Expr_equalityContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(307);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(308);
          match(modelicaParser::T__17);
          setState(309);
          expression(8);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<Expr_binop_exprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(310);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(311);
          binary_op();
          setState(312);
          expression(6);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<LmaoContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(314);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");

          setState(315);
          c_s_b();
          setState(316);
          expression(0);
          setState(317);
          o_s_b();
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<Array_exprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(319);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(320);
          c_s_b();
          setState(321);
          expression(0);
          setState(322);
          o_s_b();
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<Expr_unaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(324);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(325);
          unary_op();
          break;
        }

        } 
      }
      setState(330);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

modelicaParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::StatementContext::getRuleIndex() const {
  return modelicaParser::RuleStatement;
}

void modelicaParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_callContext ------------------------------------------------------------------

modelicaParser::ExpressionContext* modelicaParser::Expr_callContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}

modelicaParser::Semi_cContext* modelicaParser::Expr_callContext::semi_c() {
  return getRuleContext<modelicaParser::Semi_cContext>(0);
}

modelicaParser::Expr_callContext::Expr_callContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Expr_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitExpr_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Declaration_callContext ------------------------------------------------------------------

modelicaParser::DeclarationContext* modelicaParser::Declaration_callContext::declaration() {
  return getRuleContext<modelicaParser::DeclarationContext>(0);
}

modelicaParser::Semi_cContext* modelicaParser::Declaration_callContext::semi_c() {
  return getRuleContext<modelicaParser::Semi_cContext>(0);
}

modelicaParser::Declaration_callContext::Declaration_callContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Declaration_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitDeclaration_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- While_callContext ------------------------------------------------------------------

modelicaParser::While_stmtContext* modelicaParser::While_callContext::while_stmt() {
  return getRuleContext<modelicaParser::While_stmtContext>(0);
}

modelicaParser::While_callContext::While_callContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::While_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitWhile_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- If_callContext ------------------------------------------------------------------

modelicaParser::If_stmtContext* modelicaParser::If_callContext::if_stmt() {
  return getRuleContext<modelicaParser::If_stmtContext>(0);
}

modelicaParser::If_callContext::If_callContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::If_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitIf_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Break_callContext ------------------------------------------------------------------

modelicaParser::Semi_cContext* modelicaParser::Break_callContext::semi_c() {
  return getRuleContext<modelicaParser::Semi_cContext>(0);
}

modelicaParser::Break_callContext::Break_callContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Break_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitBreak_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Out_callContext ------------------------------------------------------------------

modelicaParser::Out_stmtContext* modelicaParser::Out_callContext::out_stmt() {
  return getRuleContext<modelicaParser::Out_stmtContext>(0);
}

modelicaParser::Semi_cContext* modelicaParser::Out_callContext::semi_c() {
  return getRuleContext<modelicaParser::Semi_cContext>(0);
}

modelicaParser::Out_callContext::Out_callContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Out_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitOut_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- For_callContext ------------------------------------------------------------------

modelicaParser::For_stmtContext* modelicaParser::For_callContext::for_stmt() {
  return getRuleContext<modelicaParser::For_stmtContext>(0);
}

modelicaParser::For_callContext::For_callContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::For_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitFor_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Continue_callContext ------------------------------------------------------------------

modelicaParser::ContContext* modelicaParser::Continue_callContext::cont() {
  return getRuleContext<modelicaParser::ContContext>(0);
}

modelicaParser::Semi_cContext* modelicaParser::Continue_callContext::semi_c() {
  return getRuleContext<modelicaParser::Semi_cContext>(0);
}

modelicaParser::Continue_callContext::Continue_callContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Continue_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitContinue_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Else_callContext ------------------------------------------------------------------

modelicaParser::Else_stmtContext* modelicaParser::Else_callContext::else_stmt() {
  return getRuleContext<modelicaParser::Else_stmtContext>(0);
}

modelicaParser::Else_callContext::Else_callContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Else_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitElse_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Input_callContext ------------------------------------------------------------------

modelicaParser::Input_stmtContext* modelicaParser::Input_callContext::input_stmt() {
  return getRuleContext<modelicaParser::Input_stmtContext>(0);
}

modelicaParser::Semi_cContext* modelicaParser::Input_callContext::semi_c() {
  return getRuleContext<modelicaParser::Semi_cContext>(0);
}

modelicaParser::Input_callContext::Input_callContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Input_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitInput_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Return_callContext ------------------------------------------------------------------

modelicaParser::Return_stmtContext* modelicaParser::Return_callContext::return_stmt() {
  return getRuleContext<modelicaParser::Return_stmtContext>(0);
}

modelicaParser::Return_callContext::Return_callContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Return_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitReturn_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Func_callContext ------------------------------------------------------------------

modelicaParser::Function_callContext* modelicaParser::Func_callContext::function_call() {
  return getRuleContext<modelicaParser::Function_callContext>(0);
}

modelicaParser::Semi_cContext* modelicaParser::Func_callContext::semi_c() {
  return getRuleContext<modelicaParser::Semi_cContext>(0);
}

modelicaParser::Func_callContext::Func_callContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any modelicaParser::Func_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitFunc_call(this);
  else
    return visitor->visitChildren(this);
}
modelicaParser::StatementContext* modelicaParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 52, modelicaParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(356);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<modelicaParser::Declaration_callContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(331);
      declaration();
      setState(332);
      semi_c();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<modelicaParser::Expr_callContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(334);
      expression(0);
      setState(335);
      semi_c();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<modelicaParser::Func_callContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(337);
      function_call();
      setState(338);
      semi_c();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<modelicaParser::Break_callContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(340);
      match(modelicaParser::T__18);
      setState(341);
      semi_c();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<modelicaParser::Continue_callContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(342);
      cont();
      setState(343);
      semi_c();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<modelicaParser::Input_callContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(345);
      input_stmt();
      setState(346);
      semi_c();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<modelicaParser::Out_callContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(348);
      out_stmt();
      setState(349);
      semi_c();
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<modelicaParser::If_callContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(351);
      if_stmt();
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<modelicaParser::Else_callContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(352);
      else_stmt();
      break;
    }

    case 10: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<modelicaParser::For_callContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(353);
      for_stmt();
      break;
    }

    case 11: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<modelicaParser::Return_callContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(354);
      return_stmt();
      break;
    }

    case 12: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<modelicaParser::While_callContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(355);
      while_stmt();
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

//----------------- BlockContext ------------------------------------------------------------------

modelicaParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::StatementContext *> modelicaParser::BlockContext::statement() {
  return getRuleContexts<modelicaParser::StatementContext>();
}

modelicaParser::StatementContext* modelicaParser::BlockContext::statement(size_t i) {
  return getRuleContext<modelicaParser::StatementContext>(i);
}

modelicaParser::O_c_bContext* modelicaParser::BlockContext::o_c_b() {
  return getRuleContext<modelicaParser::O_c_bContext>(0);
}

modelicaParser::C_c_bContext* modelicaParser::BlockContext::c_c_b() {
  return getRuleContext<modelicaParser::C_c_bContext>(0);
}


size_t modelicaParser::BlockContext::getRuleIndex() const {
  return modelicaParser::RuleBlock;
}


antlrcpp::Any modelicaParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::BlockContext* modelicaParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 54, modelicaParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(368);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::T__0:
      case modelicaParser::T__1:
      case modelicaParser::T__2:
      case modelicaParser::T__3:
      case modelicaParser::T__4:
      case modelicaParser::T__6:
      case modelicaParser::T__7:
      case modelicaParser::T__8:
      case modelicaParser::T__9:
      case modelicaParser::T__10:
      case modelicaParser::T__11:
      case modelicaParser::T__13:
      case modelicaParser::T__14:
      case modelicaParser::T__18:
      case modelicaParser::T__19:
      case modelicaParser::T__20:
      case modelicaParser::T__21:
      case modelicaParser::T__22:
      case modelicaParser::T__30:
      case modelicaParser::T__43:
      case modelicaParser::IDENTIFIER:
      case modelicaParser::CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(358);
        statement();
        break;
      }

      case modelicaParser::T__23: {
        enterOuterAlt(_localctx, 2);
        setState(359);
        o_c_b();
        setState(363);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << modelicaParser::T__0)
          | (1ULL << modelicaParser::T__1)
          | (1ULL << modelicaParser::T__2)
          | (1ULL << modelicaParser::T__3)
          | (1ULL << modelicaParser::T__4)
          | (1ULL << modelicaParser::T__6)
          | (1ULL << modelicaParser::T__7)
          | (1ULL << modelicaParser::T__8)
          | (1ULL << modelicaParser::T__9)
          | (1ULL << modelicaParser::T__10)
          | (1ULL << modelicaParser::T__11)
          | (1ULL << modelicaParser::T__13)
          | (1ULL << modelicaParser::T__14)
          | (1ULL << modelicaParser::T__18)
          | (1ULL << modelicaParser::T__19)
          | (1ULL << modelicaParser::T__20)
          | (1ULL << modelicaParser::T__21)
          | (1ULL << modelicaParser::T__22)
          | (1ULL << modelicaParser::T__30)
          | (1ULL << modelicaParser::T__43)
          | (1ULL << modelicaParser::IDENTIFIER)
          | (1ULL << modelicaParser::CONSTANT))) != 0)) {
          setState(360);
          statement();
          setState(365);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(366);
        c_c_b();
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

//----------------- While_stmtContext ------------------------------------------------------------------

modelicaParser::While_stmtContext::While_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::L_o_bContext* modelicaParser::While_stmtContext::l_o_b() {
  return getRuleContext<modelicaParser::L_o_bContext>(0);
}

modelicaParser::R_c_bContext* modelicaParser::While_stmtContext::r_c_b() {
  return getRuleContext<modelicaParser::R_c_bContext>(0);
}

modelicaParser::BlockContext* modelicaParser::While_stmtContext::block() {
  return getRuleContext<modelicaParser::BlockContext>(0);
}

modelicaParser::ExpressionContext* modelicaParser::While_stmtContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}


size_t modelicaParser::While_stmtContext::getRuleIndex() const {
  return modelicaParser::RuleWhile_stmt;
}


antlrcpp::Any modelicaParser::While_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitWhile_stmt(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::While_stmtContext* modelicaParser::while_stmt() {
  While_stmtContext *_localctx = _tracker.createInstance<While_stmtContext>(_ctx, getState());
  enterRule(_localctx, 56, modelicaParser::RuleWhile_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(370);
    match(modelicaParser::T__19);
    setState(371);
    l_o_b();

    setState(372);
    expression(0);
    setState(373);
    r_c_b();
    setState(374);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_stmtContext ------------------------------------------------------------------

modelicaParser::For_stmtContext::For_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::L_o_bContext* modelicaParser::For_stmtContext::l_o_b() {
  return getRuleContext<modelicaParser::L_o_bContext>(0);
}

std::vector<modelicaParser::ExpressionContext *> modelicaParser::For_stmtContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::For_stmtContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

std::vector<modelicaParser::Semi_cContext *> modelicaParser::For_stmtContext::semi_c() {
  return getRuleContexts<modelicaParser::Semi_cContext>();
}

modelicaParser::Semi_cContext* modelicaParser::For_stmtContext::semi_c(size_t i) {
  return getRuleContext<modelicaParser::Semi_cContext>(i);
}

modelicaParser::R_c_bContext* modelicaParser::For_stmtContext::r_c_b() {
  return getRuleContext<modelicaParser::R_c_bContext>(0);
}

modelicaParser::BlockContext* modelicaParser::For_stmtContext::block() {
  return getRuleContext<modelicaParser::BlockContext>(0);
}


size_t modelicaParser::For_stmtContext::getRuleIndex() const {
  return modelicaParser::RuleFor_stmt;
}


antlrcpp::Any modelicaParser::For_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitFor_stmt(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::For_stmtContext* modelicaParser::for_stmt() {
  For_stmtContext *_localctx = _tracker.createInstance<For_stmtContext>(_ctx, getState());
  enterRule(_localctx, 58, modelicaParser::RuleFor_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(376);
    match(modelicaParser::T__20);
    setState(377);
    l_o_b();
    setState(378);
    expression(0);
    setState(379);
    semi_c();
    setState(380);
    expression(0);
    setState(381);
    semi_c();
    setState(382);
    expression(0);
    setState(383);
    r_c_b();
    setState(384);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ternary_stmtContext ------------------------------------------------------------------

modelicaParser::Ternary_stmtContext::Ternary_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::O_c_bContext* modelicaParser::Ternary_stmtContext::o_c_b() {
  return getRuleContext<modelicaParser::O_c_bContext>(0);
}

std::vector<modelicaParser::ExpressionContext *> modelicaParser::Ternary_stmtContext::expression() {
  return getRuleContexts<modelicaParser::ExpressionContext>();
}

modelicaParser::ExpressionContext* modelicaParser::Ternary_stmtContext::expression(size_t i) {
  return getRuleContext<modelicaParser::ExpressionContext>(i);
}

modelicaParser::R_c_bContext* modelicaParser::Ternary_stmtContext::r_c_b() {
  return getRuleContext<modelicaParser::R_c_bContext>(0);
}

modelicaParser::Q_markContext* modelicaParser::Ternary_stmtContext::q_mark() {
  return getRuleContext<modelicaParser::Q_markContext>(0);
}

modelicaParser::ColonContext* modelicaParser::Ternary_stmtContext::colon() {
  return getRuleContext<modelicaParser::ColonContext>(0);
}


size_t modelicaParser::Ternary_stmtContext::getRuleIndex() const {
  return modelicaParser::RuleTernary_stmt;
}


antlrcpp::Any modelicaParser::Ternary_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitTernary_stmt(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Ternary_stmtContext* modelicaParser::ternary_stmt() {
  Ternary_stmtContext *_localctx = _tracker.createInstance<Ternary_stmtContext>(_ctx, getState());
  enterRule(_localctx, 60, modelicaParser::RuleTernary_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(386);
    o_c_b();
    setState(387);
    expression(0);
    setState(388);
    r_c_b();
    setState(389);
    q_mark();
    setState(390);
    expression(0);
    setState(391);
    colon();
    setState(392);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmtContext ------------------------------------------------------------------

modelicaParser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::L_o_bContext* modelicaParser::If_stmtContext::l_o_b() {
  return getRuleContext<modelicaParser::L_o_bContext>(0);
}

modelicaParser::ExpressionContext* modelicaParser::If_stmtContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}

modelicaParser::R_c_bContext* modelicaParser::If_stmtContext::r_c_b() {
  return getRuleContext<modelicaParser::R_c_bContext>(0);
}

modelicaParser::BlockContext* modelicaParser::If_stmtContext::block() {
  return getRuleContext<modelicaParser::BlockContext>(0);
}

modelicaParser::Else_stmtContext* modelicaParser::If_stmtContext::else_stmt() {
  return getRuleContext<modelicaParser::Else_stmtContext>(0);
}


size_t modelicaParser::If_stmtContext::getRuleIndex() const {
  return modelicaParser::RuleIf_stmt;
}


antlrcpp::Any modelicaParser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::If_stmtContext* modelicaParser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 62, modelicaParser::RuleIf_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(394);
    match(modelicaParser::T__21);
    setState(395);
    l_o_b();
    setState(396);
    expression(0);
    setState(397);
    r_c_b();
    setState(398);
    block();

    setState(399);
    else_stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_stmtContext ------------------------------------------------------------------

modelicaParser::Else_stmtContext::Else_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::BlockContext* modelicaParser::Else_stmtContext::block() {
  return getRuleContext<modelicaParser::BlockContext>(0);
}


size_t modelicaParser::Else_stmtContext::getRuleIndex() const {
  return modelicaParser::RuleElse_stmt;
}


antlrcpp::Any modelicaParser::Else_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitElse_stmt(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Else_stmtContext* modelicaParser::else_stmt() {
  Else_stmtContext *_localctx = _tracker.createInstance<Else_stmtContext>(_ctx, getState());
  enterRule(_localctx, 64, modelicaParser::RuleElse_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    match(modelicaParser::T__22);
    setState(402);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_defContext ------------------------------------------------------------------

modelicaParser::Function_defContext::Function_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<modelicaParser::DeclarationContext *> modelicaParser::Function_defContext::declaration() {
  return getRuleContexts<modelicaParser::DeclarationContext>();
}

modelicaParser::DeclarationContext* modelicaParser::Function_defContext::declaration(size_t i) {
  return getRuleContext<modelicaParser::DeclarationContext>(i);
}

modelicaParser::L_o_bContext* modelicaParser::Function_defContext::l_o_b() {
  return getRuleContext<modelicaParser::L_o_bContext>(0);
}

modelicaParser::R_c_bContext* modelicaParser::Function_defContext::r_c_b() {
  return getRuleContext<modelicaParser::R_c_bContext>(0);
}

modelicaParser::BlockContext* modelicaParser::Function_defContext::block() {
  return getRuleContext<modelicaParser::BlockContext>(0);
}

std::vector<modelicaParser::CommaContext *> modelicaParser::Function_defContext::comma() {
  return getRuleContexts<modelicaParser::CommaContext>();
}

modelicaParser::CommaContext* modelicaParser::Function_defContext::comma(size_t i) {
  return getRuleContext<modelicaParser::CommaContext>(i);
}


size_t modelicaParser::Function_defContext::getRuleIndex() const {
  return modelicaParser::RuleFunction_def;
}


antlrcpp::Any modelicaParser::Function_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitFunction_def(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Function_defContext* modelicaParser::function_def() {
  Function_defContext *_localctx = _tracker.createInstance<Function_defContext>(_ctx, getState());
  enterRule(_localctx, 66, modelicaParser::RuleFunction_def);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(404);
    declaration();
    setState(405);
    l_o_b();
    setState(416);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case modelicaParser::T__0:
      case modelicaParser::T__1:
      case modelicaParser::T__2:
      case modelicaParser::T__3:
      case modelicaParser::T__4: {
        setState(406);
        declaration();
        setState(412);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == modelicaParser::T__48) {
          setState(407);
          comma();
          setState(408);
          declaration();
          setState(414);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case modelicaParser::T__31: {
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(418);
    r_c_b();
    setState(419);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_stmtContext ------------------------------------------------------------------

modelicaParser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

modelicaParser::RetContext* modelicaParser::Return_stmtContext::ret() {
  return getRuleContext<modelicaParser::RetContext>(0);
}

modelicaParser::ExpressionContext* modelicaParser::Return_stmtContext::expression() {
  return getRuleContext<modelicaParser::ExpressionContext>(0);
}

modelicaParser::Semi_cContext* modelicaParser::Return_stmtContext::semi_c() {
  return getRuleContext<modelicaParser::Semi_cContext>(0);
}


size_t modelicaParser::Return_stmtContext::getRuleIndex() const {
  return modelicaParser::RuleReturn_stmt;
}


antlrcpp::Any modelicaParser::Return_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitReturn_stmt(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Return_stmtContext* modelicaParser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 68, modelicaParser::RuleReturn_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(421);
    ret();
    setState(422);
    expression(0);
    setState(423);
    semi_c();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- O_c_bContext ------------------------------------------------------------------

modelicaParser::O_c_bContext::O_c_bContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::O_c_bContext::getRuleIndex() const {
  return modelicaParser::RuleO_c_b;
}


antlrcpp::Any modelicaParser::O_c_bContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitO_c_b(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::O_c_bContext* modelicaParser::o_c_b() {
  O_c_bContext *_localctx = _tracker.createInstance<O_c_bContext>(_ctx, getState());
  enterRule(_localctx, 70, modelicaParser::RuleO_c_b);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(425);
    match(modelicaParser::T__23);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- C_c_bContext ------------------------------------------------------------------

modelicaParser::C_c_bContext::C_c_bContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::C_c_bContext::getRuleIndex() const {
  return modelicaParser::RuleC_c_b;
}


antlrcpp::Any modelicaParser::C_c_bContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitC_c_b(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::C_c_bContext* modelicaParser::c_c_b() {
  C_c_bContext *_localctx = _tracker.createInstance<C_c_bContext>(_ctx, getState());
  enterRule(_localctx, 72, modelicaParser::RuleC_c_b);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(427);
    match(modelicaParser::T__24);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- O_s_bContext ------------------------------------------------------------------

modelicaParser::O_s_bContext::O_s_bContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::O_s_bContext::getRuleIndex() const {
  return modelicaParser::RuleO_s_b;
}


antlrcpp::Any modelicaParser::O_s_bContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitO_s_b(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::O_s_bContext* modelicaParser::o_s_b() {
  O_s_bContext *_localctx = _tracker.createInstance<O_s_bContext>(_ctx, getState());
  enterRule(_localctx, 74, modelicaParser::RuleO_s_b);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(429);
    match(modelicaParser::T__25);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- C_s_bContext ------------------------------------------------------------------

modelicaParser::C_s_bContext::C_s_bContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::C_s_bContext::getRuleIndex() const {
  return modelicaParser::RuleC_s_b;
}


antlrcpp::Any modelicaParser::C_s_bContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitC_s_b(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::C_s_bContext* modelicaParser::c_s_b() {
  C_s_bContext *_localctx = _tracker.createInstance<C_s_bContext>(_ctx, getState());
  enterRule(_localctx, 76, modelicaParser::RuleC_s_b);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(431);
    match(modelicaParser::T__26);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Q_markContext ------------------------------------------------------------------

modelicaParser::Q_markContext::Q_markContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::Q_markContext::getRuleIndex() const {
  return modelicaParser::RuleQ_mark;
}


antlrcpp::Any modelicaParser::Q_markContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitQ_mark(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Q_markContext* modelicaParser::q_mark() {
  Q_markContext *_localctx = _tracker.createInstance<Q_markContext>(_ctx, getState());
  enterRule(_localctx, 78, modelicaParser::RuleQ_mark);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(433);
    match(modelicaParser::T__27);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Semi_cContext ------------------------------------------------------------------

modelicaParser::Semi_cContext::Semi_cContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::Semi_cContext::getRuleIndex() const {
  return modelicaParser::RuleSemi_c;
}


antlrcpp::Any modelicaParser::Semi_cContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitSemi_c(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Semi_cContext* modelicaParser::semi_c() {
  Semi_cContext *_localctx = _tracker.createInstance<Semi_cContext>(_ctx, getState());
  enterRule(_localctx, 80, modelicaParser::RuleSemi_c);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(435);
    match(modelicaParser::T__28);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ColonContext ------------------------------------------------------------------

modelicaParser::ColonContext::ColonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::ColonContext::getRuleIndex() const {
  return modelicaParser::RuleColon;
}


antlrcpp::Any modelicaParser::ColonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitColon(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::ColonContext* modelicaParser::colon() {
  ColonContext *_localctx = _tracker.createInstance<ColonContext>(_ctx, getState());
  enterRule(_localctx, 82, modelicaParser::RuleColon);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(437);
    match(modelicaParser::T__29);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- L_o_bContext ------------------------------------------------------------------

modelicaParser::L_o_bContext::L_o_bContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::L_o_bContext::getRuleIndex() const {
  return modelicaParser::RuleL_o_b;
}


antlrcpp::Any modelicaParser::L_o_bContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitL_o_b(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::L_o_bContext* modelicaParser::l_o_b() {
  L_o_bContext *_localctx = _tracker.createInstance<L_o_bContext>(_ctx, getState());
  enterRule(_localctx, 84, modelicaParser::RuleL_o_b);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
    match(modelicaParser::T__30);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- R_c_bContext ------------------------------------------------------------------

modelicaParser::R_c_bContext::R_c_bContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::R_c_bContext::getRuleIndex() const {
  return modelicaParser::RuleR_c_b;
}


antlrcpp::Any modelicaParser::R_c_bContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitR_c_b(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::R_c_bContext* modelicaParser::r_c_b() {
  R_c_bContext *_localctx = _tracker.createInstance<R_c_bContext>(_ctx, getState());
  enterRule(_localctx, 86, modelicaParser::RuleR_c_b);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(441);
    match(modelicaParser::T__31);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddContext ------------------------------------------------------------------

modelicaParser::AddContext::AddContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::AddContext::getRuleIndex() const {
  return modelicaParser::RuleAdd;
}


antlrcpp::Any modelicaParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::AddContext* modelicaParser::add() {
  AddContext *_localctx = _tracker.createInstance<AddContext>(_ctx, getState());
  enterRule(_localctx, 88, modelicaParser::RuleAdd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(443);
    match(modelicaParser::T__32);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractContext ------------------------------------------------------------------

modelicaParser::SubtractContext::SubtractContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::SubtractContext::getRuleIndex() const {
  return modelicaParser::RuleSubtract;
}


antlrcpp::Any modelicaParser::SubtractContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitSubtract(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::SubtractContext* modelicaParser::subtract() {
  SubtractContext *_localctx = _tracker.createInstance<SubtractContext>(_ctx, getState());
  enterRule(_localctx, 90, modelicaParser::RuleSubtract);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(445);
    match(modelicaParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuotesContext ------------------------------------------------------------------

modelicaParser::QuotesContext::QuotesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::QuotesContext::getRuleIndex() const {
  return modelicaParser::RuleQuotes;
}


antlrcpp::Any modelicaParser::QuotesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitQuotes(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::QuotesContext* modelicaParser::quotes() {
  QuotesContext *_localctx = _tracker.createInstance<QuotesContext>(_ctx, getState());
  enterRule(_localctx, 92, modelicaParser::RuleQuotes);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(447);
    match(modelicaParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplyContext ------------------------------------------------------------------

modelicaParser::MultiplyContext::MultiplyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::MultiplyContext::getRuleIndex() const {
  return modelicaParser::RuleMultiply;
}


antlrcpp::Any modelicaParser::MultiplyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitMultiply(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::MultiplyContext* modelicaParser::multiply() {
  MultiplyContext *_localctx = _tracker.createInstance<MultiplyContext>(_ctx, getState());
  enterRule(_localctx, 94, modelicaParser::RuleMultiply);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(449);
    match(modelicaParser::T__33);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DivideContext ------------------------------------------------------------------

modelicaParser::DivideContext::DivideContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::DivideContext::getRuleIndex() const {
  return modelicaParser::RuleDivide;
}


antlrcpp::Any modelicaParser::DivideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitDivide(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::DivideContext* modelicaParser::divide() {
  DivideContext *_localctx = _tracker.createInstance<DivideContext>(_ctx, getState());
  enterRule(_localctx, 96, modelicaParser::RuleDivide);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(451);
    match(modelicaParser::T__34);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GtContext ------------------------------------------------------------------

modelicaParser::GtContext::GtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::GtContext::getRuleIndex() const {
  return modelicaParser::RuleGt;
}


antlrcpp::Any modelicaParser::GtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitGt(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::GtContext* modelicaParser::gt() {
  GtContext *_localctx = _tracker.createInstance<GtContext>(_ctx, getState());
  enterRule(_localctx, 98, modelicaParser::RuleGt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    match(modelicaParser::T__35);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LtContext ------------------------------------------------------------------

modelicaParser::LtContext::LtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::LtContext::getRuleIndex() const {
  return modelicaParser::RuleLt;
}


antlrcpp::Any modelicaParser::LtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitLt(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::LtContext* modelicaParser::lt() {
  LtContext *_localctx = _tracker.createInstance<LtContext>(_ctx, getState());
  enterRule(_localctx, 100, modelicaParser::RuleLt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    match(modelicaParser::T__36);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqContext ------------------------------------------------------------------

modelicaParser::EqContext::EqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::EqContext::getRuleIndex() const {
  return modelicaParser::RuleEq;
}


antlrcpp::Any modelicaParser::EqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitEq(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::EqContext* modelicaParser::eq() {
  EqContext *_localctx = _tracker.createInstance<EqContext>(_ctx, getState());
  enterRule(_localctx, 102, modelicaParser::RuleEq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(457);
    match(modelicaParser::T__17);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualsContext ------------------------------------------------------------------

modelicaParser::EqualsContext::EqualsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::EqualsContext::getRuleIndex() const {
  return modelicaParser::RuleEquals;
}


antlrcpp::Any modelicaParser::EqualsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitEquals(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::EqualsContext* modelicaParser::equals() {
  EqualsContext *_localctx = _tracker.createInstance<EqualsContext>(_ctx, getState());
  enterRule(_localctx, 104, modelicaParser::RuleEquals);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(459);
    match(modelicaParser::T__37);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Not_equalsContext ------------------------------------------------------------------

modelicaParser::Not_equalsContext::Not_equalsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::Not_equalsContext::getRuleIndex() const {
  return modelicaParser::RuleNot_equals;
}


antlrcpp::Any modelicaParser::Not_equalsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitNot_equals(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Not_equalsContext* modelicaParser::not_equals() {
  Not_equalsContext *_localctx = _tracker.createInstance<Not_equalsContext>(_ctx, getState());
  enterRule(_localctx, 106, modelicaParser::RuleNot_equals);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(461);
    match(modelicaParser::T__38);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Lt_equalContext ------------------------------------------------------------------

modelicaParser::Lt_equalContext::Lt_equalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::Lt_equalContext::getRuleIndex() const {
  return modelicaParser::RuleLt_equal;
}


antlrcpp::Any modelicaParser::Lt_equalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitLt_equal(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Lt_equalContext* modelicaParser::lt_equal() {
  Lt_equalContext *_localctx = _tracker.createInstance<Lt_equalContext>(_ctx, getState());
  enterRule(_localctx, 108, modelicaParser::RuleLt_equal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(463);
    match(modelicaParser::T__39);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Gt_equalContext ------------------------------------------------------------------

modelicaParser::Gt_equalContext::Gt_equalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::Gt_equalContext::getRuleIndex() const {
  return modelicaParser::RuleGt_equal;
}


antlrcpp::Any modelicaParser::Gt_equalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitGt_equal(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Gt_equalContext* modelicaParser::gt_equal() {
  Gt_equalContext *_localctx = _tracker.createInstance<Gt_equalContext>(_ctx, getState());
  enterRule(_localctx, 110, modelicaParser::RuleGt_equal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(465);
    match(modelicaParser::T__40);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Or_bopContext ------------------------------------------------------------------

modelicaParser::Or_bopContext::Or_bopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::Or_bopContext::getRuleIndex() const {
  return modelicaParser::RuleOr_bop;
}


antlrcpp::Any modelicaParser::Or_bopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitOr_bop(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Or_bopContext* modelicaParser::or_bop() {
  Or_bopContext *_localctx = _tracker.createInstance<Or_bopContext>(_ctx, getState());
  enterRule(_localctx, 112, modelicaParser::RuleOr_bop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(467);
    match(modelicaParser::T__41);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- And_bopContext ------------------------------------------------------------------

modelicaParser::And_bopContext::And_bopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::And_bopContext::getRuleIndex() const {
  return modelicaParser::RuleAnd_bop;
}


antlrcpp::Any modelicaParser::And_bopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitAnd_bop(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::And_bopContext* modelicaParser::and_bop() {
  And_bopContext *_localctx = _tracker.createInstance<And_bopContext>(_ctx, getState());
  enterRule(_localctx, 114, modelicaParser::RuleAnd_bop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    match(modelicaParser::T__42);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NegationContext ------------------------------------------------------------------

modelicaParser::NegationContext::NegationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::NegationContext::getRuleIndex() const {
  return modelicaParser::RuleNegation;
}


antlrcpp::Any modelicaParser::NegationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitNegation(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::NegationContext* modelicaParser::negation() {
  NegationContext *_localctx = _tracker.createInstance<NegationContext>(_ctx, getState());
  enterRule(_localctx, 116, modelicaParser::RuleNegation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    match(modelicaParser::T__43);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Plus_equalContext ------------------------------------------------------------------

modelicaParser::Plus_equalContext::Plus_equalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::Plus_equalContext::getRuleIndex() const {
  return modelicaParser::RulePlus_equal;
}


antlrcpp::Any modelicaParser::Plus_equalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitPlus_equal(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Plus_equalContext* modelicaParser::plus_equal() {
  Plus_equalContext *_localctx = _tracker.createInstance<Plus_equalContext>(_ctx, getState());
  enterRule(_localctx, 118, modelicaParser::RulePlus_equal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(473);
    match(modelicaParser::T__44);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Left_shiftContext ------------------------------------------------------------------

modelicaParser::Left_shiftContext::Left_shiftContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::Left_shiftContext::getRuleIndex() const {
  return modelicaParser::RuleLeft_shift;
}


antlrcpp::Any modelicaParser::Left_shiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitLeft_shift(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Left_shiftContext* modelicaParser::left_shift() {
  Left_shiftContext *_localctx = _tracker.createInstance<Left_shiftContext>(_ctx, getState());
  enterRule(_localctx, 120, modelicaParser::RuleLeft_shift);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(475);
    match(modelicaParser::T__45);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Right_shiftContext ------------------------------------------------------------------

modelicaParser::Right_shiftContext::Right_shiftContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::Right_shiftContext::getRuleIndex() const {
  return modelicaParser::RuleRight_shift;
}


antlrcpp::Any modelicaParser::Right_shiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitRight_shift(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::Right_shiftContext* modelicaParser::right_shift() {
  Right_shiftContext *_localctx = _tracker.createInstance<Right_shiftContext>(_ctx, getState());
  enterRule(_localctx, 122, modelicaParser::RuleRight_shift);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(477);
    match(modelicaParser::T__46);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointContext ------------------------------------------------------------------

modelicaParser::PointContext::PointContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::PointContext::getRuleIndex() const {
  return modelicaParser::RulePoint;
}


antlrcpp::Any modelicaParser::PointContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitPoint(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::PointContext* modelicaParser::point() {
  PointContext *_localctx = _tracker.createInstance<PointContext>(_ctx, getState());
  enterRule(_localctx, 124, modelicaParser::RulePoint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(479);
    match(modelicaParser::T__47);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommaContext ------------------------------------------------------------------

modelicaParser::CommaContext::CommaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::CommaContext::getRuleIndex() const {
  return modelicaParser::RuleComma;
}


antlrcpp::Any modelicaParser::CommaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitComma(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::CommaContext* modelicaParser::comma() {
  CommaContext *_localctx = _tracker.createInstance<CommaContext>(_ctx, getState());
  enterRule(_localctx, 126, modelicaParser::RuleComma);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(481);
    match(modelicaParser::T__48);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModContext ------------------------------------------------------------------

modelicaParser::ModContext::ModContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t modelicaParser::ModContext::getRuleIndex() const {
  return modelicaParser::RuleMod;
}


antlrcpp::Any modelicaParser::ModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<modelicaVisitor*>(visitor))
    return parserVisitor->visitMod(this);
  else
    return visitor->visitChildren(this);
}

modelicaParser::ModContext* modelicaParser::mod() {
  ModContext *_localctx = _tracker.createInstance<ModContext>(_ctx, getState());
  enterRule(_localctx, 128, modelicaParser::RuleMod);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(483);
    match(modelicaParser::T__49);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool modelicaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 25: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool modelicaParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 13);
    case 1: return precpred(_ctx, 12);
    case 2: return precpred(_ctx, 11);
    case 3: return precpred(_ctx, 10);
    case 4: return precpred(_ctx, 9);
    case 5: return precpred(_ctx, 8);
    case 6: return precpred(_ctx, 7);
    case 7: return precpred(_ctx, 5);
    case 8: return precpred(_ctx, 6);
    case 9: return precpred(_ctx, 4);
    case 10: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> modelicaParser::_decisionToDFA;
atn::PredictionContextCache modelicaParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN modelicaParser::_atn;
std::vector<uint16_t> modelicaParser::_serializedATN;

std::vector<std::string> modelicaParser::_ruleNames = {
  "program", "data_type", "identifier", "string", "constant", "unary_op", 
  "binary_op", "binary_minus", "binary_logical", "binary_mdr", "binary_as", 
  "binary_rel", "binary_eq", "cont", "ret", "el_if", "input", "output", 
  "empty", "input_stmt", "out_stmt", "declaration", "value", "function_call", 
  "parameter", "expression", "statement", "block", "while_stmt", "for_stmt", 
  "ternary_stmt", "if_stmt", "else_stmt", "function_def", "return_stmt", 
  "o_c_b", "c_c_b", "o_s_b", "c_s_b", "q_mark", "semi_c", "colon", "l_o_b", 
  "r_c_b", "add", "subtract", "quotes", "multiply", "divide", "gt", "lt", 
  "eq", "equals", "not_equals", "lt_equal", "gt_equal", "or_bop", "and_bop", 
  "negation", "plus_equal", "left_shift", "right_shift", "point", "comma", 
  "mod"
};

std::vector<std::string> modelicaParser::_literalNames = {
  "", "'int'", "'uint'", "'char'", "'bool'", "'float'", "'\"'", "'++'", 
  "'--'", "'!'", "'-'", "'continue'", "'return'", "'elif'", "'scan'", "'print'", 
  "'e'", "'E'", "'='", "'break'", "'while'", "'for'", "'if'", "'else'", 
  "'{'", "'}'", "']'", "'['", "'?'", "';'", "':'", "'('", "')'", "'+'", 
  "'*'", "'/'", "'>'", "'<'", "'=='", "'!='", "'<='", "'>='", "'||'", "'&&'", 
  "'~'", "'+='", "'<<'", "'>>'", "'.'", "','", "'%'"
};

std::vector<std::string> modelicaParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "IDENTIFIER", 
  "VALID_ID_START", "CONSTANT", "WS", "EF", "ZERO"
};

dfa::Vocabulary modelicaParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> modelicaParser::_tokenNames;

modelicaParser::Initializer::Initializer() {
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

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x3a, 0x1e8, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x3, 0x2, 0x6, 0x2, 0x86, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x87, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x90, 0xa, 
    0x5, 0xc, 0x5, 0xe, 0x5, 0x93, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0xa0, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xa9, 0xa, 0xb, 0x3, 0xc, 
    0x3, 0xc, 0x5, 0xc, 0xad, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x5, 0xd, 0xb3, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xb7, 0xa, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 
    0xcb, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xd5, 0xa, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 
    0x17, 0xde, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0xe2, 0xa, 0x17, 
    0xc, 0x17, 0xe, 0x17, 0xe5, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0xec, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x7, 0x17, 0xf0, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0xf3, 0xb, 0x17, 0x7, 
    0x17, 0xf5, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0xf8, 0xb, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0xfd, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x7, 0x1a, 0x108, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x10b, 0xb, 
    0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x11c, 0xa, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x149, 0xa, 0x1b, 0xc, 0x1b, 
    0xe, 0x1b, 0x14c, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x167, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x7, 0x1d, 0x16c, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x16f, 
    0xb, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x173, 0xa, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x7, 0x23, 0x19d, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x1a0, 0xb, 0x23, 
    0x3, 0x23, 0x5, 0x23, 0x1a3, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 
    0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 
    0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 
    0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
    0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x2, 0x3, 0x34, 0x43, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
    0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 
    0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 
    0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 
    0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x2, 0x6, 0x3, 0x2, 
    0x3, 0x7, 0x5, 0x2, 0x35, 0x35, 0x37, 0x37, 0x3a, 0x3a, 0x3, 0x2, 0x9, 
    0xc, 0x3, 0x2, 0x12, 0x13, 0x2, 0x1df, 0x2, 0x85, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x89, 0x3, 0x2, 0x2, 0x2, 0x6, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8, 0x8d, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x96, 0x3, 0x2, 0x2, 0x2, 0xc, 0x98, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x10, 0xa1, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x14, 0xa8, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0xac, 0x3, 0x2, 0x2, 0x2, 0x18, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xb6, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xb8, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xba, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x22, 0xbe, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x26, 0xc2, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0xc4, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xce, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0xd8, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xfc, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x32, 0x103, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x11b, 0x3, 0x2, 0x2, 0x2, 0x36, 0x166, 0x3, 0x2, 0x2, 0x2, 0x38, 0x172, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x174, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x17a, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x184, 0x3, 0x2, 0x2, 0x2, 0x40, 0x18c, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x193, 0x3, 0x2, 0x2, 0x2, 0x44, 0x196, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x48, 0x1ab, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x1b1, 0x3, 0x2, 0x2, 0x2, 0x50, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1b5, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x56, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x1bd, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x1c1, 0x3, 0x2, 0x2, 
    0x2, 0x60, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x62, 0x1c5, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x66, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x68, 
    0x1cb, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x1cf, 
    0x3, 0x2, 0x2, 0x2, 0x6e, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x70, 0x1d3, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x74, 0x1d7, 0x3, 0x2, 
    0x2, 0x2, 0x76, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x78, 0x1db, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x1df, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x80, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x82, 
    0x1e5, 0x3, 0x2, 0x2, 0x2, 0x84, 0x86, 0x5, 0x44, 0x23, 0x2, 0x85, 0x84, 
    0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x85, 0x3, 
    0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 0x88, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x89, 0x8a, 0x9, 0x2, 0x2, 0x2, 0x8a, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x8b, 0x8c, 0x7, 0x35, 0x2, 0x2, 0x8c, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x8d, 0x91, 0x7, 0x8, 0x2, 0x2, 0x8e, 0x90, 0x9, 0x3, 0x2, 0x2, 0x8f, 
    0x8e, 0x3, 0x2, 0x2, 0x2, 0x90, 0x93, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8f, 
    0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x94, 0x3, 
    0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x7, 0x8, 
    0x2, 0x2, 0x95, 0x9, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x7, 0x37, 0x2, 
    0x2, 0x97, 0xb, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x9, 0x4, 0x2, 0x2, 
    0x99, 0xd, 0x3, 0x2, 0x2, 0x2, 0x9a, 0xa0, 0x5, 0x72, 0x3a, 0x2, 0x9b, 
    0xa0, 0x5, 0x74, 0x3b, 0x2, 0x9c, 0xa0, 0x5, 0x78, 0x3d, 0x2, 0x9d, 
    0xa0, 0x5, 0x7a, 0x3e, 0x2, 0x9e, 0xa0, 0x5, 0x7c, 0x3f, 0x2, 0x9f, 
    0x9a, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x9c, 
    0x3, 0x2, 0x2, 0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x9e, 0x3, 
    0x2, 0x2, 0x2, 0xa0, 0xf, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x5, 0x5c, 
    0x2f, 0x2, 0xa2, 0x11, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x5, 0x76, 0x3c, 
    0x2, 0xa4, 0x13, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa9, 0x5, 0x60, 0x31, 0x2, 
    0xa6, 0xa9, 0x5, 0x62, 0x32, 0x2, 0xa7, 0xa9, 0x5, 0x82, 0x42, 0x2, 
    0xa8, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa8, 
    0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x15, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xad, 
    0x5, 0x5a, 0x2e, 0x2, 0xab, 0xad, 0x5, 0x5c, 0x2f, 0x2, 0xac, 0xaa, 
    0x3, 0x2, 0x2, 0x2, 0xac, 0xab, 0x3, 0x2, 0x2, 0x2, 0xad, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0xb3, 0x5, 0x66, 0x34, 0x2, 0xaf, 0xb3, 0x5, 0x6e, 
    0x38, 0x2, 0xb0, 0xb3, 0x5, 0x70, 0x39, 0x2, 0xb1, 0xb3, 0x5, 0x64, 
    0x33, 0x2, 0xb2, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb1, 0x3, 0x2, 0x2, 0x2, 
    0xb3, 0x19, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb7, 0x5, 0x6a, 0x36, 0x2, 0xb5, 
    0xb7, 0x5, 0x6c, 0x37, 0x2, 0xb6, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb5, 
    0x3, 0x2, 0x2, 0x2, 0xb7, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x7, 
    0xd, 0x2, 0x2, 0xb9, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x7, 0xe, 
    0x2, 0x2, 0xbb, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0xf, 0x2, 
    0x2, 0xbd, 0x21, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x10, 0x2, 0x2, 
    0xbf, 0x23, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x11, 0x2, 0x2, 0xc1, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x9, 0x5, 0x2, 0x2, 0xc3, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x5, 0x22, 0x12, 0x2, 0xc5, 0xca, 0x5, 
    0x56, 0x2c, 0x2, 0xc6, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xcb, 0x5, 0x34, 
    0x1b, 0x2, 0xc8, 0xcb, 0x5, 0x6, 0x4, 0x2, 0xc9, 0xcb, 0x5, 0xa, 0x6, 
    0x2, 0xca, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xca, 0xc7, 0x3, 0x2, 0x2, 0x2, 
    0xca, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xca, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcb, 
    0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x58, 0x2d, 0x2, 0xcd, 0x29, 
    0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x5, 0x24, 0x13, 0x2, 0xcf, 0xd4, 0x5, 
    0x56, 0x2c, 0x2, 0xd0, 0xd5, 0x5, 0x34, 0x1b, 0x2, 0xd1, 0xd5, 0x5, 
    0x8, 0x5, 0x2, 0xd2, 0xd5, 0x7, 0x38, 0x2, 0x2, 0xd3, 0xd5, 0x3, 0x2, 
    0x2, 0x2, 0xd4, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd1, 0x3, 0x2, 0x2, 
    0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd3, 0x3, 0x2, 0x2, 0x2, 
    0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x5, 0x58, 0x2d, 0x2, 0xd7, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0x4, 0x3, 0x2, 0xd9, 0xe3, 
    0x5, 0x34, 0x1b, 0x2, 0xda, 0xdd, 0x5, 0x4e, 0x28, 0x2, 0xdb, 0xde, 
    0x5, 0x6, 0x4, 0x2, 0xdc, 0xde, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdb, 0x3, 
    0x2, 0x2, 0x2, 0xdd, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 
    0x2, 0x2, 0xdf, 0xe0, 0x5, 0x4c, 0x27, 0x2, 0xe0, 0xe2, 0x3, 0x2, 0x2, 
    0x2, 0xe1, 0xda, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe5, 0x3, 0x2, 0x2, 0x2, 
    0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 
    0xf6, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 
    0x5, 0x80, 0x41, 0x2, 0xe7, 0xf1, 0x5, 0x34, 0x1b, 0x2, 0xe8, 0xeb, 
    0x5, 0x4e, 0x28, 0x2, 0xe9, 0xec, 0x5, 0x6, 0x4, 0x2, 0xea, 0xec, 0x3, 
    0x2, 0x2, 0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xea, 0x3, 0x2, 
    0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x5, 0x4c, 0x27, 
    0x2, 0xee, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xef, 0xe8, 0x3, 0x2, 0x2, 0x2, 
    0xf0, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf1, 
    0xf2, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf1, 
    0x3, 0x2, 0x2, 0x2, 0xf4, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf8, 0x3, 
    0x2, 0x2, 0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 
    0x2, 0x2, 0xf7, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 
    0x2, 0xf9, 0xfd, 0x5, 0x6, 0x4, 0x2, 0xfa, 0xfd, 0x5, 0xa, 0x6, 0x2, 
    0xfb, 0xfd, 0x5, 0x30, 0x19, 0x2, 0xfc, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfc, 
    0xfa, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x5, 0x6, 0x4, 0x2, 0xff, 0x100, 0x5, 
    0x56, 0x2c, 0x2, 0x100, 0x101, 0x5, 0x32, 0x1a, 0x2, 0x101, 0x102, 0x5, 
    0x58, 0x2d, 0x2, 0x102, 0x31, 0x3, 0x2, 0x2, 0x2, 0x103, 0x109, 0x5, 
    0x34, 0x1b, 0x2, 0x104, 0x105, 0x5, 0x80, 0x41, 0x2, 0x105, 0x106, 0x5, 
    0x34, 0x1b, 0x2, 0x106, 0x108, 0x3, 0x2, 0x2, 0x2, 0x107, 0x104, 0x3, 
    0x2, 0x2, 0x2, 0x108, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x109, 0x107, 0x3, 
    0x2, 0x2, 0x2, 0x109, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x8, 0x1b, 
    0x1, 0x2, 0x10d, 0x10e, 0x5, 0x56, 0x2c, 0x2, 0x10e, 0x10f, 0x5, 0x34, 
    0x1b, 0x2, 0x10f, 0x110, 0x5, 0x58, 0x2d, 0x2, 0x110, 0x11c, 0x3, 0x2, 
    0x2, 0x2, 0x111, 0x112, 0x5, 0x10, 0x9, 0x2, 0x112, 0x113, 0x5, 0x34, 
    0x1b, 0x11, 0x113, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x5, 0x76, 
    0x3c, 0x2, 0x115, 0x116, 0x5, 0x34, 0x1b, 0x10, 0x116, 0x11c, 0x3, 0x2, 
    0x2, 0x2, 0x117, 0x118, 0x5, 0xc, 0x7, 0x2, 0x118, 0x119, 0x5, 0x34, 
    0x1b, 0x5, 0x119, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11c, 0x5, 0x2e, 
    0x18, 0x2, 0x11b, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x111, 0x3, 0x2, 
    0x2, 0x2, 0x11b, 0x114, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x117, 0x3, 0x2, 
    0x2, 0x2, 0x11b, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x14a, 0x3, 0x2, 
    0x2, 0x2, 0x11d, 0x11e, 0xc, 0xf, 0x2, 0x2, 0x11e, 0x11f, 0x5, 0x14, 
    0xb, 0x2, 0x11f, 0x120, 0x5, 0x34, 0x1b, 0x10, 0x120, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x121, 0x122, 0xc, 0xe, 0x2, 0x2, 0x122, 0x123, 0x5, 0x16, 
    0xc, 0x2, 0x123, 0x124, 0x5, 0x34, 0x1b, 0xf, 0x124, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x125, 0x126, 0xc, 0xd, 0x2, 0x2, 0x126, 0x127, 0x5, 0x18, 
    0xd, 0x2, 0x127, 0x128, 0x5, 0x34, 0x1b, 0xe, 0x128, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x129, 0x12a, 0xc, 0xc, 0x2, 0x2, 0x12a, 0x12b, 0x5, 0x1a, 
    0xe, 0x2, 0x12b, 0x12c, 0x5, 0x34, 0x1b, 0xd, 0x12c, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x12d, 0x12e, 0xc, 0xb, 0x2, 0x2, 0x12e, 0x12f, 0x5, 0x74, 
    0x3b, 0x2, 0x12f, 0x130, 0x5, 0x34, 0x1b, 0xc, 0x130, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x131, 0x132, 0xc, 0xa, 0x2, 0x2, 0x132, 0x133, 0x5, 0x72, 
    0x3a, 0x2, 0x133, 0x134, 0x5, 0x34, 0x1b, 0xb, 0x134, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x135, 0x136, 0xc, 0x9, 0x2, 0x2, 0x136, 0x137, 0x7, 0x14, 
    0x2, 0x2, 0x137, 0x149, 0x5, 0x34, 0x1b, 0xa, 0x138, 0x139, 0xc, 0x7, 
    0x2, 0x2, 0x139, 0x13a, 0x5, 0xe, 0x8, 0x2, 0x13a, 0x13b, 0x5, 0x34, 
    0x1b, 0x8, 0x13b, 0x149, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0xc, 0x8, 
    0x2, 0x2, 0x13d, 0x13e, 0x5, 0x4e, 0x28, 0x2, 0x13e, 0x13f, 0x5, 0x34, 
    0x1b, 0x2, 0x13f, 0x140, 0x5, 0x4c, 0x27, 0x2, 0x140, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x141, 0x142, 0xc, 0x6, 0x2, 0x2, 0x142, 0x143, 0x5, 0x4e, 
    0x28, 0x2, 0x143, 0x144, 0x5, 0x34, 0x1b, 0x2, 0x144, 0x145, 0x5, 0x4c, 
    0x27, 0x2, 0x145, 0x149, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0xc, 0x4, 
    0x2, 0x2, 0x147, 0x149, 0x5, 0xc, 0x7, 0x2, 0x148, 0x11d, 0x3, 0x2, 
    0x2, 0x2, 0x148, 0x121, 0x3, 0x2, 0x2, 0x2, 0x148, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x148, 0x129, 0x3, 0x2, 0x2, 0x2, 0x148, 0x12d, 0x3, 0x2, 
    0x2, 0x2, 0x148, 0x131, 0x3, 0x2, 0x2, 0x2, 0x148, 0x135, 0x3, 0x2, 
    0x2, 0x2, 0x148, 0x138, 0x3, 0x2, 0x2, 0x2, 0x148, 0x13c, 0x3, 0x2, 
    0x2, 0x2, 0x148, 0x141, 0x3, 0x2, 0x2, 0x2, 0x148, 0x146, 0x3, 0x2, 
    0x2, 0x2, 0x149, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x148, 0x3, 0x2, 
    0x2, 0x2, 0x14a, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x14c, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 0x5, 0x2c, 0x17, 
    0x2, 0x14e, 0x14f, 0x5, 0x52, 0x2a, 0x2, 0x14f, 0x167, 0x3, 0x2, 0x2, 
    0x2, 0x150, 0x151, 0x5, 0x34, 0x1b, 0x2, 0x151, 0x152, 0x5, 0x52, 0x2a, 
    0x2, 0x152, 0x167, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x5, 0x30, 0x19, 
    0x2, 0x154, 0x155, 0x5, 0x52, 0x2a, 0x2, 0x155, 0x167, 0x3, 0x2, 0x2, 
    0x2, 0x156, 0x157, 0x7, 0x15, 0x2, 0x2, 0x157, 0x167, 0x5, 0x52, 0x2a, 
    0x2, 0x158, 0x159, 0x5, 0x1c, 0xf, 0x2, 0x159, 0x15a, 0x5, 0x52, 0x2a, 
    0x2, 0x15a, 0x167, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x5, 0x28, 0x15, 
    0x2, 0x15c, 0x15d, 0x5, 0x52, 0x2a, 0x2, 0x15d, 0x167, 0x3, 0x2, 0x2, 
    0x2, 0x15e, 0x15f, 0x5, 0x2a, 0x16, 0x2, 0x15f, 0x160, 0x5, 0x52, 0x2a, 
    0x2, 0x160, 0x167, 0x3, 0x2, 0x2, 0x2, 0x161, 0x167, 0x5, 0x40, 0x21, 
    0x2, 0x162, 0x167, 0x5, 0x42, 0x22, 0x2, 0x163, 0x167, 0x5, 0x3c, 0x1f, 
    0x2, 0x164, 0x167, 0x5, 0x46, 0x24, 0x2, 0x165, 0x167, 0x5, 0x3a, 0x1e, 
    0x2, 0x166, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x166, 0x150, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x153, 0x3, 0x2, 0x2, 0x2, 0x166, 0x156, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x158, 0x3, 0x2, 0x2, 0x2, 0x166, 0x15b, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x166, 0x161, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x162, 0x3, 0x2, 0x2, 0x2, 0x166, 0x163, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x164, 0x3, 0x2, 0x2, 0x2, 0x166, 0x165, 0x3, 0x2, 0x2, 
    0x2, 0x167, 0x37, 0x3, 0x2, 0x2, 0x2, 0x168, 0x173, 0x5, 0x36, 0x1c, 
    0x2, 0x169, 0x16d, 0x5, 0x48, 0x25, 0x2, 0x16a, 0x16c, 0x5, 0x36, 0x1c, 
    0x2, 0x16b, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16f, 0x3, 0x2, 0x2, 
    0x2, 0x16d, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x3, 0x2, 0x2, 
    0x2, 0x16e, 0x170, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x16d, 0x3, 0x2, 0x2, 
    0x2, 0x170, 0x171, 0x5, 0x4a, 0x26, 0x2, 0x171, 0x173, 0x3, 0x2, 0x2, 
    0x2, 0x172, 0x168, 0x3, 0x2, 0x2, 0x2, 0x172, 0x169, 0x3, 0x2, 0x2, 
    0x2, 0x173, 0x39, 0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 0x7, 0x16, 0x2, 
    0x2, 0x175, 0x176, 0x5, 0x56, 0x2c, 0x2, 0x176, 0x177, 0x5, 0x34, 0x1b, 
    0x2, 0x177, 0x178, 0x5, 0x58, 0x2d, 0x2, 0x178, 0x179, 0x5, 0x38, 0x1d, 
    0x2, 0x179, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 0x7, 0x17, 0x2, 
    0x2, 0x17b, 0x17c, 0x5, 0x56, 0x2c, 0x2, 0x17c, 0x17d, 0x5, 0x34, 0x1b, 
    0x2, 0x17d, 0x17e, 0x5, 0x52, 0x2a, 0x2, 0x17e, 0x17f, 0x5, 0x34, 0x1b, 
    0x2, 0x17f, 0x180, 0x5, 0x52, 0x2a, 0x2, 0x180, 0x181, 0x5, 0x34, 0x1b, 
    0x2, 0x181, 0x182, 0x5, 0x58, 0x2d, 0x2, 0x182, 0x183, 0x5, 0x38, 0x1d, 
    0x2, 0x183, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x5, 0x48, 0x25, 
    0x2, 0x185, 0x186, 0x5, 0x34, 0x1b, 0x2, 0x186, 0x187, 0x5, 0x58, 0x2d, 
    0x2, 0x187, 0x188, 0x5, 0x50, 0x29, 0x2, 0x188, 0x189, 0x5, 0x34, 0x1b, 
    0x2, 0x189, 0x18a, 0x5, 0x54, 0x2b, 0x2, 0x18a, 0x18b, 0x5, 0x34, 0x1b, 
    0x2, 0x18b, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0x7, 0x18, 0x2, 
    0x2, 0x18d, 0x18e, 0x5, 0x56, 0x2c, 0x2, 0x18e, 0x18f, 0x5, 0x34, 0x1b, 
    0x2, 0x18f, 0x190, 0x5, 0x58, 0x2d, 0x2, 0x190, 0x191, 0x5, 0x38, 0x1d, 
    0x2, 0x191, 0x192, 0x5, 0x42, 0x22, 0x2, 0x192, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x193, 0x194, 0x7, 0x19, 0x2, 0x2, 0x194, 0x195, 0x5, 0x38, 0x1d, 
    0x2, 0x195, 0x43, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x5, 0x2c, 0x17, 
    0x2, 0x197, 0x1a2, 0x5, 0x56, 0x2c, 0x2, 0x198, 0x19e, 0x5, 0x2c, 0x17, 
    0x2, 0x199, 0x19a, 0x5, 0x80, 0x41, 0x2, 0x19a, 0x19b, 0x5, 0x2c, 0x17, 
    0x2, 0x19b, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x199, 0x3, 0x2, 0x2, 
    0x2, 0x19d, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19c, 0x3, 0x2, 0x2, 
    0x2, 0x19e, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a3, 0x3, 0x2, 0x2, 
    0x2, 0x1a0, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a3, 0x3, 0x2, 0x2, 
    0x2, 0x1a2, 0x198, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a1, 0x3, 0x2, 0x2, 
    0x2, 0x1a3, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x5, 0x58, 0x2d, 
    0x2, 0x1a5, 0x1a6, 0x5, 0x38, 0x1d, 0x2, 0x1a6, 0x45, 0x3, 0x2, 0x2, 
    0x2, 0x1a7, 0x1a8, 0x5, 0x1e, 0x10, 0x2, 0x1a8, 0x1a9, 0x5, 0x34, 0x1b, 
    0x2, 0x1a9, 0x1aa, 0x5, 0x52, 0x2a, 0x2, 0x1aa, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x1ab, 0x1ac, 0x7, 0x1a, 0x2, 0x2, 0x1ac, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x1ad, 0x1ae, 0x7, 0x1b, 0x2, 0x2, 0x1ae, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x1af, 0x1b0, 0x7, 0x1c, 0x2, 0x2, 0x1b0, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x1b1, 0x1b2, 0x7, 0x1d, 0x2, 0x2, 0x1b2, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x1b3, 0x1b4, 0x7, 0x1e, 0x2, 0x2, 0x1b4, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x1b5, 0x1b6, 0x7, 0x1f, 0x2, 0x2, 0x1b6, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x1b7, 0x1b8, 0x7, 0x20, 0x2, 0x2, 0x1b8, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x1b9, 0x1ba, 0x7, 0x21, 0x2, 0x2, 0x1ba, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x1bb, 0x1bc, 0x7, 0x22, 0x2, 0x2, 0x1bc, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x1bd, 0x1be, 0x7, 0x23, 0x2, 0x2, 0x1be, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0x1bf, 0x1c0, 0x7, 0xc, 0x2, 0x2, 0x1c0, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x1c1, 0x1c2, 0x7, 0x8, 0x2, 0x2, 0x1c2, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x1c3, 
    0x1c4, 0x7, 0x24, 0x2, 0x2, 0x1c4, 0x61, 0x3, 0x2, 0x2, 0x2, 0x1c5, 
    0x1c6, 0x7, 0x25, 0x2, 0x2, 0x1c6, 0x63, 0x3, 0x2, 0x2, 0x2, 0x1c7, 
    0x1c8, 0x7, 0x26, 0x2, 0x2, 0x1c8, 0x65, 0x3, 0x2, 0x2, 0x2, 0x1c9, 
    0x1ca, 0x7, 0x27, 0x2, 0x2, 0x1ca, 0x67, 0x3, 0x2, 0x2, 0x2, 0x1cb, 
    0x1cc, 0x7, 0x14, 0x2, 0x2, 0x1cc, 0x69, 0x3, 0x2, 0x2, 0x2, 0x1cd, 
    0x1ce, 0x7, 0x28, 0x2, 0x2, 0x1ce, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x1cf, 
    0x1d0, 0x7, 0x29, 0x2, 0x2, 0x1d0, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x1d1, 
    0x1d2, 0x7, 0x2a, 0x2, 0x2, 0x1d2, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x1d3, 
    0x1d4, 0x7, 0x2b, 0x2, 0x2, 0x1d4, 0x71, 0x3, 0x2, 0x2, 0x2, 0x1d5, 
    0x1d6, 0x7, 0x2c, 0x2, 0x2, 0x1d6, 0x73, 0x3, 0x2, 0x2, 0x2, 0x1d7, 
    0x1d8, 0x7, 0x2d, 0x2, 0x2, 0x1d8, 0x75, 0x3, 0x2, 0x2, 0x2, 0x1d9, 
    0x1da, 0x7, 0x2e, 0x2, 0x2, 0x1da, 0x77, 0x3, 0x2, 0x2, 0x2, 0x1db, 
    0x1dc, 0x7, 0x2f, 0x2, 0x2, 0x1dc, 0x79, 0x3, 0x2, 0x2, 0x2, 0x1dd, 
    0x1de, 0x7, 0x30, 0x2, 0x2, 0x1de, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x1df, 
    0x1e0, 0x7, 0x31, 0x2, 0x2, 0x1e0, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x1e1, 
    0x1e2, 0x7, 0x32, 0x2, 0x2, 0x1e2, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x1e3, 
    0x1e4, 0x7, 0x33, 0x2, 0x2, 0x1e4, 0x81, 0x3, 0x2, 0x2, 0x2, 0x1e5, 
    0x1e6, 0x7, 0x34, 0x2, 0x2, 0x1e6, 0x83, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x87, 
    0x91, 0x9f, 0xa8, 0xac, 0xb2, 0xb6, 0xca, 0xd4, 0xdd, 0xe3, 0xeb, 0xf1, 
    0xf6, 0xfc, 0x109, 0x11b, 0x148, 0x14a, 0x166, 0x16d, 0x172, 0x19e, 
    0x1a2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

modelicaParser::Initializer modelicaParser::_init;
