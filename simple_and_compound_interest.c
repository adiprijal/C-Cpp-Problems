// Simple and Compound Interest

#include<stdio.h>
#include<math.h>
int main()
{
	double principal, time, rate, simple_int, com_int;
	printf("Principal: ");
	scanf("%lf", &principal);
	
	printf("\nTime: ");
	scanf("%lf", &time);
	
	printf("\nRate: ");
	scanf("%lf", &rate);
	
	printf("\n");
	
	simple_int=(principal*rate*time)/100;
	com_int=principal*pow(1+(rate/100),time)-principal;
	
	printf("\nSimple Interest: %lf", simple_int);
	printf("\nCompound Interest: %lf", com_int);
	
	return 0;
}
