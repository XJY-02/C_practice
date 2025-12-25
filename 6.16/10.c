#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int first_time = 1;
    while (1) {
        int low, high;

        printf("%s", first_time ? "Enter lower and upper integer limits: "
                                : "Enter next set of limits: ");
                                
        int result = scanf("%d%d", &low, &high);
        while (getchar() != '\n') {
            ;
        }
        if (result != 2) {
            printf("invalid input\n");
            continue;
        }
        if (high <= low) {
            printf("Done\n");
            break;
        }

        int sum = 0;
        for (int i = low; i <= high; i++) {
            sum += pow(i, 2);
        }
        printf("The sums of the squares from %d to %d is %d\n", low, high, sum);
        first_time = 0;
    }
    return 0;
}