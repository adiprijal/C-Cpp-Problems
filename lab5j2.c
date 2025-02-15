// Display pattern

/*
	*
	*	*
	*	*	*
	*	*	*	*
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int n=5, i, j, p;
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*\t");
		}
		
		printf("\n");
	}
	
	return 0;
}
