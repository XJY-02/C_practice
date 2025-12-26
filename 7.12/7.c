#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BASIC_WAG 10.00
#define OVERTIME_WAGE 15.00
#define TAX_RATE_0_300 0.15
#define TAX_RATE_300_450 0.20
#define TAX_RATE_ABOVE_450 0.25

int main(void) {
    float hour;
    while (1) {
        printf("输入一周工作小时数：");
        int result = scanf("%f", &hour);
        while (getchar() != '\n') {
            ;
        }
        if (result != 1) {
            printf("无效输入，重新输入\n");
            continue;
        } else if (hour < 0) {
            printf("工作时长不能为负数，重新输入");
            continue;
        } else
            break;
    }
    float total_wage = 0, tax = 0, revenue = 0;
    if (hour <= 40) {
        total_wage = hour * BASIC_WAG;
    } else
        total_wage = 40 * BASIC_WAG + (hour - 40) * OVERTIME_WAGE;

    if (total_wage <= 300) {
        tax = total_wage * TAX_RATE_0_300;
    } else if (total_wage <= 450) {
        tax = 300 * TAX_RATE_0_300 + (total_wage - 300) * TAX_RATE_300_450;
    } else
        tax = 300 * TAX_RATE_0_300 + 150 * TAX_RATE_300_450 +
              (total_wage - 450) * TAX_RATE_ABOVE_450;

    revenue = total_wage - tax;
    printf("工资总额为%.2f,税为%.2f,净收入为%.2f\n", total_wage, tax, revenue);
    return 0;
}