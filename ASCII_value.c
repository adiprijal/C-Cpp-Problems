// print ASCII value of a character

#include<stdio.h>
#include<conio.h>
int main()
{
	char character;
	printf("Enter any character: ");
	scanf("%c", &character);
	
	printf("\nThe ASCII value of a character is %d", character);
	
	getch();
	return 0;
}
