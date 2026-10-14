
// Generated from MYH.g4 by ANTLR 4.13.1


#include "MYHListener.h"

#include "MYHParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MYHParserStaticData final {
  MYHParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MYHParserStaticData(const MYHParserStaticData&) = delete;
  MYHParserStaticData(MYHParserStaticData&&) = delete;
  MYHParserStaticData& operator=(const MYHParserStaticData&) = delete;
  MYHParserStaticData& operator=(MYHParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag myhParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MYHParserStaticData *myhParserStaticData = nullptr;

void myhParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (myhParserStaticData != nullptr) {
    return;
  }
#else
  assert(myhParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MYHParserStaticData>(
    std::vector<std::string>{
      "program", "function", "params", "param", "block", "statement", "ifStmt", 
      "whileStmt", "forStmt", "forInit", "forCond", "forUpdate", "declaration", 
      "initDeclarator", "arraySuffix", "initializer", "initializerList", 
      "assignment", "returnStmt", "expr", "functionCall", "args", "arrayAccess", 
      "type"
    },
    std::vector<std::string>{
      "", "';'", "'('", "')'", "','", "'{'", "'}'", "'='", "'['", "']'", 
      "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'if'", "'else'", 
      "'while'", "'for'", "'return'", "'const'", "'int'", "'&&'", "'||'", 
      "'=='", "'!='", "'<='", "'>='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "IF", "ELSE", "WHILE", "FOR", "RETURN", "CONST", "INT_TYPE", "AND", 
      "OR", "EQ", "NE", "LE", "GE", "HEX", "OCT", "INT", "ID", "WS", "LINE_COMMENT", 
      "UNEXPECTED"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,37,302,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,1,0,1,0,1,0,1,0,5,0,53,8,0,10,0,12,0,56,9,0,1,
  	0,1,0,1,1,1,1,1,1,1,1,3,1,64,8,1,1,1,1,1,1,1,1,2,1,2,1,2,5,2,72,8,2,10,
  	2,12,2,75,9,2,1,3,1,3,1,3,1,4,1,4,5,4,82,8,4,10,4,12,4,85,9,4,1,4,1,4,
  	1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,105,
  	8,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,114,8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	8,1,8,1,8,3,8,125,8,8,1,8,1,8,3,8,129,8,8,1,8,1,8,3,8,133,8,8,1,8,1,8,
  	1,8,1,9,1,9,1,9,3,9,141,8,9,1,10,1,10,1,11,1,11,3,11,147,8,11,1,12,3,
  	12,150,8,12,1,12,1,12,1,12,1,12,5,12,156,8,12,10,12,12,12,159,9,12,1,
  	13,1,13,3,13,163,8,13,1,13,1,13,3,13,167,8,13,1,14,1,14,3,14,171,8,14,
  	1,14,1,14,1,14,1,14,1,14,5,14,178,8,14,10,14,12,14,181,9,14,1,15,1,15,
  	1,15,3,15,186,8,15,1,15,3,15,189,8,15,1,16,1,16,1,16,5,16,194,8,16,10,
  	16,12,16,197,9,16,1,17,1,17,1,17,1,17,1,17,5,17,204,8,17,10,17,12,17,
  	207,9,17,1,17,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,
  	1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,3,19,230,8,19,1,19,1,19,
  	1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,
  	1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,
  	1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,5,19,271,8,19,10,19,12,19,
  	274,9,19,1,20,1,20,1,20,3,20,279,8,20,1,20,1,20,1,21,1,21,1,21,5,21,286,
  	8,21,10,21,12,21,289,9,21,1,22,1,22,1,22,1,22,1,22,4,22,296,8,22,11,22,
  	12,22,297,1,23,1,23,1,23,0,1,38,24,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,40,42,44,46,0,0,330,0,54,1,0,0,0,2,59,1,0,0,0,4,
  	68,1,0,0,0,6,76,1,0,0,0,8,79,1,0,0,0,10,104,1,0,0,0,12,106,1,0,0,0,14,
  	115,1,0,0,0,16,121,1,0,0,0,18,140,1,0,0,0,20,142,1,0,0,0,22,146,1,0,0,
  	0,24,149,1,0,0,0,26,160,1,0,0,0,28,168,1,0,0,0,30,188,1,0,0,0,32,190,
  	1,0,0,0,34,198,1,0,0,0,36,211,1,0,0,0,38,229,1,0,0,0,40,275,1,0,0,0,42,
  	282,1,0,0,0,44,290,1,0,0,0,46,299,1,0,0,0,48,53,3,2,1,0,49,50,3,24,12,
  	0,50,51,5,1,0,0,51,53,1,0,0,0,52,48,1,0,0,0,52,49,1,0,0,0,53,56,1,0,0,
  	0,54,52,1,0,0,0,54,55,1,0,0,0,55,57,1,0,0,0,56,54,1,0,0,0,57,58,5,0,0,
  	1,58,1,1,0,0,0,59,60,3,46,23,0,60,61,5,34,0,0,61,63,5,2,0,0,62,64,3,4,
  	2,0,63,62,1,0,0,0,63,64,1,0,0,0,64,65,1,0,0,0,65,66,5,3,0,0,66,67,3,8,
  	4,0,67,3,1,0,0,0,68,73,3,6,3,0,69,70,5,4,0,0,70,72,3,6,3,0,71,69,1,0,
  	0,0,72,75,1,0,0,0,73,71,1,0,0,0,73,74,1,0,0,0,74,5,1,0,0,0,75,73,1,0,
  	0,0,76,77,3,46,23,0,77,78,5,34,0,0,78,7,1,0,0,0,79,83,5,5,0,0,80,82,3,
  	10,5,0,81,80,1,0,0,0,82,85,1,0,0,0,83,81,1,0,0,0,83,84,1,0,0,0,84,86,
  	1,0,0,0,85,83,1,0,0,0,86,87,5,6,0,0,87,9,1,0,0,0,88,89,3,24,12,0,89,90,
  	5,1,0,0,90,105,1,0,0,0,91,92,3,34,17,0,92,93,5,1,0,0,93,105,1,0,0,0,94,
  	105,3,12,6,0,95,105,3,14,7,0,96,105,3,16,8,0,97,98,3,36,18,0,98,99,5,
  	1,0,0,99,105,1,0,0,0,100,101,3,38,19,0,101,102,5,1,0,0,102,105,1,0,0,
  	0,103,105,3,8,4,0,104,88,1,0,0,0,104,91,1,0,0,0,104,94,1,0,0,0,104,95,
  	1,0,0,0,104,96,1,0,0,0,104,97,1,0,0,0,104,100,1,0,0,0,104,103,1,0,0,0,
  	105,11,1,0,0,0,106,107,5,18,0,0,107,108,5,2,0,0,108,109,3,38,19,0,109,
  	110,5,3,0,0,110,113,3,10,5,0,111,112,5,19,0,0,112,114,3,10,5,0,113,111,
  	1,0,0,0,113,114,1,0,0,0,114,13,1,0,0,0,115,116,5,20,0,0,116,117,5,2,0,
  	0,117,118,3,38,19,0,118,119,5,3,0,0,119,120,3,10,5,0,120,15,1,0,0,0,121,
  	122,5,21,0,0,122,124,5,2,0,0,123,125,3,18,9,0,124,123,1,0,0,0,124,125,
  	1,0,0,0,125,126,1,0,0,0,126,128,5,1,0,0,127,129,3,20,10,0,128,127,1,0,
  	0,0,128,129,1,0,0,0,129,130,1,0,0,0,130,132,5,1,0,0,131,133,3,22,11,0,
  	132,131,1,0,0,0,132,133,1,0,0,0,133,134,1,0,0,0,134,135,5,3,0,0,135,136,
  	3,10,5,0,136,17,1,0,0,0,137,141,3,24,12,0,138,141,3,34,17,0,139,141,3,
  	38,19,0,140,137,1,0,0,0,140,138,1,0,0,0,140,139,1,0,0,0,141,19,1,0,0,
  	0,142,143,3,38,19,0,143,21,1,0,0,0,144,147,3,34,17,0,145,147,3,38,19,
  	0,146,144,1,0,0,0,146,145,1,0,0,0,147,23,1,0,0,0,148,150,5,23,0,0,149,
  	148,1,0,0,0,149,150,1,0,0,0,150,151,1,0,0,0,151,152,3,46,23,0,152,157,
  	3,26,13,0,153,154,5,4,0,0,154,156,3,26,13,0,155,153,1,0,0,0,156,159,1,
  	0,0,0,157,155,1,0,0,0,157,158,1,0,0,0,158,25,1,0,0,0,159,157,1,0,0,0,
  	160,162,5,34,0,0,161,163,3,28,14,0,162,161,1,0,0,0,162,163,1,0,0,0,163,
  	166,1,0,0,0,164,165,5,7,0,0,165,167,3,30,15,0,166,164,1,0,0,0,166,167,
  	1,0,0,0,167,27,1,0,0,0,168,170,5,8,0,0,169,171,3,38,19,0,170,169,1,0,
  	0,0,170,171,1,0,0,0,171,172,1,0,0,0,172,179,5,9,0,0,173,174,5,8,0,0,174,
  	175,3,38,19,0,175,176,5,9,0,0,176,178,1,0,0,0,177,173,1,0,0,0,178,181,
  	1,0,0,0,179,177,1,0,0,0,179,180,1,0,0,0,180,29,1,0,0,0,181,179,1,0,0,
  	0,182,189,3,38,19,0,183,185,5,5,0,0,184,186,3,32,16,0,185,184,1,0,0,0,
  	185,186,1,0,0,0,186,187,1,0,0,0,187,189,5,6,0,0,188,182,1,0,0,0,188,183,
  	1,0,0,0,189,31,1,0,0,0,190,195,3,30,15,0,191,192,5,4,0,0,192,194,3,30,
  	15,0,193,191,1,0,0,0,194,197,1,0,0,0,195,193,1,0,0,0,195,196,1,0,0,0,
  	196,33,1,0,0,0,197,195,1,0,0,0,198,205,5,34,0,0,199,200,5,8,0,0,200,201,
  	3,38,19,0,201,202,5,9,0,0,202,204,1,0,0,0,203,199,1,0,0,0,204,207,1,0,
  	0,0,205,203,1,0,0,0,205,206,1,0,0,0,206,208,1,0,0,0,207,205,1,0,0,0,208,
  	209,5,7,0,0,209,210,3,38,19,0,210,35,1,0,0,0,211,212,5,22,0,0,212,213,
  	3,38,19,0,213,37,1,0,0,0,214,215,6,19,-1,0,215,216,5,17,0,0,216,230,3,
  	38,19,9,217,218,5,13,0,0,218,230,3,38,19,8,219,220,5,2,0,0,220,221,3,
  	38,19,0,221,222,5,3,0,0,222,230,1,0,0,0,223,230,3,40,20,0,224,230,3,44,
  	22,0,225,230,5,33,0,0,226,230,5,31,0,0,227,230,5,32,0,0,228,230,5,34,
  	0,0,229,214,1,0,0,0,229,217,1,0,0,0,229,219,1,0,0,0,229,223,1,0,0,0,229,
  	224,1,0,0,0,229,225,1,0,0,0,229,226,1,0,0,0,229,227,1,0,0,0,229,228,1,
  	0,0,0,230,272,1,0,0,0,231,232,10,22,0,0,232,233,5,26,0,0,233,271,3,38,
  	19,23,234,235,10,21,0,0,235,236,5,25,0,0,236,271,3,38,19,22,237,238,10,
  	20,0,0,238,239,5,27,0,0,239,271,3,38,19,21,240,241,10,19,0,0,241,242,
  	5,28,0,0,242,271,3,38,19,20,243,244,10,18,0,0,244,245,5,10,0,0,245,271,
  	3,38,19,19,246,247,10,17,0,0,247,248,5,11,0,0,248,271,3,38,19,18,249,
  	250,10,16,0,0,250,251,5,29,0,0,251,271,3,38,19,17,252,253,10,15,0,0,253,
  	254,5,30,0,0,254,271,3,38,19,16,255,256,10,14,0,0,256,257,5,12,0,0,257,
  	271,3,38,19,15,258,259,10,13,0,0,259,260,5,13,0,0,260,271,3,38,19,14,
  	261,262,10,12,0,0,262,263,5,14,0,0,263,271,3,38,19,13,264,265,10,11,0,
  	0,265,266,5,15,0,0,266,271,3,38,19,12,267,268,10,10,0,0,268,269,5,16,
  	0,0,269,271,3,38,19,11,270,231,1,0,0,0,270,234,1,0,0,0,270,237,1,0,0,
  	0,270,240,1,0,0,0,270,243,1,0,0,0,270,246,1,0,0,0,270,249,1,0,0,0,270,
  	252,1,0,0,0,270,255,1,0,0,0,270,258,1,0,0,0,270,261,1,0,0,0,270,264,1,
  	0,0,0,270,267,1,0,0,0,271,274,1,0,0,0,272,270,1,0,0,0,272,273,1,0,0,0,
  	273,39,1,0,0,0,274,272,1,0,0,0,275,276,5,34,0,0,276,278,5,2,0,0,277,279,
  	3,42,21,0,278,277,1,0,0,0,278,279,1,0,0,0,279,280,1,0,0,0,280,281,5,3,
  	0,0,281,41,1,0,0,0,282,287,3,38,19,0,283,284,5,4,0,0,284,286,3,38,19,
  	0,285,283,1,0,0,0,286,289,1,0,0,0,287,285,1,0,0,0,287,288,1,0,0,0,288,
  	43,1,0,0,0,289,287,1,0,0,0,290,295,5,34,0,0,291,292,5,8,0,0,292,293,3,
  	38,19,0,293,294,5,9,0,0,294,296,1,0,0,0,295,291,1,0,0,0,296,297,1,0,0,
  	0,297,295,1,0,0,0,297,298,1,0,0,0,298,45,1,0,0,0,299,300,5,24,0,0,300,
  	47,1,0,0,0,28,52,54,63,73,83,104,113,124,128,132,140,146,149,157,162,
  	166,170,179,185,188,195,205,229,270,272,278,287,297
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  myhParserStaticData = staticData.release();
}

}

MYHParser::MYHParser(TokenStream *input) : MYHParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MYHParser::MYHParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MYHParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *myhParserStaticData->atn, myhParserStaticData->decisionToDFA, myhParserStaticData->sharedContextCache, options);
}

