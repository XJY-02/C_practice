#include <Windows.h>
#include <conio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Fibonacci(int n) {
    // 递归思想
    // if (n <= 2) {
    //     return 1;
    // }
    // return Fibonacci(n - 1) + Fibonacci(n - 2);

    // 迭代思想
    if (n <= 2) return 1;
    int fib_i_minus_2 = 1;  // F(i-2)
    int fib_i_minus_1 = 1;  // F(i-1)
    int fib_i = 0;
    for (int i = 3; i <= n; i++) {
        fib_i = fib_i_minus_2 + fib_i_minus_1;  // F(i)
        fib_i_minus_2 = fib_i_minus_1;          // 向前推进
        fib_i_minus_1 = fib_i;
    }
    return fib_i;
}

int main(void) {
    int n = 7;
    printf("第%d个斐波那契数为%d\n", n, Fibonacci(n));
    return 0;
}