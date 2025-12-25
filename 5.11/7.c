#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

double square(double n) { return n * n; }

int main(void) {
    double num;
    printf("enter a float: ");
    while (1) {
        int result = scanf("%lf", &num);
        if (result != 1) {
            printf("invalid\n");
            while (getchar() != '\n') {
                ;
            }
            continue;
        } else
            break;
    }
    while (getchar() != '\n') {
        ;
    }

    printf("the squre is %.15f\n", square(num));

    return 0;
}