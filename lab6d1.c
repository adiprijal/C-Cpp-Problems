// Find the fibonacci series up to a given number using recursion

#include <stdio.h>

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d: ", n);
    for ( i = 0; fib(i) <= n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");

    return 0;
}
