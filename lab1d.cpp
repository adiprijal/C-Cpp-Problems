// Simple Interest

#include<stdio.h>
#include<conio.h>
int main()
{
	int P,T;
	float R,SI;
	printf("Enter principal amount:");
	scanf("%d",&P);
	printf("Enter time:");
	scanf("%d",&T);
	printf("Enter rate of interest:");
	scanf("%f",&R);
	SI = (P*T*R)/100;
	printf("The SI is %.2f.",SI);
	getch();
	return 0;
}
