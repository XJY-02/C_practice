#include <Windows.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    printf("请你选一个0~100的整数数以供我猜测\n");
    int low = 0, high = 100, n;
    int count = 0;
    while (1) {
        system("cls");
        n = (low + high) / 2;
        count++;
        printf("第%d次猜测：我猜是 %d ,我猜对了吗\n", count, n);
        if (low == high) {
            printf("                    ————这次我有100%%的把握\n");
        } else
            printf("现在low = %d, high = %d\n", low, high);

        printf("1)猜小了 2)猜大了 3)猜对了\n");
        int select;
        while (1) {
            printf("> ");
            select = getche();
            if (select == '1' || select == '2' || select == '3') {
                putchar('\n');
                break;
            } else {
                printf("   请输入正确选项!");
                Sleep(1000);
                printf("\r                              \r");
            }
        }
        switch (select) {
            case '1':
                low = n + 1;
                if (low > high) {
                    printf("你肯定在撒谎\n");
                    return -1;
                }
                break;
            case '2':
                high = n - 1;
                if (low > high) {
                    printf("你肯定在撒谎\n");
                    return -1;
                }
                break;
            case '3':
                printf("我猜中了！总共猜了%d次\n", count);
                return 0;
            default:
                break;
        }
    }

    return 0;
}