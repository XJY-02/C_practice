#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr[8];
    int len = sizeof(arr) / sizeof(int);
    printf("enter 8 int: \n");
    for (int i = 0; i < len; i++) {
        printf("enter the %dth num: ", i + 1);
        int result = scanf("%d", arr + i);
        while (getchar() != '\n') {
            ;
        }
        if (result != 1) {
            printf("invalid input, try again\n");
            i--;  // 重新输入这个位置
        }
    }

    printf("reverse output: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%s%d", ((i == len - 1) ? "" : " "), arr[i]);
    }
    putchar('\n');
    return 0;
}