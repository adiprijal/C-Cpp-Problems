//Program to find transpose of a matrix

#include<stdio.h>
int main()
{
	int m,n,i,j,temp;
	printf("Enter order of matrix(m/n): ");
	scanf("%d/%d",&m,&n);
	
	int matrix[m][n],transmatrix[n][m];
	
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
			transmatrix[j][i]=matrix[i][j];
			
		}
	}
	
	printf("The transpose of the matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		printf("%d\t",transmatrix[i][j]);	
		}
		printf("\n");
	}
	return 0;
	
}
