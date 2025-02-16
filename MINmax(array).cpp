//Program to read n numbers from users and print maximum and minimum numbers among them

#include<stdio.h>
int main()
{
	int num[50],i,max,min,n;
	
	printf("Enter number of numbers: ");
	scanf("%d",&n);
	
	printf("Enter %d numbers:\n",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&num[i]);	
	}
	
	max=num[0];
	min=num[0];
	
	for(i=0;i<n;i++)
	{
		if(max<num[i])
		{
			max=num[i];
		}
		
		if(min>num[i])
		{
			min=num[i];
		}
	}
	
	printf("Minimum number=%d\nMaximum number=%d",min, max);
	return 0;
}
