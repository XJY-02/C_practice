#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char buffer[257];
    fgets(buffer, sizeof(buffer), stdin);
    for (int i = strcspn(buffer, "\n") - 1; i >= 0; i--) {
        putchar(buffer[i]);
    }
    putchar('\n');
    return 0;
}