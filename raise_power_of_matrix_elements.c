// Raise power of each element of matrix by 3

#include<stdio.h>
#include<math.h>
int main()
{
	int m, n, i, j;
	printf("Enter order of matrix: ");
	scanf("%d%d", &m, &n);
	
	int mat[m][n], mat1[m][n];
	
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
			mat1[i][j]=pow(mat[i][j], 3);
		}
	}
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", mat1[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
