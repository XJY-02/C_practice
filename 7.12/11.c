#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define YANGJI 2.05
#define TIANCAI 1.15
#define CARROT 1.09
#define WLESS5 6.5
#define W5TO20 14
#define WUP20EXTRA 0.5
#define ZHEKOU 0.05

void show_menu() {
    printf(
        "*************************************\n"
        "输入类别:\n"
        "a)洋蓟  b)甜菜 c)胡萝卜 q)确认 z)取消\n"
        "*************************************\n");
}

void showgouwuche(float yangji, float tiancai, float carrot) {
    printf(
        "*********************\n"
        "        购物车\n"
        "洋蓟:   %10.2f 磅\n"
        "甜菜:   %10.2f 磅\n"
        "胡萝卜: %10.2f 磅\n"
        "*********************\n",
        yangji, tiancai, carrot);
}

char getchoice() {
    char choice;
    while (1) {
        printf("> ");
        int result = scanf(" %c", &choice);
        while (getchar() != '\n') {
            ;
        }
        if (result != 1) {
            printf("无效输入，重新输入\n");
            continue;
        } else
            switch (choice) {
                case 'a':
                case 'b':
                case 'c':
                case 'q':
                case 'z':
                    return choice;
                default:
                    printf("请输入正确选项\n");
                    break;
            }
    }
}

float getwight() {
    float wight;
    while (1) {
        printf("> ");
        int result = scanf("%f", &wight);
        while (getchar() != '\n') {
            ;
        }
        if (result != 1) {
            printf("无效输入，重新输入\n");
            continue;
        } else if (wight < 0) {
            printf("重量需大于等于0\n");
            continue;
        } else
            break;
    }
    return wight;
}

void printbill(float yangji, float tiancai, float carrot) {
    float yangji_fee = yangji * YANGJI;
    float tiancai_fee = tiancai * tiancai;
    float carrot_fee = carrot * CARROT;
    float total_fee = yangji_fee + tiancai_fee + carrot_fee;
    float zhekou = 0;
    if (total_fee >= 100) {
        zhekou = total_fee * ZHEKOU;
    }
    float yunfei;
    float total_wight = yangji + tiancai + carrot;
    if (total_wight <= 5) {
        yunfei = WLESS5;
    } else if (total_wight <= 20) {
        yunfei = W5TO20;
    } else
        yunfei = W5TO20 + (total_wight - 20) * WUP20EXTRA;
    float total = total_fee + yunfei - zhekou;
    printf(
        "********************************************************\n"
        "                        账单\n"
        "类别           单价               数量             总价\n"
        "洋蓟     %10.2f$/磅     %10.2f磅     %10.2f$\n"
        "甜菜     %10.2f$/磅     %10.2f磅     %10.2f$\n"
        "胡萝卜   %10.2f$/磅     %10.2f磅     %10.2f$\n"
        "--------------------------------------------------------\n"
        "蔬菜总费用                                   %10.2f$\n"
        "运费和包装费                                 %10.2f$\n"
        "折扣                                         %10.2f$\n"
        "--------------------------------------------------------\n"
        "总费用                                       %10.2f$\n",
        YANGJI, yangji, yangji_fee, TIANCAI, tiancai, tiancai_fee, CARROT,
        carrot, carrot_fee, total_fee, yunfei, zhekou, total);
}

int main(void) {
    float yangji = 0;
    float tiancai = 0;
    float carrot = 0;
    while (1) {
        system("cls");
        showgouwuche(yangji, tiancai, carrot);
        show_menu();
        int choice = getchoice();
        if (choice == 'z') {
            printf("退出成功\n");
            break;
        }
        system("cls");
        switch (choice) {
            case 'a':
                showgouwuche(yangji, tiancai, carrot);
                printf("订购洋蓟磅数：");
                yangji += getwight();
                break;
            case 'b':
                showgouwuche(yangji, tiancai, carrot);
                printf("订购甜菜磅数：");
                tiancai += getwight();
                break;
            case 'c':
                showgouwuche(yangji, tiancai, carrot);
                printf("订购胡萝卜磅数：");
                carrot += getwight();
                break;
            case 'q':
                if (!(yangji || tiancai || carrot)) {
                    printf("当前购物车为空\n");
                    for (int i = 3; i > 0; i--) {
                        printf("等待 %d 秒后刷新...", i);
                        Sleep(1000);
                        printf("\r");
                    }
                } else {
                    printbill(yangji, tiancai, carrot);
                    for (int i = 15; i > 0; i--) {
                        printf("等待 %d 秒后刷新...", i);
                        Sleep(1000);
                        printf("\r");
                    }
                    yangji = tiancai = carrot = 0;
                }
                break;
            default:
                break;
        }
    }
    return 0;
}