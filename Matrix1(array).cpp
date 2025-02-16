//Program to take matrix of order m/n and multiply each term buy 3

#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter order of matrix(m/n): ");
	scanf("%d/%d",&m,&n);
	
	int matrix[m][n];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter matrix[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("The required matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d\t",3*matrix[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
