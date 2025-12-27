#include <stdio.h>

double TiaoheAverage(double x, double y) { return 2 / (1 / x + 1 / y); }

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
        printf("调和平均数为%f\n", TiaoheAverage(x, y));
    }
    return 0;
}