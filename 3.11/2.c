#include <stdio.h>

int main(void) {
    int a;
    while (1) {
        printf("输入一个ASCII码值（如：66）：");
        int result = scanf("%d", &a);
        if (result != 1) {
            printf("无效输入\n");
            while (getchar() != '\n');  // 手动清理缓冲区
            continue;
        }
        if (a < 0 || a > 255) {
            printf("输入越界\n");
            continue;
        }
        break;
    }
    printf("其对应的字符为%c\n", a);
    return 0;
}

// 注意当输入无效时，如%d期望读取整型（ASCII数字部分和+、-部分）而输入了其他（ASCII非上述部分），那么scanf不会像getchar一样从缓冲区取走当前字符，故需要手动清理