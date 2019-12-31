// created by: WestleyR
// email: westleyr@nym.hush.com
// https://github.com/WestleyR/c-utils
// date: Dec 29, 2019
// version-1.0.0
//
// The Clear BSD License
//
// Copyright (c) 2019 WestleyR
// All rights reserved.
//
// This software is licensed under a Clear BSD License.
//

#include "append_to_int.h"

int append_to_int(const int num1, const int num2) {
  int ret = 0;

  if (num2 < 10) {
    ret = num1 * 10;
  } else if (num2 > 10) {
    ret = num1 * 100;
  } else if (num2 > 100) {
    ret = num1 * 1000;
  }

  ret += num2;

  return(ret);
}

// vim: tabstop=2 shiftwidth=2 expandtab autoindent softtabstop=0
