// I/O operators

#include<stdio.h>
#include<conio.h>
main()
{
	char a,b,c,d[10];

	// getch takes a charater input
	a=getch();
	// putch print out value of a character variable
	putch(a);
	
	// getchar takes a character input
	// multple characters can be typed in but only first character is stored
	b=getchar();
	// putchar also gives a single character output
	putchar(b);
	
	// getche takes a character input and immediately gives output of that character
	getche();
	
	// printf prints
	printf("Enter a character: ");
	// scanf takes input
	scanf("%c",c);
	printf("\nc is %c.\n");

	// gets takes string input
	gets(d);
	// puts gives string output
	puts(d);
}
