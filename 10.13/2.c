#include <Windows.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy_arr(double target[], double const source[], int const len) {
    for (int i = 0; i < len; i++) {
        target[i] = source[i];
    }
}

void copy_ptr(double* const target, double const* const source, int const len) {
    for (int i = 0; i < len; i++) {
        *(target + i) = *(source + i);
    }
}

void copy_ptrs(double* target, double const* start, double const* end) {
    while (start < end) {
        *target++ = *start++;
    }
}

int main(void) {
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);

    // 打印验证
    for (int i = 0; i < 5; i++) {
        printf("target1[%d]=%.1f, target2[%d]=%.1f, target3[%d]=%.1f\n", i,
               target1[i], i, target2[i], i, target3[i]);
    }
    return 0;
}