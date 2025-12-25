#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr[8];
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        arr[i] = pow(2, i);
    }
    int i = 0;
    do {
        printf("%d ", arr[i++]);
    } while (i < sizeof(arr) / sizeof(int));
    putchar('\n');

    return 0;
}