#include <Windows.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 除基取余法求
void to_base_n(int num, int base) {
    // 递归思想
    // int shang = num / base;
    // int yushu = num % base;
    // if (shang > 0) {
    //     to_base_n(shang, base);
    // }
    // putchar(yushu + 48);

    // 迭代思想(利用栈)
    char stack[100];
    int top = -1;
    printf("%d的%d进制表示是 ", num, base);
    while (num > 0) {
        int yushu = num % base;
        stack[++top] = yushu + '0';
        num /= base;
    }
    while (top >= 0) {
        putchar(stack[top--]);
    }
    putchar('\n');
}

int main(void) {
    to_base_n(129, 8);

    return 0;
}