MYHParser::~MYHParser() {
  delete _interpreter;
}

const atn::ATN& MYHParser::getATN() const {
  return *myhParserStaticData->atn;
}

std::string MYHParser::getGrammarFileName() const {
  return "MYH.g4";
}

const std::vector<std::string>& MYHParser::getRuleNames() const {
  return myhParserStaticData->ruleNames;
}

const dfa::Vocabulary& MYHParser::getVocabulary() const {
  return myhParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MYHParser::getSerializedATN() const {
  return myhParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

MYHParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MYHParser::ProgramContext::EOF() {
  return getToken(MYHParser::EOF, 0);
}

std::vector<MYHParser::FunctionContext *> MYHParser::ProgramContext::function() {
  return getRuleContexts<MYHParser::FunctionContext>();
}

MYHParser::FunctionContext* MYHParser::ProgramContext::function(size_t i) {
  return getRuleContext<MYHParser::FunctionContext>(i);
}

std::vector<MYHParser::DeclarationContext *> MYHParser::ProgramContext::declaration() {
  return getRuleContexts<MYHParser::DeclarationContext>();
}

MYHParser::DeclarationContext* MYHParser::ProgramContext::declaration(size_t i) {
  return getRuleContext<MYHParser::DeclarationContext>(i);
}


size_t MYHParser::ProgramContext::getRuleIndex() const {
  return MYHParser::RuleProgram;
}

void MYHParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void MYHParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

MYHParser::ProgramContext* MYHParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, MYHParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MYHParser::CONST

    || _la == MYHParser::INT_TYPE) {
      setState(52);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(48);
        function();
        break;
      }

      case 2: {
        setState(49);
        declaration();
        setState(50);
        match(MYHParser::T__0);
        break;
      }

      default:
        break;
      }
      setState(56);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(57);
    match(MYHParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

MYHParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MYHParser::TypeContext* MYHParser::FunctionContext::type() {
  return getRuleContext<MYHParser::TypeContext>(0);
}

tree::TerminalNode* MYHParser::FunctionContext::ID() {
  return getToken(MYHParser::ID, 0);
}

MYHParser::BlockContext* MYHParser::FunctionContext::block() {
  return getRuleContext<MYHParser::BlockContext>(0);
}

MYHParser::ParamsContext* MYHParser::FunctionContext::params() {
  return getRuleContext<MYHParser::ParamsContext>(0);
}


size_t MYHParser::FunctionContext::getRuleIndex() const {
  return MYHParser::RuleFunction;
}

void MYHParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void MYHParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

MYHParser::FunctionContext* MYHParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 2, MYHParser::RuleFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    type();
    setState(60);
    match(MYHParser::ID);
    setState(61);
    match(MYHParser::T__1);
    setState(63);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MYHParser::INT_TYPE) {
      setState(62);
      params();
    }
    setState(65);
    match(MYHParser::T__2);
    setState(66);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamsContext ------------------------------------------------------------------

