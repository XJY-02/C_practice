#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float input;
    while (1) {
        printf("enter a float: ");
        if (scanf("%f", &input) != 1) {
            printf("invalid input\n");
            while (getchar() != '\n');
            continue;
        }
        // int next_char = getchar();
        // if (next_char != '\n') {
        //     printf("多余输入: %c", next_char);
        //     while ((next_char = getchar()) != '\n') printf("%c", next_char);
        //     putchar('\n');
        //     continue;
        // }
        break;
    }

    printf("The input is %.3f or %.3e\n", input, input);

    return 0;
}
