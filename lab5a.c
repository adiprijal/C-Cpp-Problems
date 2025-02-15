// sum of even numbers between two input numbers

#include<stdio.h>
int main()
{
	int n1, n2, sum=0, i;
	printf("Enter first interval: ");
	scanf("%d", &n1);
	
	printf("\nEnter second interval: ");
	scanf("%d", &n2);
	
	/*
	for(i=n1; i<=n2; i++)
	{
		if(i%2==0)
		{
			sum+=i;
		}
	}
	*/

	i = n1%2==0 ? n1 : n1+1;  						// if n1 is even then i=n1 else i=n1+1

	for(i; i<=n2; i+=2)
	{
		sum+=i;
	}
	
	printf("\nSum of even numbers between interval %d and %d: %d", n1, n2, sum);
	
	return 0;
	
}
