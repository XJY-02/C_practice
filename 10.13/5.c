#include <Windows.h>
#include <assert.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 编写一个函数，返回存储在 double
// 类型数组中最大值和最小值的差值，并在一个简单的程序中测试该函数。

double max_gap(double const arr[], int const len) {
    assert(arr != NULL);
    assert(len > 0);
    double min, max;
    min = max = arr[0];
    for (int i = 1; i < len; i++) {
        max = arr[i] > max ? arr[i] : max;
        min = arr[i] < min ? arr[i] : min;
    }
    return max - min;
}

int main(void) {  // 测试用例
    double test1[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double test2[] = {5.0, 5.0, 5.0, 5.0, 5.0};  // 所有元素相同
    double test3[] = {-5.0, -3.0, 0.0, 2.0, 4.0};
    double test4[] = {100.0, -100.0, 50.0, -50.0};
    double test5[] = {3.14};  // 单个元素

    printf("测试1 极差: %.2f\n", max_gap(test1, 5));  // 4.00
    printf("测试2 极差: %.2f\n", max_gap(test2, 5));  // 0.00
    printf("测试3 极差: %.2f\n", max_gap(test3, 5));  // 9.00
    printf("测试4 极差: %.2f\n", max_gap(test4, 4));  // 200.00
    printf("测试5 极差: %.2f\n", max_gap(test5, 1));  // 0.00

    // 测试边界情况
    double test6[] = {1e10, -1e10};                   // 大数
    printf("测试6 极差: %.2f\n", max_gap(test6, 2));  // 2e10

    return 0;
}