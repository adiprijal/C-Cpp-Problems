// Enter n numbers and count positive, negative and zeros.

#include<stdio.h>
int main()
{
	int n, i, posi_count=0, neg_count=0, zero_count=0;
	printf("How many numbers you want to enter?\n");
	scanf("%d", &n);
	
	int num[n];
	for(i=0; i<n; i++)
	{
		printf("\nEnter %d number: ", i+1);
		scanf("%d", &num[i]);
	}
	
	for(i=0; i<n; i++)
	{
		if(num[i]==0)
		{
			zero_count++;
		}
		else if(num[i]>0)
		{
			posi_count++;
		}
		else if(num[i]<0)
		{
			neg_count++;
		}
	}
	
	printf("\nPositive number(s): %d", posi_count);
	printf("\nNegative number(s): %d", neg_count);
	printf("\nZero(s): %d", zero_count);
	
	return 0;
}
