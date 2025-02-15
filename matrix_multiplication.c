// Multiplication of two matrices

#include<stdio.h>
int main()
{
	int m, n, p, q, i, j, k;
	printf("order of matrix 1: ");
	scanf("%d%d", &m, &n);
	
	printf("\norder of matrix 2: ");
	scanf("%d%d", &p, &q);
	
	int mat1[m][n], mat2[p][q], matPro[m][q], sum=0;
	
	if(n==p)
	{
		printf("\nEnter elements of matrix 1:\n");
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("\nmat1[%d][%d]: ", i, j);
			scanf("%d", &mat1[i][j]);
		}
	}
	
	printf("\nEnter elements of matrix 2: \n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("\nmat2[%d][%d]: ", i, j);
			scanf("%d", &mat2[i][j]);
		}
	}
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			for(k=0; k<q; k++)
			{
				sum+=mat1[i][k]*mat2[k][j];
			}
			matPro[i][j]=sum;
			sum=0;
		}
	}
	
	printf("\nmatrix 1:\n");
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", mat1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nmatrix 2:\n");
	for(i=0; i<p; i++)
	{
		for(j=0; j<q; j++)
		{
			printf("%d\t", mat2[i][j]);
		}
		printf("\n");
	}
	
	printf("\nproduct of matrix1 and matrix2:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<q; j++)
		{
			printf("%d\t", matPro[i][j]);
		}
		printf("\n");
	}
	}
	else
	{
		printf("\nEnter suitable order.");
	}
	
	return 0;
}
