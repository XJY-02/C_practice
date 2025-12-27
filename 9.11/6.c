#include <stdio.h>

void min_mid_max(double* x, double* y, double* z) {
    double arr[3] = {*x, *y, *z};
    // 冒泡排序 arr
    for (int i = 0; i < 2; i++) {          // 比较n-1轮
        for (int j = 0; j < 2 - i; j++) {  // 每轮比较n-1-i次
            if (arr[j] > arr[j + 1]) {
                double tem = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tem;
            }
        }
    }
    *x = arr[0];
    *y = arr[1];
    *z = arr[2];
}

int main(void) {
    while (1) {
        printf("输入3个浮点数: ");
        double x, y, z;
        int result = scanf("%lf%lf%lf", &x, &y, &z);
        while (getchar() != '\n') {
            ;
        }
        if (result != 3) {
            printf("输入格式不符\n");
            continue;
        }
        printf("处理前 x = %g, y = %g, z = %g\n", x, y, z);
        min_mid_max(&x, &y, &z);
        printf("处理后 x = %g, y = %g, z = %g\n", x, y, z);
    }
    return 0;
}