#include <Windows.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MONTHS 12
#define YEARS 5

int main(void) {
    const float rain[YEARS][MONTHS];
    // rain类型是float [YEARS][MONTHS],
    // 在表达式中退化为float(*)[MONTHS],
    // 于是rain[year]展开为*(rain + year),
    //  类型为float [MONTHS],
    // 在表达式中退化为float*,
    // 于是rain[year][month]展开为*(*(rain +year)+month),类型为float
    // 本质上,arr[i]即数组下标访问只是 *(arr+i)的另一种写法,
    // 是利用指针操作数组内存的语法糖
    return 0;
}