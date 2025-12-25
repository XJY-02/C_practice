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
        while (getchar() != '\n') {
            ;
        }
        if (result != 1) {
            printf("invalid\n");
            continue;
        } else {
            break;
        }
    }

    printf("the squre is %.15f\n", square(num));

    return 0;
}