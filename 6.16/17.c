#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int year = 0;
    int money = 1000000;
    while (money > 0) {
        year++;
        money *= 1.08;
        money -= 100000;
    }
    printf("%d年后取完\n", year);
    return 0;
}