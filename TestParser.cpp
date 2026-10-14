
// Generated from Test.g4 by ANTLR 4.13.2


#include "TestListener.h"

#include "TestParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct TestParserStaticData final {
  TestParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  TestParserStaticData(const TestParserStaticData&) = delete;
  TestParserStaticData(TestParserStaticData&&) = delete;
  TestParserStaticData& operator=(const TestParserStaticData&) = delete;
  TestParserStaticData& operator=(TestParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag testParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<TestParserStaticData> testParserStaticData = nullptr;

void testParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (testParserStaticData != nullptr) {
    return;
  }
#else
  assert(testParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<TestParserStaticData>(
    std::vector<std::string>{
      "r"
    },
    std::vector<std::string>{
      "", "'hello'"
    },
    std::vector<std::string>{
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,1,6,2,0,7,0,1,0,1,0,1,0,1,0,0,0,1,0,0,0,4,0,2,1,0,0,0,2,3,5,1,0,0,
  	3,4,5,0,0,1,4,1,1,0,0,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  testParserStaticData = std::move(staticData);
}

}

TestParser::TestParser(TokenStream *input) : TestParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

TestParser::TestParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  TestParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *testParserStaticData->atn, testParserStaticData->decisionToDFA, testParserStaticData->sharedContextCache, options);
}

TestParser::~TestParser() {
  delete _interpreter;
}

const atn::ATN& TestParser::getATN() const {
  return *testParserStaticData->atn;
}

std::string TestParser::getGrammarFileName() const {
  return "Test.g4";
}

const std::vector<std::string>& TestParser::getRuleNames() const {
  return testParserStaticData->ruleNames;
}

const dfa::Vocabulary& TestParser::getVocabulary() const {
  return testParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView TestParser::getSerializedATN() const {
  return testParserStaticData->serializedATN;
}


//----------------- RContext ------------------------------------------------------------------

TestParser::RContext::RContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TestParser::RContext::EOF() {
  return getToken(TestParser::EOF, 0);
}


size_t TestParser::RContext::getRuleIndex() const {
  return TestParser::RuleR;
}

void TestParser::RContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TestListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterR(this);
}

void TestParser::RContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TestListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitR(this);
}

TestParser::RContext* TestParser::r() {
  RContext *_localctx = _tracker.createInstance<RContext>(_ctx, getState());
  enterRule(_localctx, 0, TestParser::RuleR);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2);
    match(TestParser::T__0);
    setState(3);
    match(TestParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void TestParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  testParserInitialize();
#else
  ::antlr4::internal::call_once(testParserOnceFlag, testParserInitialize);
#endif
}
