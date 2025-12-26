#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    // 方法一，首次尝试

    /* printf("输入文本，以#结尾\n");
    int i = 0;
    int change = 0;
    char buffer[1000] = {0};

        while (1) {
            if (fgets(&buffer[i], sizeof(buffer) - i * sizeof(buffer[0]),
            stdin) ==
                NULL) {
                return -1;
            }

            for (; buffer[i] != '\0'; i++) {
                if (buffer[i] == '.') {
                    buffer[i] = '!';
                    change++;
                } else if (buffer[i] == '!') {
                    for (int j = strlen(buffer); j > i; j--) {
                        buffer[j] = buffer[j - 1];
                    }
                    i++;
                    change++;
                } else if (buffer[i] == '#') {
                    goto exit;
                }
            }
        }
    exit:
        buffer[strcspn(buffer, "\n")] = '\0';
        printf("%s\n", buffer);
        printf("共替换了%d处\n", change); */

    // 方法二，询问AI后，第二次尝试

#define BufferSize 1000
    printf("输入文本，以#结尾\n");

    int i;
    int change = 0;
    char buffer[1000] = {0};
    for (i = 0; i < BufferSize - 1; i++) {
        int c =
            getchar();  // getchar()返回-1、0~255的int,用int类型接收,-1表示错误或EOF
        if (c == -1) {
            break;
        } else if (c == '.') {
            buffer[i] = '!';
            change++;
        } else if (c == '!') {
            if (i < BufferSize - 2) {
                buffer[i] = '!';
                buffer[i + 1] = '!';
                i++;
                change++;
            }
        } else if (c == '#') {
            break;
        } else
            buffer[i] = c;
    }
    buffer[i] = '\0';

    printf("%s\n", buffer);
    printf("共替换了%d处\n", change);

    // 输入的字符替换，使用getchar逐字符处理，更为方便、清晰

    return 0;
}