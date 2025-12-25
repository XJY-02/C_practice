#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double arr[8], sum[8];
    int len = sizeof(arr) / sizeof(double);
    printf("enter 8 double: \n");
    for (int i = 0; i < len; i++) {
        printf("enter the %dth double: ", i + 1);
        int result = scanf("%lf", arr + i);
        while (getchar() != '\n') {
            ;
        }
        if (result != 1) {
            printf("invalid input, try again\n");
            i--;  // 重新输入这个位置
        }
    }
    for (int i = 0; i < len; i++) {
        if (i == 0) {
            sum[i] = arr[i];
            continue;
        }
        sum[i] = sum[i - 1] + arr[i];
    }

    for (int i = 0; i < len; i++) {
        printf("%s%8.2f", ((i == 0) ? "数组1 " : "|"), arr[i]);
    }
    putchar('\n');

    for (int i = 0; i < len; i++) {
        printf("%s%8.2f", ((i == 0) ? "数组2 " : "|"), sum[i]);
    }
    putchar('\n');
    return 0;
}