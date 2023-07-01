//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// WARNING: This test was generated by generate_feature_test_macro_components.py
// and should not be edited manually.
//
// clang-format off

// <coroutine>

// Test the feature test macros defined by <coroutine>

/*  Constant               Value
    __cpp_lib_coroutine    201902L [C++20]
*/

#include <coroutine>
#include "test_macros.h"

#if TEST_STD_VER < 14

# ifdef __cpp_lib_coroutine
#   error "__cpp_lib_coroutine should not be defined before c++20"
# endif

#elif TEST_STD_VER == 14

# ifdef __cpp_lib_coroutine
#   error "__cpp_lib_coroutine should not be defined before c++20"
# endif

#elif TEST_STD_VER == 17

# ifdef __cpp_lib_coroutine
#   error "__cpp_lib_coroutine should not be defined before c++20"
# endif

#elif TEST_STD_VER == 20

# ifndef __cpp_lib_coroutine
#   error "__cpp_lib_coroutine should be defined in c++20"
# endif
# if __cpp_lib_coroutine != 201902L
#   error "__cpp_lib_coroutine should have the value 201902L in c++20"
# endif

#elif TEST_STD_VER > 20

# ifndef __cpp_lib_coroutine
#   error "__cpp_lib_coroutine should be defined in c++2b"
# endif
# if __cpp_lib_coroutine != 201902L
#   error "__cpp_lib_coroutine should have the value 201902L in c++2b"
# endif

#endif // TEST_STD_VER > 20

