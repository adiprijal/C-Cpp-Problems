// Airthmetic operation using define

#include<stdio.h>
#define PLUS +
#define MINUS -
#define MULT *
#define DIVIDE /
int main()
{
	int x,y,z;
	printf("Enter value of x and y :");
	scanf("%d%d",x,y);
	z = x PLUS y;
	printf("z = x + y = %d.",z);
}
