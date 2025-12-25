#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define inch 2.54
#define foot 30.48

int main(void) {
    int hight;
    while (1) {
        printf("enter a hight in centimeters: ");
        while (1) {
            int result = scanf("%d", &hight);
            if (result != 1) {
                printf("invalid input:\n");
                while ((getchar()) != '\n') {
                    ;
                }
                continue;
            } else
                break;
        }

        while ((getchar()) != '\n') {
            ;
        }

        if (hight > 0) {
            printf("%.1f cm = %.1f feet, %.1f inches\n", (double)hight,
                   hight / foot, hight / inch);
        } else {
            printf("运行结束\n");
            break;
        }
    }
    return 0;
}