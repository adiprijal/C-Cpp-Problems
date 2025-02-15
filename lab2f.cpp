// Check odd or even

#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	if (num%2==0)
		printf("%d is even.",num);
	else
		printf("%d is odd.",num);
	getch();
	return 0;
}
