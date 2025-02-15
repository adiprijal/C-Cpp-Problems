// Returns 1 if argument passed is a prime number, 0 otherwise

#include <stdio.h>

int is_prime(int n) {
	int i;
    if (n <= 1) {
        return 0;
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_prime(n)) {
        printf("%d is a prime number.\n", n);
        return 1;
    } else {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

}
