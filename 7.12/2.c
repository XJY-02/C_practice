#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    printf("输入文本，以#结尾\n");
    char buffer[1000];
    int i = 0;
    while (1) {
        if (fgets(&buffer[i], sizeof(buffer) - i * sizeof(buffer[0]), stdin) ==
            NULL)
            break;
        for (; buffer[i] != '\n'; i++) {
            if (buffer[i] == '#') {
                goto exit;
            }
        }
    }

exit:
    for (int j = 0; j < i; j++) {
        printf("%s'%c'-%d", ((j % 8 == 0) ? "" : " "), buffer[j], buffer[j]);
        if (j % 8 == 7) {
            putchar('\n');
        }
    }
    putchar('\n');

    return 0;
}
