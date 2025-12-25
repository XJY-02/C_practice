#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int week = 0;
    int friends = 5;
    while (friends <= 150) {
        week++;
        friends--;
        friends *= 2;
        printf("第%d周朋友数量为%d\n", week, friends);
    }
    printf("%d周后，超过邓巴数\n", week);

    return 0;
}