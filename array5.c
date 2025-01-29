// WAP to input two matrices and multiply them.

#include <stdio.h>
#include <conio.h>
int main()
{
   int m, n, p, q, i, j, k;

   error:
   printf("Enter the number of rows and columns of the first matrix: ");
   scanf("%d %d", &m, &n);
   printf("Enter the number of rows and columns of the second matrix: ");
   scanf("%d %d", &p, &q);

//    Check if the matrices can be multiplied.
   if (n != p)
   {
      printf("The matrices cannot be multiplied.");
      goto error;
   }

   int mat1[m][n], mat2[p][q], product[m][q];

//    Input the matrices.
   printf("Enter the elements of the first matrix: ");
   for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &mat1[i][j]);

   printf("Enter the elements of the second matrix: ");
   for (i = 0; i < p; i++)
      for (j = 0; j < q; j++)
         scanf("%d", &mat2[i][j]);

//    Multiply the matrices.
   for (i = 0; i < m; i++)
      for (j = 0; j < q; j++)
      {
         product[i][j] = 0;
         for (k = 0; k < n; k++)
            product[i][j] += mat1[i][k] * mat2[k][j];
      }

//    Print the product.
   printf("The product of the two matrices is: \n");
   for (i = 0; i < m; i++)
   {
      for (j = 0; j < q; j++)
         printf("%5d", product[i][j]);
      printf("\n");
   }

   getch();
   return 0;
}