
#================================================================
#   Copyright (C) 2018  All rights reserved.
#   
#   文件名称：Makefile
#   创 建 者：MoZhiYe
#   创建日期：2018年03月25日 10:02:12
#   描    述：
#
#================================================================

CFLAGS = -Og
CC = gcc

all : show_bytes32 show_bytes64

show_bytes32 : show_bytes.c
	$(CC) $(CFLAGS) -v -m32 $^ -o $@

show_bytes64 : show_bytes.c
	$(CC) $(CFLAGS) -v -m64 $^ -o $@

clean:
	rm show_bytes32 show_bytes64


