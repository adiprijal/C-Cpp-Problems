//program to  take n numbers from the user and to print the numbers in ascending order

#include<stdio.h>
int main()
{
	int a[50],temp,i,j,n;
	
	printf("How many numbers?");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter a number: ");
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("The numbers in ascending order is:\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
