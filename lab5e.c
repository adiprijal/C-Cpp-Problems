// Print numbers divisible by 7 from 1 to 100

#include<stdio.h>
int main()
{
	int num, i;
	printf("Numbers divisible by 7 from 1 to 100:\n");
	for(i=1; i<=100; i++)
	{
		if(i%7==0)
			{
				printf("%d\t", i);
			}
	}
	
	return 0;
}
