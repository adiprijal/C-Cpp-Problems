// Test divisibility

#include<stdio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);

	if(num%5==0)
		printf("\n%d is divisible by 5.",num);
	else
		printf("\n%d is not divisible by 5.",num);
		
	if(num%7==0)
	{
		if(num%11!=0)
			printf("\n%d is divisible by 7 but not by 11.",num);
		else
			printf("\n%d is divisible by 7 and 11.",num);
	}
	else
	{
		if(num%11!=0)
			printf("\n%d is not divisible by both 7 and 11.",num);
		else
			printf("\n%d is divisible by 11 but not by 7.",num);
	}
	
	return 1;

}
