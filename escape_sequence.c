// escape sequences in c

#include<stdio.h>
#include<conio.h>

int main()
{
	printf("this gives space of one tab\t.");
	printf("\n this prints new line.");
	printf("\nthis gives backspace\b for real");
	printf("\nhello\\world"); // this prints backslash
	
	getch();
	return 0;
}
