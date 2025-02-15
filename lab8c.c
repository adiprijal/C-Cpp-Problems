// Swap two variables value using function and pointer

#include<stdio.h>

int swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int num1, num2;
	printf("num1: ");
	scanf("%d", &num1);
	
	printf("num2: ");
	scanf("%d", &num2);
	
	printf("\nValue before swap \nnum1: %d \nnum2: %d", num1, num2);
	
	swap(&num1, &num2);
	printf("\nValue after swap \nnum1: %d \nnum2: %d", num1, num2);
	
	return 0;
}


