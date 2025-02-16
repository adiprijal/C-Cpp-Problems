//C program to pass a string to a function

#include <stdio.h>

void Strfun(char *ptr)
{
    printf("The String is : %s",ptr);
}


int main()
{
	char str[20]="Hello Function";
	
	
	Strfun(str);
	
	return 0;
}
