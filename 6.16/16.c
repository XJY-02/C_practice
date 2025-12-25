#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float daphne = 100, deirdre = 100;
    int year = 0;
    while (daphne >= deirdre) {
        year++;
        daphne += 10;
        deirdre *= 1.05;
    }
    printf("需要%d年超过，此时daphne=%.2f,deirdre=%.2f\n", year, daphne,
           deirdre);
    return 0;
}