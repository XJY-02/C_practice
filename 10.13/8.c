#include <Windows.h>
#include <assert.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy_ptr(double* const target, double const* const source, int const len) {
    for (int i = 0; i < len; i++) {
        *(target + i) = *(source + i);
    }
}

int main(void) {
    double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double target[3] = {0};
    // 需要把 3.3, 4.4, 5.5 复制到 target 中
    // source在表达式中是首元素(下标0)的地址，即source+0,那么第三个元素(下标2)的地址为source+2
    copy_ptr(target, source + 2, 3);

    for (int i = 0; i < 3; i++) {
        printf("target[%d]=%.1f\n", i, target[i]);
    }
    return 0;
}