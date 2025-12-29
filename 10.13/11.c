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

void double_arr(int const rows, int const cols, double arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] *= 2;
        }
    }
}

int main(void) {
    // 测试1：3x4数组
    printf("=== 测试1：3x4数组 ===\n");
    double arr1[3][4] = {
        {1.1, 2.2, 3.3, 4.4},
        {5.5, 6.6, 7.7, 8.8},
        {9.9, 10.1, 11.1, 12.2}};

    printf("原数组：\n");
    print_arr(3, 4, arr1);

    double_arr(3, 4, arr1);

    printf("\n加倍后：\n");
    print_arr(3, 4, arr1);

    // 测试2：2x2数组
    printf("\n=== 测试2：2x2数组 ===\n");
    double arr2[2][2] = {
        {1.5, 2.5},
        {3.5, 4.5}};

    printf("原数组：\n");
    print_arr(2, 2, arr2);

    double_arr(2, 2, arr2);

    printf("加倍后：\n");
    print_arr(2, 2, arr2);

    // 测试3：1x5数组（一行）
    printf("\n=== 测试3：1x5数组 ===\n");
    double arr3[1][5] = {{1.0, 2.0, 3.0, 4.0, 5.0}};

    printf("原数组：\n");
    print_arr(1, 5, arr3);

    double_arr(1, 5, arr3);

    printf("加倍后：\n");
    print_arr(1, 5, arr3);

    // 测试4：验证是否真的修改了原数组
    printf("\n=== 测试4：验证原地修改 ===\n");
    double test[2][3] = {{0}};

    printf("修改前地址：%p\n", (void*)test);
    printf("修改前值：%.2f\n", test[0][0]);

    test[0][0] = 3.14;
    double_arr(2, 3, test);

    printf("修改后地址：%p (应该相同)\n", (void*)test);
    printf("修改后值：%.2f (应该是6.28)\n", test[0][0]);

    return 0;
}