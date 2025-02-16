//C program to find the sum of the Arithmetic Progression (A.P.) series

#include<stdio.h>
int main()
{
	int i,a,d,n,sum=0,last;
	printf("Enter first term: ");
	scanf("%d",&a);
	printf("Enter number of terms: ");
	scanf("%d",&n);
	printf("Enter common difference: ");
	scanf("%d",&d);
	
	last=a+(n-1)*d;
	printf("The series is:\n");
	for(i=a;i<=last;i=i+d)
	{
		printf("%d\t",i);
		sum+=i;
	}
	
	printf("\nThe sum is %d",sum);
	
}
