// Input n numbers and calculate sum of even and odd numbers

#include<stdio.h>
int main()
{
	int n, i, sum_even=0, sum_odd=0;
	printf("How many numbers you want to input?\n");
	scanf("%d", &n);
	
	int num[n];
	for(i=0; i<n; i++)
	{
		printf("\nEnter %d number: ", i+1);
		scanf("%d", &num[i]);
	}
	
	for(i=0; i<n; i++)
	{
		if(num[i]%2==0)
		{
			sum_even+=num[i];
		}
		
		else
		{
			sum_odd+=num[i];
		}
	}
	
	printf("\nsum of even number: %d", sum_even);
	printf("\nsum of odd number: %d", sum_odd);
	
	return 0;
}
