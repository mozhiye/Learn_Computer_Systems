/*================================================================
*   Copyright (C) 2018 All rights reserved.
*   
*   文件名称：show_bytes.c
*   创 建 者：MoZhiYe
*   创建日期：2018年03月25日 09:47:28
*   描    述：
*
================================================================*/


#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)  //size_t 指定确定大小数据类型格式, 指任何对象所能达到的最大长度, 是sizeof()的返回类型
{
    size_t i;
    for(i = 0; i < len; i++) {
        printf("%.2x ", start[i]);  //至少两位0x输出, 输出的是该字节的值, 0x1234输出0x34, 0x12
    }
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer)(&x), sizeof(int));
}

void show_float(float x)
{
    show_bytes((byte_pointer)(&x), sizeof(&x));
}

void show_pointer (void *x)
{
    show_bytes((byte_pointer)(&x), sizeof(void *));
}

void show_string(char *start, size_t len)
{
    show_bytes((byte_pointer)start, len);
}
int main(int argc, char *argv[])
{
    int a = 12345;
    float b = 12345.0;
    void *c = &a;
    char *s = "abcdef";
    show_int(a);
    show_float(b);
    show_pointer(c);
    show_string(s, strlen(s));
    return 0;
}


