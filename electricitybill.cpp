#include<stdio.h>
int main()
{
	int unit;
	float amount;
	printf("Enter the consumed unit: ");
	scanf("%d",&unit);
	
	if(unit<=20)
	{
		amount=80;
	}
	
	else if(unit>20&&unit<=120)
	{
		amount=80+7.3*(unit-20);
	}
	
	else if(unit>120)
	{
		amount=80+7.3*100+9*(unit-120);
	}
	
	printf("The bill amount is %f",amount);
	return 0;
}
