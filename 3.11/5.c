#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float seconds_per_year = 3.156e7;
    int age;
    while (1) {
        printf("please enter your age: ");
        int result = scanf("%d", &age);
        if (result != 1 || age < 0) {
            printf("invalid input\n");
            while (getchar() != '\n');
            continue;
        }
        break;
    }
    printf("you have lived for %e seconds\n", age * seconds_per_year);
    return 0;
}