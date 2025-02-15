// prompt the user to input 3 integer values and print these values in forward and reversed order.

#include<stdio.h>
#include<conio.h>
int main()
{
	int num1, num2, num3;
	printf("Enter number 1: ");
	scanf("%d", &num1);
	
	printf("\nEnter number 2: ");
	scanf("%d", &num2);
	
	printf("\nEnter number 3: ");
	scanf("%d", &num3);
	
	// printing in forward order
	printf("\n%d\t%d\t%d", num1, num2, num3);
	
	// printing in reverse order
	printf("\n%d\t%d\t%d", num3, num2, num1);
	
	getch();
	return 0;
}
