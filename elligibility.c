// check whether a person is eligible for voting or not?

#include<stdio.h>
#include<conio.h>

int main()
{
	int age;
	printf("Please enter your age.\n");
	scanf("%d", &age);
	
	if(age>=18)
	{
		printf("You are eligible for voting.");
	}
	else
	{
		printf("You are not eligible for voting.");
	}
	
	getch();
	return 0;
}
