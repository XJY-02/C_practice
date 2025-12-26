#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int odd_sum = 0, odd_num = 0;
    int even_sum = 0, even_num = 0;
    int input;
    while (1) {
        printf("输入整数（输入0结束程序）: ");
        int result = scanf("%d", &input);
        while (getchar() != '\n') {
            ;
        }
        if (result != 1) {
            printf("invalid input\n");
            continue;
        }
        if (input == 0) {
            break;
        }
        if (input % 2 != 0) {
            odd_num++;
            odd_sum += input;
        } else {
            even_num++;
            even_sum += input;
        }
    }

    printf("偶数有%d个,", even_num);
    if (even_num > 0) {
        printf("偶数平均值为%.2f\n", (float)even_sum / even_num);
    } else
        printf("没有偶数输入，无法计算平均值。\n");

    printf("奇数有%d个,", odd_num);
    if (odd_num > 0) {
        printf("奇数平均值为%.2f\n", (float)odd_sum / odd_num);
    } else
        printf("没有奇数输入，无法计算平均值。\n");

    return 0;
}