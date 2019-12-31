// created by: WestleyR
// email: westleyr@nym.hush.com
// https://github.com/WestleyR/c-utils
// date: Dec 31, 2019
// version-1.0.0
//
// The Clear BSD License
//
// Copyright (c) 2019 WestleyR
// All rights reserved.
//
// This software is licensed under a Clear BSD License.
//

#include <stdio.h>

#include "string-utils.h"
#include "append_to_int.h"

int main() {
  int foo = append_to_int(21, 50);
  foo = append_to_int(foo, 5);

  if (foo != 21505) {
    printf("FAIL: output does not match\n");
    return(1);
  }

  printf("21 append 50 append 5 = %d\n", foo);


  printf("string-utils.h examples/tests\n");

  char arr[20];
  arr[0] = '\0';

  static const char* msg = "Hello, world!";

  for (int i = 0; i < 14; i++) {
    int f = append_char(arr, msg[i]);
    if (f != i+1) {
      printf("FAIL: return size dose not match; supposted to be: %d; got: %d\n", i, f);
      return(1);
    }
    if (arr[i] != msg[i]) {
      printf("FAIL: append_char failed; expecting '%c' at arr[%d]\n", msg[i], i);
      return(1);
    }
  }

  printf("After appending chars: %s\n", arr);


  return(0);
}

// vim: tabstop=2 shiftwidth=2 expandtab autoindent softtabstop=0
