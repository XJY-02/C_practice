#include <Windows.h>
#include <assert.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 编写一个函数，把 double
// 类型数组中的数据倒序排列，并在一个简单的程序中测试该函数。

void reverse_arr(double arr[], int len) {
    assert(arr != 0);
    assert(len > 0);
    double tem;
    for (int i = 0; i < len / 2; i++) {
        tem = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = tem;
    }
}

// 辅助函数：打印数组
void print_array(double const arr[], int len) {
    printf("[");
    for (int i = 0; i < len; i++) {
        printf("%.1f", arr[i]);
        if (i < len - 1) printf(", ");
    }
    printf("]\n");
}

int main(void) {  // 测试用例
    double test1[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double test2[] = {1.0, 2.0, 3.0, 4.0};  // 偶数长度
    double test3[] = {5.0};                 // 单个元素
    double test4[] = {2.0, 4.0, 6.0, 8.0, 10.0, 12.0, 14.0};

    printf("原始数组: ");
    print_array(test1, 5);
    reverse_arr(test1, 5);
    printf("反转后:   ");
    print_array(test1, 5);
    printf("\n");

    printf("原始数组: ");
    print_array(test2, 4);
    reverse_arr(test2, 4);
    printf("反转后:   ");
    print_array(test2, 4);
    printf("\n");

    printf("原始数组: ");
    print_array(test3, 1);
    reverse_arr(test3, 1);
    printf("反转后:   ");
    print_array(test3, 1);
    printf("\n");

    printf("原始数组: ");
    print_array(test4, 7);
    reverse_arr(test4, 7);
    printf("反转后:   ");
    print_array(test4, 7);

    // 验证：反转两次应恢复原状
    reverse_arr(test1, 5);
    printf("\n两次反转恢复原状: ");
    print_array(test1, 5);
    return 0;
}