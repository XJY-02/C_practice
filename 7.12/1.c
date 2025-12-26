#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char buffer[1000];
    int space = 0, huanhang = 0, other = 0;
    while (1) {
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) break;
        for (int i = 0; buffer[i] != '\0'; i++) {
            if (buffer[i] == '#') {
                goto exit;
            } else if (buffer[i] == ' ') {
                space++;
            } else if (buffer[i] == '\n') {
                huanhang++;
            } else {
                other++;
            }
        }
    }
exit:
    printf("空格有%d个，换行有%d个，其他字符有%d个\n", space, huanhang, other);
    return 0;
}