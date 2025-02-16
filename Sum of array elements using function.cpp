//C program to find sum of the array elements (pass an integer array to a
//function and return the sum)

#include<stdio.h>
int findsum(int num[])
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
	sum+=num[i];	
	}
	return sum;
}

int main()
{
	int i,a[5],sum;
	printf("Enter five numbers: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	sum=findsum(a);
	printf("The sum is %d",sum);
}
