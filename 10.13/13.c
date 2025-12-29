#include <Windows.h>
#include <assert.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_input(double arr[3][5]) {
    printf("输入3组数,每组5个,\n");
    for (int i = 0; i < 3; i++) {
        printf("输入第%d组:", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%lf", &arr[i][j]);
        }
    }
}

double get_row_average(double const arr[3][5], int const row) {
    double sum = 0;
    for (int j = 0; j < 5; j++) {
        sum += arr[row][j];
    }
    return sum / 5;
}

double get_total_average(double const arr[3][5]) {
    double sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            sum += arr[i][j];
        }
    }
    return sum / (3 * 5);
}

double get_max(double const arr[3][5]) {
    double max = arr[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            max = arr[i][j] > max ? arr[i][j] : max;
        }
    }
    return max;
}

void print_all_result(double const arr[3][5]) {
    for (int i = 0; i < 3; i++) {
        printf("第%d组数据的平均值为%f\n", i + 1, get_row_average(arr, i));
    }
    printf("所有数据的平均数为%f\n", get_total_average(arr));
    printf("所有数据的最大值为%f\n", get_max(arr));
}

int main(void) {
    double arr[3][5];
    get_input(arr);
    print_all_result(arr);
    return 0;
}