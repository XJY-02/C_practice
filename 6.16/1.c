#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char arr[26];
    for (int i = 0; i < 26; i++) {
        arr[i] = i + 97;
    }
    for (int i = 0; i < 26; i++) {
        if (i != 0) {
            putchar(' ');
        }
        printf("%c", arr[i]);
    }
    putchar('\n');

    return 0;
}