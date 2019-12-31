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

#include "string-utils.h"

size_t append_char(char* str, char c) {
  size_t len = 0;

  while (*str != '\0') {
    str++;
    len++;
  }

  *str = c;
  str++;
  *str = '\0';

  return(len+1);
}

// vim: tabstop=2 shiftwidth=2 expandtab autoindent softtabstop=0
