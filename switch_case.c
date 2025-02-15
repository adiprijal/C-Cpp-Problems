// Airthmetic operations using switch case and unformatted IO

#include<stdio.h>
int main()
{
	float x, y, result;
	char ch1;
	
	printf("x: ");
	scanf("%f", &x);
	
	printf("\ny: ");
	scanf("%f",&y);
	
	puts("\nEnter operations (+, -, /, *): ");
	ch1=getche();
	
	
	switch(ch1)
	{
		case'+':
			
			result=x+y;
			printf("\nThe sum is %.2f.", result);
			break;
		case'-':
			
			result=x-y;
			printf("\nThe difference is %.2f.", result);
			break;
		case'*':
			
			result=x*y;
			printf("\nThe product is %.2f", result);
			break;
		case'/':
			
			result=x/y;
			printf("\nThe division is %.2f.", result);
			break;
		default:
			printf("\nEnter valid operator.");
	}
	return 0;
}
