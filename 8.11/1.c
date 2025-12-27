#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int count = 0;
    printf("输入文本以统计字符数：");
    while (1) {
        int c = getchar();
        if (c == EOF) {
            break;
        } else
            count++;
    }
    printf("字符数为%d\n", count);
    return 0;
}