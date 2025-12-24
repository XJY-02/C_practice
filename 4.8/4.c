#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char name[100];
    float hight;
    printf("enter your name: ");
    while (fgets(name, sizeof(name), stdin) == NULL) {
        printf("error in input\n");
    }
    name[strcspn(name, "\n")] = '\0';
    printf("enter your hight(/cm): ");
    while (scanf("%f", &hight) != 1) {
        printf("invalid input\n");
        while (getchar() != '\n');
    }
    printf("%s, you are %.2f m tall\n", name, hight / 100);
    return 0;
}
