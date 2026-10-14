#pragma once

// Compatibility shim for different ANTLR4 C++ runtime include layouts.
//
// IMPORTANT: This file is in your project root, and you compile with `-I.`.
// That means `<antlr4-runtime.h>` would resolve to THIS file again, causing a
// self-include and leaving the `antlr4` namespace undefined.
//
// So:
// - Prefer the "folder" layout: <antlr4-runtime/antlr4-runtime.h>
// - Otherwise, use include_next to skip this local shim and include the real
//   system <antlr4-runtime.h> if present.

#if __has_include(<antlr4-runtime/antlr4-runtime.h>)
#include <antlr4-runtime/antlr4-runtime.h>
#elif defined(__has_include_next) && __has_include_next(<antlr4-runtime.h>)
#include_next <antlr4-runtime.h>
#else
#error "ANTLR4 C++ runtime headers not found. Install antlr4-cpp-runtime (headers + lib) and add its include path."
#endif