MYHParser::ParamsContext::ParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MYHParser::ParamContext *> MYHParser::ParamsContext::param() {
  return getRuleContexts<MYHParser::ParamContext>();
}

MYHParser::ParamContext* MYHParser::ParamsContext::param(size_t i) {
  return getRuleContext<MYHParser::ParamContext>(i);
}


size_t MYHParser::ParamsContext::getRuleIndex() const {
  return MYHParser::RuleParams;
}

void MYHParser::ParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParams(this);
}

void MYHParser::ParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParams(this);
}

MYHParser::ParamsContext* MYHParser::params() {
  ParamsContext *_localctx = _tracker.createInstance<ParamsContext>(_ctx, getState());
  enterRule(_localctx, 4, MYHParser::RuleParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    param();
    setState(73);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MYHParser::T__3) {
      setState(69);
      match(MYHParser::T__3);
      setState(70);
      param();
      setState(75);
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

//----------------- ParamContext ------------------------------------------------------------------

MYHParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MYHParser::TypeContext* MYHParser::ParamContext::type() {
  return getRuleContext<MYHParser::TypeContext>(0);
}

tree::TerminalNode* MYHParser::ParamContext::ID() {
  return getToken(MYHParser::ID, 0);
}


size_t MYHParser::ParamContext::getRuleIndex() const {
  return MYHParser::RuleParam;
}

void MYHParser::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void MYHParser::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}

MYHParser::ParamContext* MYHParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 6, MYHParser::RuleParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    type();
    setState(77);
    match(MYHParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

MYHParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MYHParser::StatementContext *> MYHParser::BlockContext::statement() {
  return getRuleContexts<MYHParser::StatementContext>();
}

MYHParser::StatementContext* MYHParser::BlockContext::statement(size_t i) {
  return getRuleContext<MYHParser::StatementContext>(i);
}


size_t MYHParser::BlockContext::getRuleIndex() const {
  return MYHParser::RuleBlock;
}

void MYHParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void MYHParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

MYHParser::BlockContext* MYHParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 8, MYHParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(MYHParser::T__4);
    setState(83);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32245162020) != 0)) {
      setState(80);
      statement();
      setState(85);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(86);
    match(MYHParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

MYHParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MYHParser::DeclarationContext* MYHParser::StatementContext::declaration() {
  return getRuleContext<MYHParser::DeclarationContext>(0);
}

MYHParser::AssignmentContext* MYHParser::StatementContext::assignment() {
  return getRuleContext<MYHParser::AssignmentContext>(0);
}

MYHParser::IfStmtContext* MYHParser::StatementContext::ifStmt() {
  return getRuleContext<MYHParser::IfStmtContext>(0);
}

MYHParser::WhileStmtContext* MYHParser::StatementContext::whileStmt() {
  return getRuleContext<MYHParser::WhileStmtContext>(0);
}

MYHParser::ForStmtContext* MYHParser::StatementContext::forStmt() {
  return getRuleContext<MYHParser::ForStmtContext>(0);
}

MYHParser::ReturnStmtContext* MYHParser::StatementContext::returnStmt() {
  return getRuleContext<MYHParser::ReturnStmtContext>(0);
}

MYHParser::ExprContext* MYHParser::StatementContext::expr() {
  return getRuleContext<MYHParser::ExprContext>(0);
}

MYHParser::BlockContext* MYHParser::StatementContext::block() {
  return getRuleContext<MYHParser::BlockContext>(0);
}


size_t MYHParser::StatementContext::getRuleIndex() const {
  return MYHParser::RuleStatement;
}

void MYHParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void MYHParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

MYHParser::StatementContext* MYHParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 10, MYHParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(104);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(88);
      declaration();
      setState(89);
      match(MYHParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(91);
      assignment();
      setState(92);
      match(MYHParser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(94);
      ifStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(95);
      whileStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(96);
      forStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(97);
      returnStmt();
      setState(98);
      match(MYHParser::T__0);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(100);
      expr(0);
      setState(101);
      match(MYHParser::T__0);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(103);
      block();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStmtContext ------------------------------------------------------------------

MYHParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MYHParser::IfStmtContext::IF() {
  return getToken(MYHParser::IF, 0);
}

MYHParser::ExprContext* MYHParser::IfStmtContext::expr() {
  return getRuleContext<MYHParser::ExprContext>(0);
}

std::vector<MYHParser::StatementContext *> MYHParser::IfStmtContext::statement() {
  return getRuleContexts<MYHParser::StatementContext>();
}

MYHParser::StatementContext* MYHParser::IfStmtContext::statement(size_t i) {
  return getRuleContext<MYHParser::StatementContext>(i);
}

tree::TerminalNode* MYHParser::IfStmtContext::ELSE() {
  return getToken(MYHParser::ELSE, 0);
}


size_t MYHParser::IfStmtContext::getRuleIndex() const {
  return MYHParser::RuleIfStmt;
}

void MYHParser::IfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt(this);
}

void MYHParser::IfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt(this);
}

MYHParser::IfStmtContext* MYHParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 12, MYHParser::RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(MYHParser::IF);
    setState(107);
    match(MYHParser::T__1);
    setState(108);
    expr(0);
    setState(109);
    match(MYHParser::T__2);
    setState(110);
    statement();
    setState(113);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(111);
      match(MYHParser::ELSE);
      setState(112);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStmtContext ------------------------------------------------------------------

MYHParser::WhileStmtContext::WhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MYHParser::WhileStmtContext::WHILE() {
  return getToken(MYHParser::WHILE, 0);
}

MYHParser::ExprContext* MYHParser::WhileStmtContext::expr() {
  return getRuleContext<MYHParser::ExprContext>(0);
}

MYHParser::StatementContext* MYHParser::WhileStmtContext::statement() {
  return getRuleContext<MYHParser::StatementContext>(0);
}


size_t MYHParser::WhileStmtContext::getRuleIndex() const {
  return MYHParser::RuleWhileStmt;
}

void MYHParser::WhileStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStmt(this);
}

void MYHParser::WhileStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStmt(this);
}

