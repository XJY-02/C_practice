#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool issushu(int num) {
    bool flag = true;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main(void) {
    int num;
    while (1) {
        printf("输入一个正整数: ");
        int result = scanf("%d", &num);
        while (getchar() != '\n') {
            ;
        }
        if (result != 1) {
            printf("输入整数\n");
            continue;
        } else if (num < 0) {
            printf("只接收正整数\n");
        } else
            break;
    }
    printf("小于等于该数的质数有: \n");
    for (int i = 2, printcount = 0; i <= num; i++) {
        if (issushu(i)) {
            printf("%s%5d", printcount % 5 == 0 ? "" : " ", i);
            if (printcount % 5 == 4) {
                putchar('\n');
            }
            printcount++;
        }
    }
    putchar('\n');
    return 0;
}