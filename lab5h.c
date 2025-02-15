/*
Write a program to calculate sum of the following series:
y=x+x^2+x^3+x^4...x^n
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int x, y=0, n, i, term;
	printf("Value of x: ");
	scanf("%d", &x);
	printf("\nnumber of terms: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		term=pow(x,i);
		y+=term;
	}
	
	printf("\nsum: %d", y);
	
	return 0;
}
