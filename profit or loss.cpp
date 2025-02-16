//Program to calculate profit and loss

#include<stdio.h>
int main()
{
	float sp,cp;
	
	printf("Enter the cost price: ");
	scanf("%f",&cp);
	
	printf("Enter the selling price: ");
	scanf("%f",&sp);
	
	if(cp>sp)
	{
		printf("Its a loss. The loss amount is %.2f",cp-sp);
	}
	
	else if(sp>cp)
	{
	printf("Its a profit. The profit amount is %.2f",sp-cp);
	}
	return 0;	
}
