// WAP to read two m*n matrices and add them.

#include <stdio.h>
#include <conio.h>
int main()
{
   int m, n, i, j;
   printf("Enter the number of rows and columns: ");
   scanf("%d %d", &m, &n);
   int arr1[m][n], arr2[m][n], sum[m][n];
   printf("Enter the elements of the first matrix: ");
   for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &arr1[i][j]);
   printf("Enter the elements of the second matrix: ");
   for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &arr2[i][j]);
   for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
         sum[i][j] = arr1[i][j] + arr2[i][j];
   printf("The sum of the two matrices is: \n");
   for (i = 0; i < m; i++)
   {
      for (j = 0; j < n; j++)
         printf("%5d", sum[i][j]);
      printf("\n");
   }
   getch();
   return 0;
}
