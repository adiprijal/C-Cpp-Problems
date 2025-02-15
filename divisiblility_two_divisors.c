// Check whether a given number is divisible by given divisors or not

#include<stdio.h>
#include<conio.h>
int main()
{
	int num, A, B;
	printf("Enter an integer value: ");
	scanf("%d", &num);
	
	printf("\nEnter divisor A: ");
	scanf("%d", &A);
	
	printf("\nEnter divisor B: ");
	scanf("%d", &B);
	
	if(num%A==0)
	{
		if(num%B==0)
		{
			printf("\n%d is divisible by %d and %d", num, A, B);
		}
		else
		{
			printf("\n%d is divisible by %d but not by %d", num, A, B);
		}
	}
	else
	{
		if(num%B==0)
		{
			printf("\n%d is divisible by %d but not by %d", num, B, A);
		}
		else
		{
			printf("\n%d is not divisible by %d and %d", num, A, B);
		}
	}
	
	getch();
	return 0;
}
