#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BufferSize 1000

int main(void) {
    // Receive your eieio award
    int p = 0, q = 0;
    int count = 0;
    printf("输入文本，统计ei出现次数：");
    while (1) {
        int c = getchar();
        switch (c) {
            case EOF:
            case '#':
                goto exit;
                break;
            default:
                p = q;
                q = c;
                break;
        }
        if (p == 'e' && q == 'i') {
            count++;
        }
    }

exit:
    printf("ei出现了%d次\n", count);
    return 0;
}