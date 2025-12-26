#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BufferSize 1000

int main(void) {
    printf("输入文本，以#结尾:\n");
    int i;
    int change = 0;
    char buffer[1000] = {0};
    for (i = 0; i < BufferSize - 1; i++) {
        int c = getchar();

        switch (c) {
            case EOF:
                goto exit;
            case '.':
                buffer[i] = '!';
                change++;
                break;
            case '!':
                if (i < BufferSize - 2) {
                    buffer[i] = '!';
                    buffer[i + 1] = '!';
                    i++;
                    change++;
                }
                break;
            case '#':
                goto exit;
            default:
                buffer[i] = c;
                break;
        }
    }

exit:
    buffer[i] = '\0';
    printf("替换后:%s\n", buffer);
    printf("共替换了%d处\n", change);
    return 0;
}