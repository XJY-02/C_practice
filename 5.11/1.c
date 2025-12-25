#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const int MinPerHour = 60;
    while (1) {
        int input;
        printf("enter time in minutes: ");
        while (1) {
            int result = scanf("%d", &input);
            if (result != 1) {
                printf("invalid input:\n");
                while ((getchar()) != '\n') {
                    ;
                }
                continue;
            } else {
                while ((getchar()) != '\n') {
                    ;
                }
                break;
            }
        }

        if (input > 0) {
            printf("相当于%d小时%d分钟\n", input / MinPerHour,
                   input % MinPerHour);
            continue;
        } else {
            printf("运行结束\n");
            break;
        }
    }
    return 0;
}