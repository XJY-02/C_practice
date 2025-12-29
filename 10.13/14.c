#include <Windows.h>
#include <assert.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_input(int const rows, int const cols, double arr[rows][cols]) {
    printf("输入%d组数,每组%d个,\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        printf("输入第%d组:", i + 1);
        for (int j = 0; j < cols; j++) {
            scanf("%lf", &arr[i][j]);
        }
    }
}

double get_row_average(int const rows, int const cols, double const arr[rows][cols],
                       int const row) {
    double sum = 0;
    for (int j = 0; j < cols; j++) {
        sum += arr[row][j];
    }
    return sum / cols;
}

double get_total_average(int const rows, int const cols, double const arr[rows][cols]) {
    double sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    return sum / (rows * cols);
}

double get_max(int const rows, int const cols, double const arr[rows][cols]) {
    double max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            max = arr[i][j] > max ? arr[i][j] : max;
        }
    }
    return max;
}

void print_all_result(int const rows, int const cols, double const arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        printf("第%d组数据的平均值为%f\n", i + 1, get_row_average(rows, cols, arr, i));
    }
    printf("所有数据的平均数为%f\n", get_total_average(rows, cols, arr));
    printf("所有数据的最大值为%f\n", get_max(rows, cols, arr));
}

int main(void) {
    int rows, cols;
    while (1) {
        printf("输入数组维数:");
        int result = scanf("%d%d", &rows, &cols);
        int c;
        while ((c = getchar()) != EOF && c != '\n') {
            ;
        }

        if (result == EOF) {
            printf("EOF\n");
            return -1;
        } else if (result != 2 || rows <= 0 || cols <= 0) {
            printf("输入无效，重新输入\n");
            continue;
        } else
            break;
    }
    double arr[rows][cols];
    get_input(rows, cols, arr);
    print_all_result(rows, cols, arr);
    return 0;
}