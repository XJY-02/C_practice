#include <Windows.h>
#include <assert.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_arr(int const rows, int const cols, double const arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%s%f", j == 0 ? "" : " ", arr[i][j]);
        }
        printf("\n");
    }
}

void copy_arr(int const rows, int const cols, double target[rows][cols],
              double const source[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            target[i][j] = source[i][j];
        }
    }
}

int main(void) {
    // 创建并初始化源数组
    double source[3][5] = {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {6.6, 7.7, 8.8, 9.9, 10.0},
        {11.1, 12.2, 13.3, 14.4, 15.5}};

    // 创建目标数组（初始化为0）
    double target[3][5] = {0};

    printf("源数组：\n");
    print_arr(3, 5, source);

    printf("\n复制前的目标数组：\n");
    print_arr(3, 5, target);

    // 执行复制
    copy_arr(3, 5, target, source);

    printf("\n复制后的目标数组：\n");
    print_arr(3, 5, target);

    // 验证：修改目标数组不影响源数组
    target[0][0] = 99.99;

    printf("\n修改目标[0][0]=99.99后：\n");
    printf("源数组[0][0] = %.2f\n", source[0][0]);
    printf("目标数组[0][0] = %.2f\n", target[0][0]);

    return 0;
}