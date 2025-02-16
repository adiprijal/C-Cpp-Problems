#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	
	if((a>b&&a<c)||(a<b&&a>c))
	{
		printf("%d is second largest",a);
			}
				
	else if((b>a&&b<c)||(b<a&&b>c))
	{
		printf("%d is second largest",b);
			}
	
	else
	{
		printf("%d is second largest",c);
	}
	return 0;
}
