#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int input;
    printf("enter a int: ");
    while (1) {
        int result = scanf("%d", &input);
        if (result != 1) {
            printf("invalid\n");
            while (getchar() != '\n') {
                ;
            }
            continue;
        } else {
            while (getchar() != '\n') {
                ;
            }
            break;
        }
        }

    for (int i = input, firstprinted = 0; i <= input + 10; i++) {
        if (firstprinted) {
            putchar(',');
        }
        printf("%d", i);
        if (i == input) {
            firstprinted = 1;
        }
        if (i == input + 10) {
            putchar('\n');
        }
    }

    return 0;
}