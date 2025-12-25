#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define Liters_per_Gallon 3.785
#define Kilometers_per_Mile 1.609

int main(void) {
    float mileage, gasoline_consumption;

    while (1) {
        printf("输入里程（英里）和汽油消耗量（加仑）：");
        int result = scanf("%f%f", &mileage, &gasoline_consumption);
        while (getchar() != '\n') {
            ;
        }
        if (result != 2) {
            printf("无效输入\n");
            continue;
        }
        break;
    }
    float mileage_per_gallon = mileage / gasoline_consumption;
    printf("每加仑汽油可以跑%.1f英里\n", mileage_per_gallon);

    float liters_per_km = (gasoline_consumption * Liters_per_Gallon) /
                          (mileage * Kilometers_per_Mile);

    printf("每跑100km消耗%.1f升汽油\n", 100 * liters_per_km);
    return 0;
}