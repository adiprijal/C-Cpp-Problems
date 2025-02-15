// Sum of first 50 natural numbers using recursion

#include <stdio.h>

int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum(n - 1);
    }
}

int main() {
    printf("Sum of first 50 natural numbers: %d\n", sum(50));
    return 0;
}