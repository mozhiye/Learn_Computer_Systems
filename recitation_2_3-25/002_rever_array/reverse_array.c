/*================================================================
*   Copyright (C) 2018 All rights reserved.
*   
*   文件名称：reverse_array.c
*   创 建 者：MoZhiYe
*   创建日期：2018年03月25日 12:29:15
*   描    述：
*
================================================================*/

#include <stdio.h>

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int array[], int len)
{
    int first, last;
    printf("len = 0x%x\n", len);
    for(first = 0, last = len - 1; first < last; first++, last--) {
        inplace_swap(&array[first], &array[last]);
    }
}

void log_array(int *array, int len)
{
    int cnt;
    for(cnt = 0; cnt < len; cnt++) {
        printf("%d ", array[cnt]);
    }
    puts("\n");
}

int main(int argc, char *argv[])
{
    //int array[4] = {1,2,3,4};
    int array[5] = {1,2,3,4,5};
    //printf("x = %" PRId32 ", y = %" PRIu64 "\n", 88, 99);
    log_array(array, sizeof(array) / sizeof(int));
    reverse_array(array, sizeof(array) / sizeof(int));
    log_array(array, sizeof(array) / sizeof(int));
    return 0;
}



