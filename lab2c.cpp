// Multiply two numbers

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,num,rev;
	printf("Enter three integers:");
	scanf("%d%d%d",&a,&b,&c);
	num=a*100+b*10+c;
	rev=c*100+b*10+a;
	printf("The number is %d.",num);
	printf("The reverse is %d.",rev);
	getch();
	return 0;
}
