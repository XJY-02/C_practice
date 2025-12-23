#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float hight;
    while (1) {
        printf("请输入升高（/英寸）： ");
        int result = scanf("%f", &hight);
        if (result != 1 || hight < 0) {
            printf("无效输入\n");
            while (getchar() != '\n');
            continue;
        }
        break;
    }
    printf("身高（/厘米）为：%.2f cm\n", hight * 2.54);
    return 0;
}