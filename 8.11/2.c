#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int ch;
    printf("输入文本以开始打印字符和ASCII对: ");
    while (1) {
        ch = getchar();
        if (ch == EOF) {
            break;
        } else if (ch == '\n') {
            printf("\\n——%d ", ch);
            putchar('\n');
            printf("输入文本以继续（EOF退出）: ");
        } else if (ch == '\t') {
            printf("\\t——%d ", ch);
        } else if (ch >= 0 && ch <= 31) {
            printf("^%c——%d ", ch + 64, ch);
        } else
            printf("%c——%d ", ch, ch);
    }

    return 0;
}