// Factorial of a number

#include<stdio.h>
int main()
{
	int num, factorial=1, i;
	printf("Num: ");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		factorial=factorial*i;
	}
	
	printf("Factorial of %d: %d", num, factorial);
	
	return 0;
}