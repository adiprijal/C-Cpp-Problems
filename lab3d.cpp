// Using macro

#include<stdio.h>
#include<conio.h>
#define mult(a,b)(a*b)
#define sum(a,b) a+b
#define sub(a,b) a-b
#define div(a,b) a/b
#define PI 3.1415
int main()
{
	int a=8,b=4;
	float c;
	c=PI*mult(a,b);
	printf("a*b = %.2f\n",c);
	c=PI*sum(a,b);
	printf("a+b = %.2f\n",c);
	c=PI*sub(a,b);
	printf("a-b = %.2f\n",c);
	c=PI*div(a,b);
	printf("a/b = %.2f",c);
	getch();
	return 0;
}
