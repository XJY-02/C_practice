#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i + 1; j++) {
            putchar('$');
        }
        putchar('\n');
    }

    return 0;
}