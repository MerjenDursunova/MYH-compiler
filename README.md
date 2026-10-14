# MYH Compiler

A small compiler for the **MYH** language, built with [ANTLR 4](https://www.antlr.org/)
(grammar → lexer/parser) and a C++17 interpreter/visitor backend.

## Features
- Grammar-driven lexer & parser generated from `MYH.g4` (Java & C++ targets included)
- Tree-walking evaluator in C++ (`EvalVisitor`)
- Functions, control flow (`if`/`else`, `while`, `for`), declarations & assignments
- Optional LLVM IR / assembly emission (`--emit-llvm`, `--emit-asm`)
- GUI front-end (`myh_gui.py`), grammar unit tests (`test.gunit`, `gunitscript.sh`),
  fuzzer (`fuzzer/`), and extra test cases (`extra-test-cases/`)
- Project report: `Report.docx`

## Requirements
- C++17 compiler (`g++` / `clang++`)
- ANTLR 4.13.2 runtime library (`antlr4-runtime`) — C++ runtime
- Java (only if you want to regenerate the parser from `MYH.g4`)

## Build
```sh
make            # builds the ./myh binary
# If the ANTLR runtime is not in /usr/local:
make PREFIX=/path/to/antlr/runtime/prefix
```

## Run
```sh
./myh program.myh              # interpret
./myh --emit-llvm program.myh  # print LLVM IR
./myh --emit-asm   program.myh  # print assembly
```

## Regenerating the parser (optional)
```sh
java -jar antlr-4.13.2-complete.jar -Dlanguage=Cpp MYH.g4
```

## Repo layout
| Path | Purpose |
|---|---|
| `MYH.g4` | ANTLR grammar (source of truth) |
| `MYHLexer.cpp/h`, `MYHParser.cpp/h` | generated C++ lexer/parser |
| `EvalVisitor.cpp/h` | interpreter / code-generation visitor |
| `main.cpp` | CLI entry point |
| `Makefile` | build rules |
| `myh_gui.py` | simple GUI |
| `fuzzer/` | random program generator for stress testing |
| `extra-test-cases/` | `.sy` test inputs + expected `.out` |
| `Report.docx` | project report |

> Note: `.interp`/`.tokens` files and the `Test*` lexer/parser files are generated
> artifacts kept only for reference; the grammar source is `MYH.g4`.

## Authors
Merjen, Yasmine, Hana
