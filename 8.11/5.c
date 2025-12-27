#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    printf("请你选一个0~100的整数数以供我猜测\n");
    int n = 50;
    int count = 0;
    int low = 0, high = 100;
    while (1) {
        count++;
        printf("第%d次猜测：我猜是 %d ,我猜对了吗\n", count, n);
        printf("1)猜小了 2)猜大了 3)猜对了\n");
        int select;
        while (1) {
            printf("请选择： ");
            int result = scanf("%d", &select);
            while (getchar() != '\n') {
                ;
            }
            if (result == EOF) {
                printf("输入终止，进程结束\n");
                return 0;
            } else if (result != 1) {
                printf("无效输入，重新选择\n");
                continue;
            } else if (select < 1 || select > 3) {
                printf("输入1,2,3之一\n");
                continue;
            } else
                break;
        }
        switch (select) {
            case 1:
                low = n + 1;
                n = (low + high) / 2;
                break;
            case 2:
                high = n - 1;
                n = (low + high) / 2;
                break;
            case 3:
                printf("我猜中了！总共猜了%d次\n", count);
                return 0;
            default:
                break;
        }
    }

    return 0;
}