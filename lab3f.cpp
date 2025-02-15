// character function

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	char ch;
	input:
	printf("Enter a character: ");
	ch=getche();
	printf("\n");
	if(isalnum(ch)==1)
		printf("Alphanumeric.\n");
	else if(isblank(ch)==1)
		printf("Blank.\n");
	else if(isalpha(ch)==1)
		printf("Alphabet.\n");
	else if(iscntrl(ch)==1)
		printf("Control character.\n");
	else if(isdigit(ch)==1)
		printf("Digit.\n");
	else if(isupper(ch)==1)
		printf("Upper Case.\n");
	else if(islower(ch)==1)
		printf("Lower Case.\n");
	else if(isxdigit(ch)==1)
		printf("Hexadecimal digit.\n");
	else if(isgraph(ch)==1)
		printf("Graphical character.\n");
	else{
		printf("What the hell have you entered. Enter again...:\n");
		goto input;
	}
	getch();
	return 0;
}
