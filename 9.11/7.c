#include <Windows.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int letter_index(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 1;
    } else if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 1;
    } else
        return -1;
}

void identify_letter() {
    while (1) {
        int ch = getchar();
        if (ch == EOF) {
            printf("EOF:文件末尾\n");
            return;
        } else {
            int index = letter_index(ch);
            if (index > 0) {
                printf("%c是字母,在字母表位置是%d\n", ch, index);
            } else
                printf("%c不是字母\n", ch);
        }
    }
}

int main(void) {
    identify_letter();
    return 0;
}