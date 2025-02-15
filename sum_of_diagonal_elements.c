//  Sum of diagonal elements of a matrix

#include<stdio.h>
int main()
{
	int m, n, i, j;
	printf("Enter order of matrix: ");
	scanf("%d%d", &m, &n);
	
	int mat[m][n], mat1[m][n], sum=0;
	
	printf("\nEnter elements of matrix: ");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("\nmat[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==j)
			{
				sum+=mat[i][j];
			}
		}
	}
	
	printf("\nSum of diagonal elements is %d.", sum);
	

	
	return 0;
}
