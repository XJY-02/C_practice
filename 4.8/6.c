#include <Windows.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char firstname[100];
    char lastname[100];
    int len1, len2;

    printf("enter your firstname: ");
    fgets(firstname, sizeof(firstname), stdin);
    firstname[strcspn(firstname, "\n")] = '\0';
    len1 = strlen(firstname);

    printf("enter your lastname: ");
    fgets(lastname, sizeof(lastname), stdin);
    lastname[strcspn(lastname, "\n")] = '\0';
    len2 = strlen(lastname);

    printf("%s %s\n", firstname, lastname);
    printf("%*d %*d\n", len1, len1, len2, len2);

    printf("%s %s\n", firstname, lastname);
    printf("%-*d %-*d\n", len1, len1, len2, len2);
    return 0;
}