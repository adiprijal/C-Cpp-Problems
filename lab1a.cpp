// Display name and roll no

#include<stdio.h>
#include<conio.h>
int main()
{
	char name[20];
	int roll;
	printf("Enter your name:");
	scanf("%s",name);
	printf("Enter your roll no:");
	scanf("%d",&roll);
	printf("Your name is %s.\nYour roll no is %d.",name,roll);
	getch();
	return 0;
}