MYHParser::WhileStmtContext* MYHParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 14, MYHParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(MYHParser::WHILE);
    setState(116);
    match(MYHParser::T__1);
    setState(117);
    expr(0);
    setState(118);
    match(MYHParser::T__2);
    setState(119);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStmtContext ------------------------------------------------------------------

MYHParser::ForStmtContext::ForStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MYHParser::ForStmtContext::FOR() {
  return getToken(MYHParser::FOR, 0);
}

MYHParser::StatementContext* MYHParser::ForStmtContext::statement() {
  return getRuleContext<MYHParser::StatementContext>(0);
}

MYHParser::ForInitContext* MYHParser::ForStmtContext::forInit() {
  return getRuleContext<MYHParser::ForInitContext>(0);
}

MYHParser::ForCondContext* MYHParser::ForStmtContext::forCond() {
  return getRuleContext<MYHParser::ForCondContext>(0);
}

MYHParser::ForUpdateContext* MYHParser::ForStmtContext::forUpdate() {
  return getRuleContext<MYHParser::ForUpdateContext>(0);
}


size_t MYHParser::ForStmtContext::getRuleIndex() const {
  return MYHParser::RuleForStmt;
}

void MYHParser::ForStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStmt(this);
}

void MYHParser::ForStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStmt(this);
}

