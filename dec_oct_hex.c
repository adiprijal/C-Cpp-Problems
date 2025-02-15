// Print decimal, octal and hexadecimal value of a number

#include<stdio.h>
#include<conio.h>

int main()
{
	int number;
	printf("Enter any number: ");
	scanf("%d", &number);
	
	printf("\nDecimal value: %d", number);	//prints decimal value
	printf("\nOctal value: %o", number);	//prints octal value
	printf("\nHexadecimal value: %X", number); //prints hexadecimal value
	
	getch();
	return 0;
}

// Output: Enter any number: 15
// Decimal value: 15
// Octal value: 17
// Hexadecimal value: F