//Program to take n numbers from the user and to print the average of the numbers

#include<stdio.h>
int main()
{
	int num[50],i,n,sum=0;
	float avg;
	printf("Enter number of numbers: ");
	scanf("%d",&n);
	
	printf("Enter %d numbers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	avg=(float)sum/n;
	
	printf("The average is %.2f",avg);
	return 0;
}
