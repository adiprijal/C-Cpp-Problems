// convert distance in feet to inch

#include<stdio.h>
#include<conio.h>

int main()
{
	float foot, inch;
	printf("Enter the distance in feet: ");
	scanf("%f", &foot);
	
	inch=foot/12;
	
	printf("\nThe distance in inch is %f.", inch);
	
	getch();
	return 0;
}
