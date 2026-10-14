#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
#include "antlr4-runtime.h"
#include "MYHLexer.h"
#include "MYHParser.h"
#include "EvalVisitor.h"

using namespace antlr4;

int main(int argc, const char *argv[])
{
    if (argc < 2)
    {
        std::cerr << "Usage: ./myh [--emit-llvm|--emit-asm] <file.myh>" << std::endl;
        return 1;
    }

    bool emitLLVM = false;
    bool emitASM = false;
    std::string inputPath;
    std::string mode = argv[1];
    if (mode == "--emit-llvm" || mode == "--emit-asm")
    {
        if (argc < 3)
        {
            std::cerr << "Usage: ./myh " << mode << " <file.myh>" << std::endl;
            return 1;
        }
        emitLLVM = mode == "--emit-llvm";
        emitASM = mode == "--emit-asm";
        inputPath = argv[2];
    }
    else
    {
        inputPath = argv[1];
    }

    std::ifstream stream(inputPath);
    if (!stream)
    {
        std::cerr << "Could not open input file: " << inputPath << std::endl;
        return 1;
    }

    ANTLRInputStream input(stream);

    MYHLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    MYHParser parser(&tokens);

    // Make the parser throw on first syntax error (no recovery)
    parser.setErrorHandler(std::make_shared<BailErrorStrategy>());

    MYHParser::ProgramContext *program = nullptr;
    try
    {
        program = parser.program();
    }
    catch (ParseCancellationException &e)
    {
        std::cerr << "Syntax error: " << e.what() << std::endl;
        return 1;
    }

    // If we get here, parsing succeeded
    EvalVisitor eval;
    try
    {
        int result = std::any_cast<int>(eval.visitProgram(program));
        if (emitLLVM)
        {
            std::cout << "; MYH generated LLVM IR\n";
            std::cout << "; Source: " << inputPath << "\n\n";
            std::cout << "@.fmt = private unnamed_addr constant [4 x i8] c\"%d\\0A\\00\"\n";
            std::cout << "declare i32 @printf(i8*, ...)\n\n";
            std::cout << "define i32 @main() {\n";
            std::cout << "entry:\n";
            std::cout << "  %fmt = getelementptr [4 x i8], [4 x i8]* @.fmt, i32 0, i32 0\n";
            std::cout << "  call i32 (i8*, ...) @printf(i8* %fmt, i32 " << result << ")\n";
            std::cout << "  ret i32 " << result << "\n";
            std::cout << "}\n";
        }
        else if (emitASM)
        {
            std::cout << "# MYH generated x86-64 assembly preview\n";
            std::cout << "# Source: " << inputPath << "\n";
            std::cout << "# This backend folds the supported MYH program to its final integer result.\n\n";
            std::cout << "    .section __TEXT,__text,regular,pure_instructions\n";
            std::cout << "    .globl _main\n";
            std::cout << "_main:\n";
            std::cout << "    pushq %rbp\n";
            std::cout << "    movq %rsp, %rbp\n";
            std::cout << "    leaq L_.fmt(%rip), %rdi\n";
            std::cout << "    movl $" << result << ", %esi\n";
            std::cout << "    xorl %eax, %eax\n";
            std::cout << "    callq _printf\n";
            std::cout << "    movl $" << result << ", %eax\n";
            std::cout << "    popq %rbp\n";
            std::cout << "    retq\n\n";
            std::cout << "    .section __TEXT,__cstring,cstring_literals\n";
            std::cout << "L_.fmt:\n";
            std::cout << "    .asciz \"%d\\n\"\n";
        }
        else
        {
            std::cout << result << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Runtime error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}