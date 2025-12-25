#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    while (1) {
        int time;
        printf("输入序列项数：");
        while (scanf("%d", &time) != 1) {
            printf("无效，重新输入\n");
            while (getchar() != '\n');
        }
        while (getchar() != '\n');

        if (time <= 0) {
            printf("Done\n");
            break;
        }

        double sum1 = 0, sum2 = 0;

        for (int i = 0; i < time; i++) {
            double num = 1.0 / (1.0 * (i + 1));
            sum1 += num;
            sum2 += ((i % 2 == 0) ? num : -num);
        }

        printf("序列1=%f\n", sum1);
        printf("序列2=%f\n", sum2);
    }

    return 0;
}