#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=1;
	
	printf("Enter a number: ");
	scanf("%d",&n);	
	
	for(i=2;i<=n;i++)
	{
		sum+=i*(i-1);
		}	
		
	printf("The sum of series is %d",sum);
	return 0;
}