MYHParser::ForStmtContext* MYHParser::forStmt() {
  ForStmtContext *_localctx = _tracker.createInstance<ForStmtContext>(_ctx, getState());
  enterRule(_localctx, 16, MYHParser::RuleForStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(MYHParser::FOR);
    setState(122);
    match(MYHParser::T__1);
    setState(124);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32237559812) != 0)) {
      setState(123);
      forInit();
    }
    setState(126);
    match(MYHParser::T__0);
    setState(128);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32212393988) != 0)) {
      setState(127);
      forCond();
    }
    setState(130);
    match(MYHParser::T__0);
    setState(132);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32212393988) != 0)) {
      setState(131);
      forUpdate();
    }
    setState(134);
    match(MYHParser::T__2);
    setState(135);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForInitContext ------------------------------------------------------------------

MYHParser::ForInitContext::ForInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MYHParser::DeclarationContext* MYHParser::ForInitContext::declaration() {
  return getRuleContext<MYHParser::DeclarationContext>(0);
}

MYHParser::AssignmentContext* MYHParser::ForInitContext::assignment() {
  return getRuleContext<MYHParser::AssignmentContext>(0);
}

MYHParser::ExprContext* MYHParser::ForInitContext::expr() {
  return getRuleContext<MYHParser::ExprContext>(0);
}


size_t MYHParser::ForInitContext::getRuleIndex() const {
  return MYHParser::RuleForInit;
}

void MYHParser::ForInitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForInit(this);
}

void MYHParser::ForInitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForInit(this);
}

