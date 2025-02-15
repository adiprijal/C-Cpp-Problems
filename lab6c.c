// Write a function fact() and use it to calculate permutation and combination

#include <stdio.h>

int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    printf("Permutation: %d\n", fact(n) / fact(n - r));
    printf("Combination: %d\n", fact(n) / (fact(r) * fact(n - r)));

    return 0;
}