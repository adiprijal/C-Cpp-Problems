// Take data input and display using unformatted I/O

#include<stdio.h>
#include<conio.h>
int main()
{
	float x=3.0,y=12.5,z=523.3,A=300.0,B=1200.5,C=5300.3;
	printf("X\ty\tz=%9.1f|%10.1f|%11.1f|\n",x,y,z);
	printf("A\tB\tC=%9.1f|%10.1f|%11.1f|\n",A,B,C);
	printf("--------------------------------------------------\n");
	printf("X\ty\tz=   |%-9.1f|%-10.1f|%-11.1f\n",x,y,z);
	printf("A\tB\tC=   |%-9.1f|%-10.1f|%-11.1f\n",A,B,C);
	getch();
	return 0;
}