MYHParser::ForInitContext* MYHParser::forInit() {
  ForInitContext *_localctx = _tracker.createInstance<ForInitContext>(_ctx, getState());
  enterRule(_localctx, 18, MYHParser::RuleForInit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(137);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(138);
      assignment();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(139);
      expr(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForCondContext ------------------------------------------------------------------

MYHParser::ForCondContext::ForCondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MYHParser::ExprContext* MYHParser::ForCondContext::expr() {
  return getRuleContext<MYHParser::ExprContext>(0);
}


size_t MYHParser::ForCondContext::getRuleIndex() const {
  return MYHParser::RuleForCond;
}

void MYHParser::ForCondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForCond(this);
}

void MYHParser::ForCondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForCond(this);
}

MYHParser::ForCondContext* MYHParser::forCond() {
  ForCondContext *_localctx = _tracker.createInstance<ForCondContext>(_ctx, getState());
  enterRule(_localctx, 20, MYHParser::RuleForCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForUpdateContext ------------------------------------------------------------------

MYHParser::ForUpdateContext::ForUpdateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MYHParser::AssignmentContext* MYHParser::ForUpdateContext::assignment() {
  return getRuleContext<MYHParser::AssignmentContext>(0);
}

MYHParser::ExprContext* MYHParser::ForUpdateContext::expr() {
  return getRuleContext<MYHParser::ExprContext>(0);
}


size_t MYHParser::ForUpdateContext::getRuleIndex() const {
  return MYHParser::RuleForUpdate;
}

void MYHParser::ForUpdateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForUpdate(this);
}

void MYHParser::ForUpdateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForUpdate(this);
}

MYHParser::ForUpdateContext* MYHParser::forUpdate() {
  ForUpdateContext *_localctx = _tracker.createInstance<ForUpdateContext>(_ctx, getState());
  enterRule(_localctx, 22, MYHParser::RuleForUpdate);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(146);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(144);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(145);
      expr(0);
      break;
    }

    default:
      break;
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

MYHParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MYHParser::TypeContext* MYHParser::DeclarationContext::type() {
  return getRuleContext<MYHParser::TypeContext>(0);
}

std::vector<MYHParser::InitDeclaratorContext *> MYHParser::DeclarationContext::initDeclarator() {
  return getRuleContexts<MYHParser::InitDeclaratorContext>();
}

MYHParser::InitDeclaratorContext* MYHParser::DeclarationContext::initDeclarator(size_t i) {
  return getRuleContext<MYHParser::InitDeclaratorContext>(i);
}

tree::TerminalNode* MYHParser::DeclarationContext::CONST() {
  return getToken(MYHParser::CONST, 0);
}


size_t MYHParser::DeclarationContext::getRuleIndex() const {
  return MYHParser::RuleDeclaration;
}

void MYHParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void MYHParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

MYHParser::DeclarationContext* MYHParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 24, MYHParser::RuleDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MYHParser::CONST) {
      setState(148);
      match(MYHParser::CONST);
    }
    setState(151);
    type();
    setState(152);
    initDeclarator();
    setState(157);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MYHParser::T__3) {
      setState(153);
      match(MYHParser::T__3);
      setState(154);
      initDeclarator();
      setState(159);
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

//----------------- InitDeclaratorContext ------------------------------------------------------------------

MYHParser::InitDeclaratorContext::InitDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MYHParser::InitDeclaratorContext::ID() {
  return getToken(MYHParser::ID, 0);
}

MYHParser::ArraySuffixContext* MYHParser::InitDeclaratorContext::arraySuffix() {
  return getRuleContext<MYHParser::ArraySuffixContext>(0);
}

MYHParser::InitializerContext* MYHParser::InitDeclaratorContext::initializer() {
  return getRuleContext<MYHParser::InitializerContext>(0);
}


size_t MYHParser::InitDeclaratorContext::getRuleIndex() const {
  return MYHParser::RuleInitDeclarator;
}

void MYHParser::InitDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitDeclarator(this);
}

void MYHParser::InitDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitDeclarator(this);
}

MYHParser::InitDeclaratorContext* MYHParser::initDeclarator() {
  InitDeclaratorContext *_localctx = _tracker.createInstance<InitDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 26, MYHParser::RuleInitDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(MYHParser::ID);
    setState(162);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MYHParser::T__7) {
      setState(161);
      arraySuffix();
    }
    setState(166);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MYHParser::T__6) {
      setState(164);
      match(MYHParser::T__6);
      setState(165);
      initializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArraySuffixContext ------------------------------------------------------------------

MYHParser::ArraySuffixContext::ArraySuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MYHParser::ExprContext *> MYHParser::ArraySuffixContext::expr() {
  return getRuleContexts<MYHParser::ExprContext>();
}

MYHParser::ExprContext* MYHParser::ArraySuffixContext::expr(size_t i) {
  return getRuleContext<MYHParser::ExprContext>(i);
}


size_t MYHParser::ArraySuffixContext::getRuleIndex() const {
  return MYHParser::RuleArraySuffix;
}

void MYHParser::ArraySuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArraySuffix(this);
}

void MYHParser::ArraySuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArraySuffix(this);
}

MYHParser::ArraySuffixContext* MYHParser::arraySuffix() {
  ArraySuffixContext *_localctx = _tracker.createInstance<ArraySuffixContext>(_ctx, getState());
  enterRule(_localctx, 28, MYHParser::RuleArraySuffix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    match(MYHParser::T__7);
    setState(170);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32212393988) != 0)) {
      setState(169);
      expr(0);
    }
    setState(172);
    match(MYHParser::T__8);
    setState(179);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MYHParser::T__7) {
      setState(173);
      match(MYHParser::T__7);
      setState(174);
      expr(0);
      setState(175);
      match(MYHParser::T__8);
      setState(181);
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

//----------------- InitializerContext ------------------------------------------------------------------

MYHParser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MYHParser::ExprContext* MYHParser::InitializerContext::expr() {
  return getRuleContext<MYHParser::ExprContext>(0);
}

MYHParser::InitializerListContext* MYHParser::InitializerContext::initializerList() {
  return getRuleContext<MYHParser::InitializerListContext>(0);
}


size_t MYHParser::InitializerContext::getRuleIndex() const {
  return MYHParser::RuleInitializer;
}

void MYHParser::InitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer(this);
}

void MYHParser::InitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer(this);
}

MYHParser::InitializerContext* MYHParser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 30, MYHParser::RuleInitializer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(188);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MYHParser::T__1:
      case MYHParser::T__12:
      case MYHParser::T__16:
      case MYHParser::HEX:
      case MYHParser::OCT:
      case MYHParser::INT:
      case MYHParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(182);
        expr(0);
        break;
      }

      case MYHParser::T__4: {
        enterOuterAlt(_localctx, 2);
        setState(183);
        match(MYHParser::T__4);
        setState(185);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 32212394020) != 0)) {
          setState(184);
          initializerList();
        }
        setState(187);
        match(MYHParser::T__5);
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

