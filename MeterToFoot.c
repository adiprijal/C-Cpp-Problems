// Convert length in meter to foot

#include<stdio.h>
int main()
{
	float length, foot;
	printf("Enter length in meter: ");
	scanf("%f",&length);
	
	foot=3.2808399*length;
	printf("\nThe length in foot is %.3f",foot);
	return 0;
}
