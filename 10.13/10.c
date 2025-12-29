#include <Windows.h>
#include <assert.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void plus(int const len, int const arr1[], int const arr2[], int arr3[]) {
    for (int i = 0; i < len; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }
}

int main(void) {
    int arr1[5] = {5, 9, 21, 4, 3};
    int arr2[5] = {14, 5, 3, 1, 5};
    int arr3[5] = {0};
    plus(5, arr1, arr2, arr3);
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr3[i]);
    }
    putchar('\n');
    return 0;
}