//----------------- InitializerListContext ------------------------------------------------------------------

MYHParser::InitializerListContext::InitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MYHParser::InitializerContext *> MYHParser::InitializerListContext::initializer() {
  return getRuleContexts<MYHParser::InitializerContext>();
}

MYHParser::InitializerContext* MYHParser::InitializerListContext::initializer(size_t i) {
  return getRuleContext<MYHParser::InitializerContext>(i);
}


size_t MYHParser::InitializerListContext::getRuleIndex() const {
  return MYHParser::RuleInitializerList;
}

void MYHParser::InitializerListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerList(this);
}

void MYHParser::InitializerListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerList(this);
}

MYHParser::InitializerListContext* MYHParser::initializerList() {
  InitializerListContext *_localctx = _tracker.createInstance<InitializerListContext>(_ctx, getState());
  enterRule(_localctx, 32, MYHParser::RuleInitializerList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    initializer();
    setState(195);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MYHParser::T__3) {
      setState(191);
      match(MYHParser::T__3);
      setState(192);
      initializer();
      setState(197);
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

//----------------- AssignmentContext ------------------------------------------------------------------

MYHParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MYHParser::AssignmentContext::ID() {
  return getToken(MYHParser::ID, 0);
}

std::vector<MYHParser::ExprContext *> MYHParser::AssignmentContext::expr() {
  return getRuleContexts<MYHParser::ExprContext>();
}

MYHParser::ExprContext* MYHParser::AssignmentContext::expr(size_t i) {
  return getRuleContext<MYHParser::ExprContext>(i);
}


size_t MYHParser::AssignmentContext::getRuleIndex() const {
  return MYHParser::RuleAssignment;
}

void MYHParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void MYHParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

MYHParser::AssignmentContext* MYHParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 34, MYHParser::RuleAssignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    match(MYHParser::ID);
    setState(205);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MYHParser::T__7) {
      setState(199);
      match(MYHParser::T__7);
      setState(200);
      expr(0);
      setState(201);
      match(MYHParser::T__8);
      setState(207);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(208);
    match(MYHParser::T__6);
    setState(209);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStmtContext ------------------------------------------------------------------

MYHParser::ReturnStmtContext::ReturnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MYHParser::ReturnStmtContext::RETURN() {
  return getToken(MYHParser::RETURN, 0);
}

MYHParser::ExprContext* MYHParser::ReturnStmtContext::expr() {
  return getRuleContext<MYHParser::ExprContext>(0);
}


size_t MYHParser::ReturnStmtContext::getRuleIndex() const {
  return MYHParser::RuleReturnStmt;
}

void MYHParser::ReturnStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStmt(this);
}

void MYHParser::ReturnStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStmt(this);
}

MYHParser::ReturnStmtContext* MYHParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 36, MYHParser::RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    match(MYHParser::RETURN);
    setState(212);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

MYHParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MYHParser::ExprContext *> MYHParser::ExprContext::expr() {
  return getRuleContexts<MYHParser::ExprContext>();
}

MYHParser::ExprContext* MYHParser::ExprContext::expr(size_t i) {
  return getRuleContext<MYHParser::ExprContext>(i);
}

MYHParser::FunctionCallContext* MYHParser::ExprContext::functionCall() {
  return getRuleContext<MYHParser::FunctionCallContext>(0);
}

MYHParser::ArrayAccessContext* MYHParser::ExprContext::arrayAccess() {
  return getRuleContext<MYHParser::ArrayAccessContext>(0);
}

tree::TerminalNode* MYHParser::ExprContext::INT() {
  return getToken(MYHParser::INT, 0);
}

tree::TerminalNode* MYHParser::ExprContext::HEX() {
  return getToken(MYHParser::HEX, 0);
}

tree::TerminalNode* MYHParser::ExprContext::OCT() {
  return getToken(MYHParser::OCT, 0);
}

tree::TerminalNode* MYHParser::ExprContext::ID() {
  return getToken(MYHParser::ID, 0);
}

tree::TerminalNode* MYHParser::ExprContext::OR() {
  return getToken(MYHParser::OR, 0);
}

tree::TerminalNode* MYHParser::ExprContext::AND() {
  return getToken(MYHParser::AND, 0);
}

tree::TerminalNode* MYHParser::ExprContext::EQ() {
  return getToken(MYHParser::EQ, 0);
}

tree::TerminalNode* MYHParser::ExprContext::NE() {
  return getToken(MYHParser::NE, 0);
}

tree::TerminalNode* MYHParser::ExprContext::LE() {
  return getToken(MYHParser::LE, 0);
}

tree::TerminalNode* MYHParser::ExprContext::GE() {
  return getToken(MYHParser::GE, 0);
}


size_t MYHParser::ExprContext::getRuleIndex() const {
  return MYHParser::RuleExpr;
}

void MYHParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void MYHParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


MYHParser::ExprContext* MYHParser::expr() {
   return expr(0);
}

