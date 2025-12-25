#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const int DaysPerWeek = 7;
    while (1) {
        int input;
        printf("enter time in days: ");
        while (1) {
            int result = scanf("%d", &input);
            while ((getchar()) != '\n') {
                ;
            }
            if (result != 1) {
                printf("invalid input:\n");
                continue;
            } else {
                break;
            }
        }

        if (input > 0) {
            printf("%d days are %d weeks, %d days.\n", input,
                   input / DaysPerWeek, input % DaysPerWeek);
            continue;
        } else {
            printf("运行结束\n");
            break;
        }
    }
    return 0;
}