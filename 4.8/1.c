#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char firstname[10];
    char lastname[10];
    printf("please enter your last name: ");
    scanf("%s", lastname);
    printf("please enter your first name: ");
    scanf("%s", firstname);
    printf("Hello, %s %s\n", firstname, lastname);
    
    return 0;
}