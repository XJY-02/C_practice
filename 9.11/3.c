#include <stdio.h>

void chline(char ch, int i, int j) {
    for (int m = 0; m < j; m++) {
        for (int n = 0; n < i; n++) {
            putchar(ch);
        }
        putchar('\n');
    }
}

int main(void) {
    chline('X', 3, 4);
    return 0;
}

// 这题目与上一道题有区别吗？