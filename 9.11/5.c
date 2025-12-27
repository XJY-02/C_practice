#include <stdio.h>

void larger_of(double* x, double* y) {
    if (*x > *y) {
        *y = *x;
    } else
        *x = *y;
}

int main(void) {
    while (1) {
        printf("输入2个浮点数: ");
        double x, y;
        int result = scanf("%lf%lf", &x, &y);
        while (getchar() != '\n') {
            ;
        }
        if (result != 2) {
            printf("输入格式不符\n");
            continue;
        }
        printf("处理前 x = %g, y = %g\n", x, y);
        larger_of(&x, &y);
        printf("处理后 x = %g, y = %g\n", x, y);
    }
    return 0;
}