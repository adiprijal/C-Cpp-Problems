//Program to find trace (sum of diagonal elements) of matrix

#include<stdio.h>
int main()
{
	int m,n,i,j,trace=0;
	
	printf("Enter order of square matrix(m/n): ");
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
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if (i==j)
			{
				trace+=matrix[i][j];
			}
		}
	}
	
	printf("The trace of matrix is %d",trace);
	return 0;
}
