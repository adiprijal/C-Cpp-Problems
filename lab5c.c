// Sum of digits of a number using do while loop

#include <stdio.h>
int main()
{
	int num, sum = 0, temp, cpy;
	printf("Enter a number: ");
	scanf("%d", &num);
	cpy = num;
	do
	{
		temp = cpy % 10;
		sum = sum + temp;
		cpy = cpy / 10;
	} while (cpy);

	printf("\nSum of digits of %d: %d",num, sum);
	return 0;
}
