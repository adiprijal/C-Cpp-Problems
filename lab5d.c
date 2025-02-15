// Print even numbers from 1 to 50

#include<stdio.h>
int main()
{
	int num, i;
	printf("Even numbers from 1 to 50 :\n");
	for(i=2; i<=50; i+=2)
	{
		printf("%d\t", i);
	}
	
	return 0;
}
