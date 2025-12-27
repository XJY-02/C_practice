#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RANK1LIMIT 17850.00
#define RANK2LIMIT 23900.00
#define RANK3LIMIT 29750.00
#define RANK4LIMIT 14875.00
#define UNDERTAX 0.15
#define UPPERTAX 0.28

void printtax(float limit, float wage) {
    if (wage <= limit) {
        printf("税金为%.2f\n", wage * UNDERTAX);
    } else
        printf("税金为%.2f\n", limit * UNDERTAX + (wage - limit) * UPPERTAX);
}

float getwage() {
    float wage;
    while (1) {
        printf("输入工资：");
        int result = scanf("%f", &wage);
        while (getchar() != '\n') {
            ;
        }
        if (result != 1) {
            printf("无效输入，重新输入\n");
            continue;
        } else if (wage < 0) {
            printf("工资不能为负数，重新输入");
            continue;
        } else
            break;
    }
    return wage;
}

void show_menu() {
    printf(
        "*****************************************************************\n"
        "输入类别:\n"
        "1)单身                       2)户主\n"
        "3)已婚，共有                  4)已婚，离异\n"
        "5)退出\n"
        "*****************************************************************\n");
}

int getchoice() {
    int choice;
    while (1) {
        printf("> ");
        int result = scanf("%d", &choice);
        while (getchar() != '\n') {
            ;
        }
        if (result != 1) {
            printf("无效输入，重新输入\n");
            continue;
        } else if (choice < 1 || choice > 5) {
            printf("输入1~5之一\n");
            continue;
        } else
            break;
    }
    return choice;
}

int main(void) {
    while (1) {
        show_menu();
        int choice = getchoice();
        system("cls");
        if (choice == 5) {
            printf("退出成功\n");
            break;
        }
        float wage = getwage();
        system("cls");
        switch (choice) {
            case 1:
                printtax(RANK1LIMIT, wage);
                break;
            case 2:
                printtax(RANK2LIMIT, wage);
                break;
            case 3:
                printtax(RANK3LIMIT, wage);
                break;
            case 4:
                printtax(RANK4LIMIT, wage);
                break;
            default:
                break;
        }
        for (int i = 5; i > 0; i--) {
            printf("等待 %d 秒后刷新...", i);
            Sleep(1000);
            printf("\r");
        }
        system("cls");
    }

    return 0;
}