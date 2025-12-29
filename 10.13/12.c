#include <Windows.h>
#include <assert.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MONTHS 12
#define YEARS 5

void print_total_year_rainfall(float const rain[YEARS][MONTHS]) {
    printf("YEAR        RAINFALLL(inches)\n");
    for (int i = 0; i < YEARS; i++) {
        float sum = 0;
        for (int j = 0; j < MONTHS; j++) {
            sum += rain[i][j];
        }
        printf("%d          %.1f\n", 2010 + i, sum);
    }
}

void print_average_year_rainfall(float const rain[YEARS][MONTHS]) {
    float sum = 0;
    for (int i = 0; i < YEARS; i++) {
        for (int j = 0; j < MONTHS; j++) {
            sum += rain[i][j];
        }
    }
    printf("The yearly average is %.1f inches\n", sum / YEARS);
}

void print_average_month_rainfall(float const rain[YEARS][MONTHS]) {
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
    bool first = true;
    for (int j = 0; j < MONTHS; j++) {
        float sum = 0;
        for (int i = 0; i < YEARS; i++) {
            sum += rain[i][j];
        }
        printf("%s%.1f", first ? "" : " ", sum / YEARS);
        first = false;
    }
}

int main(void) {
    // 测试数据：5年，每月降雨量（英寸）
    float rainfall[YEARS][MONTHS] = {
        // 2010年
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        // 2011年
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        // 2012年
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        // 2013年
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        // 2014年
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};

    printf("=== 5年降雨量分析 ===\n\n");

    // 测试1：每年总降雨量
    print_total_year_rainfall(rainfall);
    putchar('\n');

    // 测试2：年平均降雨量
    print_average_year_rainfall(rainfall);
    putchar('\n');

    // 测试3：月平均降雨量
    print_average_month_rainfall(rainfall);
    putchar('\n');

    return 0;
}