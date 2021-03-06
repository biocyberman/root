//------------------------------------------------------------------------------
// CLING - the C++ LLVM-based InterpreterG :)
//
// This file is dual-licensed: you can choose to license it under the University
// of Illinois Open Source License or the GNU Lesser General Public License. See
// LICENSE.TXT for details.
//------------------------------------------------------------------------------

// RUN: %cling %s | FileCheck %s

extern "C" int printf(const char*, ...);
void _42_Semmel_Knödel() {
  printf("Semmelknödel\n"); // CHECK: Semmelknödel 
}
