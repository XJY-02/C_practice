#include <Windows.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void show_menu() {
    printf(
        "Enter the operation of your choice:\n"
        "a. add           s. subsract\n"
        "m. multiply      d. divide\n"
        "q. quit\n");
}

int select_option() {
    int choice;
    while (1) {
        printf("> ");
        choice = getche();
        switch (choice) {
            case 'a':
            case 's':
            case 'm':
            case 'd':
            case 'q':
            case EOF:
                putchar('\n');
                return choice;
            default:
                printf("  输入无效,重新输入");
                Sleep(500);
                printf("\r                                \r");
                break;
        }
    }
}

float calculate_result(char operator, float operand1, float operand2) {
    switch (operator) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 == 0) {
                printf("错误: 除数为0\n");
                return 0;
            }
            return operand1 / operand2;
        default:
            printf("错误: 未知运算符\n");
            return 0;
    }
}

int main(void) {
    while (1) {
        // 显示菜单
        system("cls");
        show_menu();

        // 选择运算符
        int choice = select_option();
        char operator;
        switch (choice) {
            case 'q':
                printf("用户选择退出程序\n");
                return 0;
            case EOF:
                printf("错误: EOF\n");
                return -1;
            case 'a':
                operator = '+';
                break;
            case 's':
                operator = '-';
                break;
            case 'm':
                operator = '*';
                break;
            case 'd':
                operator = '/';
                break;
            default:
                printf("错误: 未知运算符\n");
                return -1;
        }

        // 输入操作数
        system("cls");
        printf("执行%c法操作\n", operator);
        float operand1, operand2;
        printf("请输入操作数1: ");
        while (1) {
            int result = scanf("%f", &operand1);
            while (getchar() != '\n') {
                ;
            }
            if (result == EOF) {
                printf("EOF\n");
                return -1;
            } else if (result != 1) {
                printf("无效输入,请输入一个数,比如2.5,-1.78E8,或3: ");
            } else
                break;
        }
        printf("请输入操作数2: ");
        while (1) {
            int result = scanf("%f", &operand2);
            while (getchar() != '\n') {
                ;
            }
            if (result == EOF) {
                printf("EOF\n");
                return -1;
            } else if (result != 1) {
                printf("无效输入,请输入一个数,比如2.5,-1.78E8,或3: ");
            } else if (choice == 'd' && operand2 == 0) {
                printf("除数不能为0,请输入非零数: ");
            } else
                break;
        }

        // 计算
        float result = calculate_result(operator, operand1, operand2);
        printf("%g %c %g = %g\n", operand1, operator, operand2, result);

        // 按回车继续,按esc退出
        printf("按回车以继续...     按ESC以退出\n");
        while (1) {
            int ch = getch();
            if (ch == EOF) {
                printf("错误: EOF\n");
                return -1;
            } else if (ch == 27) {
                printf("用户选择退出程序\n");
                return 0;
            } else if (ch == '\r') {
                break;
            } else
                continue;
        }
    }
    return 0;
}
