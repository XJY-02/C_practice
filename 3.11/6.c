#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float kuatuo;
    while (1) {
        printf("请输入夸脱数： ");
        int result = scanf("%f", &kuatuo);
        if (result != 1 || kuatuo < 0) {
            printf("无效输入\n");
            while (getchar() != '\n');
            continue;
        }
        break;
    }
    float mass_of_waterparticle = 3e-23;
    printf("水分子数量为：%e\n", kuatuo / mass_of_waterparticle);
    return 0;
}