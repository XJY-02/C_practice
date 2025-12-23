#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float input;
    while (1) {
        printf("Enter a floating-point value: ");
        int result = scanf("%f", &input);
        if (result != 1) {
            printf("无效输入");
            while (getchar() != '\n');
            continue;
        }
        break;
    }
    printf("fixed-point notation: %f\n", input);
    printf("exponential notation: %e\n", input);
    return 0;
}