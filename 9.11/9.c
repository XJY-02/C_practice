#include <Windows.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double power(double x, int index) {
    if (x == 0 && index == 0) {
        printf("0的0次幂未定义,默认返回1\n");
        return 1;
    } else if (x == 0) {
        return 0;
    } else if (index == 0) {
        return 1;
    } else {
        if (index > 0) {
            return x * power(x, index - 1);
        } else
            return 1 / power(x, -index);
    }
}

int main(void) {
    while (1) {
        printf("输入底数和指数: ");
        double x;
        int y;
        int input_result = scanf("%lf%d", &x, &y);
        while (getchar() != '\n') {
            ;
        }
        if (input_result != 2) {
            printf("输入格式不符\n");
            continue;
        }
        double result = power(x, y);
        printf("result = %g ^ %d = %g\n", x, y, result);
    }
    return 0;
}