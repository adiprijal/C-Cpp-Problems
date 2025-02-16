//Program to store 10 numbers in an array and display them on the screen

#include<stdio.h>
int main()
{
	int a[10],i;
	
	for(i=0;i<15;i++)
	{
		printf("Enter a number: ");
		scanf("%d",&a[i]);
	}
	printf("The numbers you entered are: ");
	
	for(i=0;i<15;i++)
	{
		printf("%d\t",a[i]);
	}
	
	return 0;
	
}

