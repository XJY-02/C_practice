#include <Windows.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double d = 1.0 / 3.0;
    float f = 1.0 / 3.0;
    printf("d = %.6f,f = %.6f\n", d, f);
    printf("d = %.12f,f = %.12f\n", d, f);
    printf("d = %.16f,f = %.16f\n", d, f);
    printf("FLT_DIG = %d, DBL_DIG = %d\n", FLT_DIG, DBL_DIG);
    return 0;
}

// float精度6位，double精度15位