MYHParser::ExprContext* MYHParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MYHParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  MYHParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, MYHParser::RuleExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(229);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(215);
      match(MYHParser::T__16);
      setState(216);
      expr(9);
      break;
    }

    case 2: {
      setState(217);
      match(MYHParser::T__12);
      setState(218);
      expr(8);
      break;
    }

    case 3: {
      setState(219);
      match(MYHParser::T__1);
      setState(220);
      expr(0);
      setState(221);
      match(MYHParser::T__2);
      break;
    }

    case 4: {
      setState(223);
      functionCall();
      break;
    }

    case 5: {
      setState(224);
      arrayAccess();
      break;
    }

    case 6: {
      setState(225);
      match(MYHParser::INT);
      break;
    }

    case 7: {
      setState(226);
      match(MYHParser::HEX);
      break;
    }

    case 8: {
      setState(227);
      match(MYHParser::OCT);
      break;
    }

    case 9: {
      setState(228);
      match(MYHParser::ID);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(272);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(270);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(231);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(232);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(MYHParser::OR);
          setState(233);
          expr(23);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(234);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(235);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(MYHParser::AND);
          setState(236);
          expr(22);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(237);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(238);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(MYHParser::EQ);
          setState(239);
          expr(21);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(240);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(241);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(MYHParser::NE);
          setState(242);
          expr(20);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(243);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(244);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(MYHParser::T__9);
          setState(245);
          expr(19);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(246);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(247);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(MYHParser::T__10);
          setState(248);
          expr(18);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(249);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(250);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(MYHParser::LE);
          setState(251);
          expr(17);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(252);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(253);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(MYHParser::GE);
          setState(254);
          expr(16);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(255);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(256);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(MYHParser::T__11);
          setState(257);
          expr(15);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(258);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(259);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(MYHParser::T__12);
          setState(260);
          expr(14);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(261);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(262);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(MYHParser::T__13);
          setState(263);
          expr(13);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(264);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(265);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(MYHParser::T__14);
          setState(266);
          expr(12);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(267);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(268);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = match(MYHParser::T__15);
          setState(269);
          expr(11);
          break;
        }

        default:
          break;
        } 
      }
      setState(274);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

MYHParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MYHParser::FunctionCallContext::ID() {
  return getToken(MYHParser::ID, 0);
}

MYHParser::ArgsContext* MYHParser::FunctionCallContext::args() {
  return getRuleContext<MYHParser::ArgsContext>(0);
}


size_t MYHParser::FunctionCallContext::getRuleIndex() const {
  return MYHParser::RuleFunctionCall;
}

void MYHParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void MYHParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

MYHParser::FunctionCallContext* MYHParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 40, MYHParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    match(MYHParser::ID);
    setState(276);
    match(MYHParser::T__1);
    setState(278);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32212393988) != 0)) {
      setState(277);
      args();
    }
    setState(280);
    match(MYHParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

MYHParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MYHParser::ExprContext *> MYHParser::ArgsContext::expr() {
  return getRuleContexts<MYHParser::ExprContext>();
}

MYHParser::ExprContext* MYHParser::ArgsContext::expr(size_t i) {
  return getRuleContext<MYHParser::ExprContext>(i);
}


size_t MYHParser::ArgsContext::getRuleIndex() const {
  return MYHParser::RuleArgs;
}

void MYHParser::ArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs(this);
}

void MYHParser::ArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs(this);
}

MYHParser::ArgsContext* MYHParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 42, MYHParser::RuleArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    expr(0);
    setState(287);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MYHParser::T__3) {
      setState(283);
      match(MYHParser::T__3);
      setState(284);
      expr(0);
      setState(289);
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

//----------------- ArrayAccessContext ------------------------------------------------------------------

MYHParser::ArrayAccessContext::ArrayAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MYHParser::ArrayAccessContext::ID() {
  return getToken(MYHParser::ID, 0);
}

std::vector<MYHParser::ExprContext *> MYHParser::ArrayAccessContext::expr() {
  return getRuleContexts<MYHParser::ExprContext>();
}

MYHParser::ExprContext* MYHParser::ArrayAccessContext::expr(size_t i) {
  return getRuleContext<MYHParser::ExprContext>(i);
}


size_t MYHParser::ArrayAccessContext::getRuleIndex() const {
  return MYHParser::RuleArrayAccess;
}

void MYHParser::ArrayAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAccess(this);
}

void MYHParser::ArrayAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAccess(this);
}

MYHParser::ArrayAccessContext* MYHParser::arrayAccess() {
  ArrayAccessContext *_localctx = _tracker.createInstance<ArrayAccessContext>(_ctx, getState());
  enterRule(_localctx, 44, MYHParser::RuleArrayAccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(290);
    match(MYHParser::ID);
    setState(295); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(291);
              match(MYHParser::T__7);
              setState(292);
              expr(0);
              setState(293);
              match(MYHParser::T__8);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(297); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

MYHParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MYHParser::TypeContext::INT_TYPE() {
  return getToken(MYHParser::INT_TYPE, 0);
}


size_t MYHParser::TypeContext::getRuleIndex() const {
  return MYHParser::RuleType;
}

void MYHParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void MYHParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MYHListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

MYHParser::TypeContext* MYHParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 46, MYHParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(299);
    match(MYHParser::INT_TYPE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MYHParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 19: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MYHParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 22);
    case 1: return precpred(_ctx, 21);
    case 2: return precpred(_ctx, 20);
    case 3: return precpred(_ctx, 19);
    case 4: return precpred(_ctx, 18);
    case 5: return precpred(_ctx, 17);
    case 6: return precpred(_ctx, 16);
    case 7: return precpred(_ctx, 15);
    case 8: return precpred(_ctx, 14);
    case 9: return precpred(_ctx, 13);
    case 10: return precpred(_ctx, 12);
    case 11: return precpred(_ctx, 11);
    case 12: return precpred(_ctx, 10);

  default:
    break;
  }
  return true;
}

void MYHParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  myhParserInitialize();
#else
  ::antlr4::internal::call_once(myhParserOnceFlag, myhParserInitialize);
#endif
}
