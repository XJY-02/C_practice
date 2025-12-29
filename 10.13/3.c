#include <Windows.h>
#include <assert.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 编写一个函数，返回存储在
// int类型数组中的最大值，并在一个简单的程序中测试该函数。

int get_max_val(int const arr[], int const len) {
    assert(arr != NULL);
    assert(len > 0);

    int max = arr[0];
    for (int i = 1; i < len; i++) {
        max = arr[i] > max ? arr[i] : max;
    }
    return max;
}

int main(void) {  // 测试用例
    int test1[] = {1, 2, 3, 4, 5};
    int test2[] = {5, 4, 3, 2, 1};
    int test3[] = {-5, 0, 5, -10, 10};
    int test4[] = {42};          // 单个元素
    int test5[] = {3, 3, 3, 3};  // 所有元素相同

    printf("测试1: %d\n", get_max_val(test1, 5));  // 应该输出5
    printf("测试2: %d\n", get_max_val(test2, 5));  // 应该输出5
    printf("测试3: %d\n", get_max_val(test3, 5));  // 应该输出10
    printf("测试4: %d\n", get_max_val(test4, 1));  // 应该输出42
    printf("测试5: %d\n", get_max_val(test5, 4));  // 应该输出3
    return 0;
}