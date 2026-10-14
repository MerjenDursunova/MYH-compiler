.PHONY: build clean run

CXX ?= g++
CXXFLAGS ?= -std=c++17 -O2 -Wall -Wextra

SRC = main.cpp EvalVisitor.cpp MYHLexer.cpp MYHParser.cpp MYHBaseVisitor.cpp MYHVisitor.cpp

# macOS (Homebrew) default location; override by running:
#   make PREFIX=/some/path
PREFIX ?= /usr/local

INCLUDES = -I. -I$(PREFIX)/include -I$(PREFIX)/include/antlr4-runtime
LIBS = -L$(PREFIX)/lib -lantlr4-runtime

build:
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o myh $(SRC) $(LIBS)

run: build
	./myh $(FILE)

clean:
	rm -f myh
