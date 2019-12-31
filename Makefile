# Created by: WestleyR
# email: westleyr@nym.hush.com
# Date: Dec 29, 2019
# https://github.com/WestleyR/c-utils
# Version-1.0.0
#
# The Clear BSD License
#
# Copyright (c) 2019 WestleyR
# All rights reserved.
#
# This software is licensed under a Clear BSD License.
#

CC = gcc
CFLAGS = -Wall -Isrc
TARGET = test-example

SRC = $(wildcard src/*.c)
SRC += test.c

OBJS = $(SRC:.c=.o)

.PHONY:
all: $(TARGET)

.PHONY:
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJS)
	
.PHONY:
%.o: %.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ -c $<

.PHONY:
test: $(TARGET)
	./$(TARGET)

.PHONY:
clean:
	 rm -f $(TARGET) $(OBJS) 

#
# End Makefile
#
