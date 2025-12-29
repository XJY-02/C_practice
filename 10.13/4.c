#include <Windows.h>
#include <assert.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 编写一个函数,返回存储在
// double类型数组中最大值的下标,并在一个简单的程序中测试该函数

int get_max_val_index(double const arr[], int const len) {
    assert(arr != NULL);
    assert(len > 0);
    int max_val_index = 0;
    for (int i = 1; i < len; i++) {
        max_val_index = arr[i] > arr[max_val_index] ? i : max_val_index;
    }
    return max_val_index;
}

int main(void) {  // 测试数组
    double test1[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double test2[] = {5.5, 4.4, 3.3, 2.2, 1.1};
    double test3[] = {1.0, 3.0, 2.0, 3.0, 1.0};  // 多个最大值
    double test4[] = {-5.5, -3.3, -1.1, -7.7};
    double test5[] = {42.0};  // 单个元素

    printf("测试1最大值的索引: %d\n", get_max_val_index(test1, 5));  // 应该是4
    printf("测试2最大值的索引: %d\n", get_max_val_index(test2, 5));  // 应该是0
    printf("测试3最大值的索引: %d\n",
           get_max_val_index(test3, 5));  // 应该是1（第一个最大值）
    printf("测试4最大值的索引: %d\n", get_max_val_index(test4, 4));  // 应该是2
    printf("测试5最大值的索引: %d\n", get_max_val_index(test5, 1));  // 应该是0
    return 0;
}