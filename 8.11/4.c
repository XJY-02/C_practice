#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    printf("输入英文文本以统计每个单词的平均字母数（EOF以结束）： ");
    bool in_word = false;  // 记录当前是否在单词内
    int words_num = 0;
    int letters_num = 0;
    while (1) {
        int ch = getchar();
        if (ch == EOF) {
            break;
        } else if (isalpha(ch)) {
            if (in_word == false) {  // 进入新单词
                words_num++;
                in_word = true;
            }
            letters_num++;
        } else
            in_word = false;  // 退出旧单词
    }
    if (words_num == 0) {
        printf("未输入文本\n");
    } else
        printf("平均每个单词有%.2f个字母\n", (float)letters_num / words_num);
    return 0;
}