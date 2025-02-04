// Calculate power of a number using recursion

#include<stdio.h>
#include<math.h>

int power(int base, int exp);

int main()
{
    int base, exp;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent number: ");
    scanf("%d", &exp);

    printf("%d^%d = %d\n", base, exp, power(base, exp));

    return 0;
}

int power(int base, int exp)
{
    if (exp != 0)
    {
        return (base * power(base, exp - 1));
    }
    else
    {
        return 1;
    }
}