#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    while (1) {
        float first, second;
        printf("enter the first float: ");
        int result1 = scanf("%f", &first);
        while (getchar() != '\n') {
            ;
        }
        if (result1 != 1 || first == 0) {
            printf("Exit\n");
            break;
        }
        printf("enter the second float: ");
        int result2 = scanf("%f", &second);
        while (getchar() != '\n') {
            ;
        }
        if (result2 != 1 || second == 0) {
            printf("Exit\n");
            break;
        }
        double res = (first - second) / (first * second);
        printf("(%10f - %10f) / (%10f * %10f) = %10f\n", first, second, first,
               second, res);
    }
    return 0;
}