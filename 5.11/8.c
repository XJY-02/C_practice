#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("This program computes moduli.\n");
    int FirstOperand, SecondOperand;

    // get the second operand
    printf("Enter an integer to serve as the second operand: ");
    while (1) {
        int result = scanf("%d", &SecondOperand);
        while (getchar() != '\n') {
            ;
        }
        if (result != 1) {
            printf("invalid\n");
            continue;
        }
        break;
    }

    int first_printed = 0;
    while (1) {
        if (!first_printed) {
            printf("Now enter the first operand: ");
            first_printed = 1;
        } else
            printf("Enter next number for first operand(<=0 to quit): ");

        while (1) {
            int result = scanf("%d", &FirstOperand);
            if (result != 1) {
                printf("invalid\n");
                while (getchar() != '\n') {
                    ;
                }
                continue;
            }
            break;
        }
        while (getchar() != '\n') {
            ;
        }
        if (FirstOperand <= 0) {
            printf("Done\n");
            break;
        } else {
            printf("%d %% %d is %d\n", FirstOperand, SecondOperand,
                   FirstOperand % SecondOperand);
        }
    }

    return 0;
}