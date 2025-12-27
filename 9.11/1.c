#include <stdio.h>

double min(double x, double y) { return x < y ? x : y; }

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
        printf("较小值为%f\n", min(x, y));
    }
    return 0;
}