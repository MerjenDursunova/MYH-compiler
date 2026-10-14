
// Generated from Test.g4 by ANTLR 4.13.2


#include "TestLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct TestLexerStaticData final {
  TestLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  TestLexerStaticData(const TestLexerStaticData&) = delete;
  TestLexerStaticData(TestLexerStaticData&&) = delete;
  TestLexerStaticData& operator=(const TestLexerStaticData&) = delete;
  TestLexerStaticData& operator=(TestLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag testlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<TestLexerStaticData> testlexerLexerStaticData = nullptr;

void testlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (testlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(testlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<TestLexerStaticData>(
    std::vector<std::string>{
      "T__0"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'hello'"
    },
    std::vector<std::string>{
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,1,9,6,-1,2,0,7,0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,1,1,1,1,0,0,8,0,1,1,
  	0,0,0,1,3,1,0,0,0,3,4,5,104,0,0,4,5,5,101,0,0,5,6,5,108,0,0,6,7,5,108,
  	0,0,7,8,5,111,0,0,8,2,1,0,0,0,1,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  testlexerLexerStaticData = std::move(staticData);
}

}

TestLexer::TestLexer(CharStream *input) : Lexer(input) {
  TestLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *testlexerLexerStaticData->atn, testlexerLexerStaticData->decisionToDFA, testlexerLexerStaticData->sharedContextCache);
}

TestLexer::~TestLexer() {
  delete _interpreter;
}

std::string TestLexer::getGrammarFileName() const {
  return "Test.g4";
}

const std::vector<std::string>& TestLexer::getRuleNames() const {
  return testlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& TestLexer::getChannelNames() const {
  return testlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& TestLexer::getModeNames() const {
  return testlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& TestLexer::getVocabulary() const {
  return testlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView TestLexer::getSerializedATN() const {
  return testlexerLexerStaticData->serializedATN;
}

const atn::ATN& TestLexer::getATN() const {
  return *testlexerLexerStaticData->atn;
}




void TestLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  testlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(testlexerLexerOnceFlag, testlexerLexerInitialize);
#endif
}
