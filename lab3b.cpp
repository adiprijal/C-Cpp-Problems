// Take data input and display using unformatted I/O

#include<stdio.h>
#include<conio.h>
int main()
{
	int x=6,y=3;
	printf("x\t\ty\t\texpressions\t\tresults\n");
	printf("%d\t|\t%d\t|\tx=y+3\t\t|\tx=%d\n",x,y,y+3);
	printf("%d\t|\t%d\t|\tx=y-2\t\t|\tx=%d\n",x,y,y-2);
	printf("%d\t|\t%d\t|\tx=y*5\t\t|\tx=%d\n",x,y,y*5);
	printf("%d\t|\t%d\t|\tx=x/y\t\t|\tx=%d\n",x,y,x/y);
	printf("%d\t|\t%d\t|\tx=x%y\t\t|\tx=%d\n",x,y,x%y);
	getch();
	return 0;
}
