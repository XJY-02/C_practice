#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int low, high;
    while (1) {
        printf("enter the low bound: ");
        int result = scanf("%d", &low);
        while (getchar() != '\n') {
            ;
        }
        if (result != 1) {
            printf("invalid\n");
            continue;
        } else
            break;
    }
    while (1) {
        printf("enter the high bound: ");
        int result = scanf("%d", &high);
        while (getchar() != '\n') {
            ;
        }
        if (result != 1 || high < low) {
            printf("invalid\n");
            continue;
        }
        break;
    }
    printf("%10s | %10s | %10s\n", "num", "squre", "triple");
    for (int i = low; i <= high; i++) {
        printf("%10d | %10d | %10d\n", i, (int)pow(i, 2), (int)pow(i, 3));
    }

    return 0;
}