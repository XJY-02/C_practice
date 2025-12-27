#include <Windows.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BASIC_WAGE 10.00
#define OVERTIME_WAGE 15.00
#define TAX_RATE_0_300 0.15
#define TAX_RATE_300_450 0.20
#define TAX_RATE_ABOVE_450 0.25

#define Rank1 8.75
#define Rank2 9.33
#define Rank3 10.00
#define Rank4 11.20

void printwagepaper(float basic_wage, float hour) {
    float total_wage = 0, tax = 0, revenue = 0;
    if (hour <= 40) {
        total_wage = hour * basic_wage;
    } else
        total_wage = 40 * basic_wage + (hour - 40) * OVERTIME_WAGE;

    if (total_wage <= 300) {
        tax = total_wage * TAX_RATE_0_300;
    } else if (total_wage <= 450) {
        tax = 300 * TAX_RATE_0_300 + (total_wage - 300) * TAX_RATE_300_450;
    } else
        tax = 300 * TAX_RATE_0_300 + 150 * TAX_RATE_300_450 +
              (total_wage - 450) * TAX_RATE_ABOVE_450;

    revenue = total_wage - tax;
    printf("========== 工资单 ==========\n");
    printf("工作时数: %.1f 小时\n", hour);
    printf("工资总额: $%.2f\n", total_wage);
    printf("应缴税金: $%.2f\n", tax);
    printf("净收入: $%.2f\n", revenue);
    printf("===========================\n");
}

float gethour() {
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
    return hour;
}

void show_menu() {
    printf(
        "*****************************************************************\n"
        "Enter the number corresponding to the desired pay rate or action:\n"
        "a)$8.75/hr                       b)$9.33/hr\n"
        "c)$10.00/hr                      d)$11.20/hr\n"
        "q)quit\n"
        "*****************************************************************\n");
}

int getchoice() {
    int choice;
    while (1) {
        printf("> ");
        choice = getche();
        if (choice >= 'a' && choice <= 'd') {
            return choice;
        } else if (choice == 'q') {
            return choice;
        } else {
            printf("  无效输入，请输入正确选项!");
            Sleep(1000);
            printf("\r                                               \r");
            continue;
        }
    }
}

int main(void) {
    while (1) {
        show_menu();
        int choice = getchoice();
        system("cls");
        if (choice == 'q' || choice == 0) {
            printf("退出成功\n");
            break;
        }
        float hour = gethour();
        system("cls");
        switch (choice) {
            case 'a':
                printwagepaper(Rank1, hour);
                break;
            case 'b':
                printwagepaper(Rank2, hour);
                break;
            case 'c':
                printwagepaper(Rank3, hour);
                break;
            case 'd':
                printwagepaper(Rank4, hour);
                break;
            default:
                break;
        }
        printf("按下Enter键继续...");
        while (getch() != '\r') {
            ;
        }
        system("cls");
    }

    return 0;
}