#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char c = 'A';
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < i + 1; j++) {
            putchar(c++);
        }
        putchar('\n');
    }
    return 0;
}