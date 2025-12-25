#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("enter something: ");
    char buffer[100];
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
    printf("reverse: ");
    for (int i = strlen(buffer) - 1; i >= 0; i--) {
        putchar(buffer[i]);
    }
    putchar('\n');
    return 0;
}