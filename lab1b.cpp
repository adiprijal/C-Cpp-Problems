// Add three numbers

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,sum;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	sum = a+b+c;
	printf("The sum is %d.",sum);
	getch();
	return 0;
}
