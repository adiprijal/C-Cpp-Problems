// Read marks of n students and display top 5 students

#include<stdio.h>
int main()
{
	int n, i, temp, j;
	printf("number of students: ");
	scanf("%d", &n);
	
	int num[n];
	for(i=0; i<n; i++)
	{
		printf("\nEnter marks of %d student: ", i+1);
		scanf("%d", &num[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(num[i]<num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	
	for(i=0; i<5; i++)
	{
		printf("%d\n", num[i]);
	}
	return 0;
}
