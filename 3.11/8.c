#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float bei;
    while (1) {
        printf("请输入杯数：");
        int result = scanf("%f", &bei);
        if (result != 1 || bei < 0) {
            printf("invalid input\n");
            while (getchar() != '\n');
            continue;
        }
        break;
    }
    float pintuo = bei / 2;
    float angsi = bei * 8;
    float tangshao = angsi * 2;
    float chashao = tangshao * 3;
    printf("相当于 %.2f品脱\n", pintuo);
    printf("相当于 %.2f盎司\n", angsi);
    printf("相当于 %.2f汤勺\n", tangshao);
    printf("相当于 %.2f茶勺\n", chashao);
    return 0;
}