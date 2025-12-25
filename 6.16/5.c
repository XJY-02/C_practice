#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void ABA(char c, int block) {
    if (c < 'A') {
        return;
    }
    ABA(c - 1, block + 1);
    for (int i = 0; i < block; i++) {
        putchar(' ');
    }
    for (int i = 'A'; i < c; i++) {
        putchar(i);
    }
    putchar(c);
    for (int i = c - 1; i >= 'A'; i--) {
        putchar(i);
    }
    for (int i = 0; i < block; i++) {
        putchar(' ');
    }
    putchar('\n');
}

int main(void) {
    char input;
    while (1) {
        printf("enter a capital letter(A~Z): ");
        int result = scanf(" %c", &input);
        if (result != 1 || (input < 'A' || input > 'Z')) {
            printf("invalid\n");
            while (getchar() != '\n') {
                ;
            }
            continue;
        }
        while (getchar() != '\n') {
            ;
        }
        break;
    }
    ABA(input, 0);
    return 0;
}