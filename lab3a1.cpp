// Arithmetic operation using unformatted I/O

#include<stdio.h>
#include<conio.h>
int main()
{
	float x,y;
	char s;
	printf("Enter two numbers: ");
	scanf("%f%f",&x,&y);
	printf("Choose what operation to perform ( +, -, *, / ): ");
	scanf(" %c",s);
	switch(s){
		case '+':
			printf("%.2f",x+y);
			break;
		case '-':
			printf("%.2f",x-y);
			break;
		case '*':
			printf("%.2f",x*y);
			break;
		case '/':
			printf("%.2f",x/y);
			break;
	}
	getch();
	return 0;
}
