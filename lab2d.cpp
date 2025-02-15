// Compound Interest

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int P,T;
	float R,CI;
	printf("Enter principal amount:");
	scanf("%d",&P);
	printf("Enter time:");
	scanf("%d",&T);
	printf("Enter rate of interest:");
	scanf("%f",&R);
	CI = P*(pow(1+R/100,T)-1);
	printf("The CI is %.2f.",CI);
	getch();
	return 0;
}
