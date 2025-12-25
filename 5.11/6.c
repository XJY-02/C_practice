#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int days;
    while (1) {
        while (1) {
            printf("enter days: ");
            int result = scanf("%d", &days);
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

        if (days < 0) {
            printf("运行结束\n");
            break;
        }

        int sum = 0;
        for (int i = 1; i <= days; i++) {
            sum += pow(i, 2);
        }
        printf("makes %d money\n", sum);
    }

    return 0;
}