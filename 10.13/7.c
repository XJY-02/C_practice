#include <stdio.h>

void copy_arr(double target[], double const source[], int const len) {
    for (int i = 0; i < len; i++) {
        target[i] = source[i];
    }
}

void print_2d_array(double arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.1f ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    double arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    double destination[2][3] = {0};

    printf("源数组:\n");
    print_2d_array(arr, 2);

    for (int i = 0; i < 2; i++) {
        copy_arr(destination[i], arr[i], 3);
    }

    printf("\n目标数组（复制后）:\n");
    print_2d_array(destination, 2);

    return 0;
}