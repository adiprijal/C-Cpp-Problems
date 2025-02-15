// sizeof operator is used to get the size of the variable. It returns the size of the variable in bytes.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a=5;
	float b=5.5;
	char ch[50]="h";
	
	printf("size of a=%d", sizeof(a));
	printf("\nsize of b=%d", sizeof(b));
	printf("\nsize of ch=%d", sizeof(ch));
	printf("\nsize of char=%d", sizeof(char));
	printf("\nsize of int=%d", sizeof(int));
	printf("\nsize of float=%d", sizeof(float));
	printf("\nsize of double=%d", sizeof(double));
	printf("\nsize of long=%d", sizeof(long));
	
	getch();
	return 0;
}
