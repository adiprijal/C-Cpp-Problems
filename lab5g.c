// Print fibonacci series upto 500

#include<stdio.h>
int main()
{
	int n1=0, n2=1, fibo;
	int term=500;
	printf("Fibonacci series:\n");
	printf("%d\t%d\t", n1, n2);
	for(term=1; term<=500; term++)
	{
		fibo=n1+n2;
		n1=n2;
		n2=fibo;
		
		printf("%d\t", fibo);
		
		if(fibo>500)
		{
			break;
		}
	}
	
	return 0;
	
}
