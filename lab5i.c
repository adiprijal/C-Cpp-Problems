// Sum of the series excluding prime-indexed terms
// y = 1 + 1^2/2! + 2^2/2! + 3^2/3! + ... + 10^2/10!

#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
	int i;
	
    if (num <= 1) return 0;
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to calculate factorial of a number
long long factorial(int num) {
    long long fact = 1;
    int i;
    
    for (i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    double Y = 0.0;
    int i;

    // Calculate the sum of the series excluding prime numbers
    for (i = 1; i <= 10; i++) {
        if (!isPrime(i)) {
            Y += pow(i, 2) / factorial(i);
        }
    }

    printf("The sum Y of the series excluding prime-indexed terms is: %.10f\n", Y);

    return 0;
}

