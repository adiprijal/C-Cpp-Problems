// find quotient and remainder

#include<stdio.h>
#include<conio.h>

int main()
{
	int dividend, divisor, quotient, remainder;
	printf("Enter dividend: ");
	scanf("%d", &dividend);
	printf("\nEnter divisor: ");
	scanf("%d", &divisor);
	
	quotient=dividend/divisor;
	remainder=dividend%divisor;
	
	printf("\nQuotient: %d", quotient);
	printf("\nRemainder: %d", remainder);
	
	getch();
	return 0;
}
