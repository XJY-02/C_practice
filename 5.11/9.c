#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define sheshi(tem) (5.0 / 9.0 * ((tem) - 32))
#define kaishi(tem) ((tem) + 273.16)

void Temperatures(double huashitem) {
    double sheshitem = sheshi(huashitem);
    double kaishitem = kaishi(sheshitem);
    printf("华氏温度为：%.2f\n", huashitem);
    printf("摄氏温度为：%.2f\n", sheshitem);
    printf("开氏温度为：%.2f\n", kaishitem);
}

int main(void) {
    while (1) {
        double huashitem;
        printf("enter a temperature(not a num to quit): ");
        int result = scanf("%lf", &huashitem);
        if (result != 1) {
            printf("Done\n");
            while (getchar() != '\n') {
                ;
            }
            break;
        }
        while (getchar() != '\n') {
            ;
        }
        Temperatures(huashitem);
    }

    return 0;
}