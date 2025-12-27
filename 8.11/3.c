#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int ch;
    int uppercase = 0, lowercase = 0;
    printf("输入文本以开始统计大小写字母个数(EOF以结束输入): ");
    while (1) {
        ch = getchar();
        if (ch == EOF) {
            break;
        } else if (ch >= 'a' && ch <= 'z') {
            lowercase++;
        } else if (ch >= 'A' && ch <= 'Z') {
            uppercase++;
        }
    }
    printf("输入中大写字母有%d个，小写字母有%d个\n", uppercase, lowercase);

    return 0;
}