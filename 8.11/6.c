#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char get_first() {
    char ch;
    int result = scanf(" %c", &ch);
    while (getchar() != '\n') {
        ;
    }
    if (result == EOF) {
        printf("EOF\n");
        return 0;
    } else if (result != 1) {
        printf("无效输入\n");
        return 0;
    }
    return ch;
}

int main(void) {
    printf("输入文本以获得首个非空字符\n");
    char ch = get_first();
    if (ch != 0) {
        printf("第一个非空字符为:%c\n", ch);
    } else
        printf("错误输入\n");

    return 0;
}