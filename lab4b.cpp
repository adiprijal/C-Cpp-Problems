// Identify largest and smallest among three numbers and identify whether it is even or odd.

#include<stdio.h>
int main()
{
	int a[3],large,small,i;
	printf("Enter 3 numbers: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	large=a[0];
	small=a[0];
	for(i=0;i<3;i++)
	{
		if(large<a[i])
			large=a[i];
		if(small>a[i])
			small=a[i];
	}
	printf("\nLargest number is %d.",large);
	printf("\nSmallest number is %d.",small);
	if(large%2==0)
	{
		printf("\n%d is even.",large);
	}
	else
	printf("\n%d is odd.",large);
	if(small%2==0)
	{
		printf("\n%d is even.",small);
	}
	else
	printf("\n%d is odd.",small);
	return 0;
}
