// Find the fibonacci series up to given number without using recursion

#include <stdio.h>

int main()
{
   int n, i;
   printf("Enter a number: ");
   scanf("%d", &n);

   int a = 0, b = 1, c = 0;
   printf("Fibonacci series up to %d: %d %d", n, a, b);
   for (i = 2; i < n; i++)
   {
      c = a + b;
      if (c <= n)
      {
         printf(" %d", c);
         a = b;
         b = c;
      }
   }
   printf("\n");

   return 0;
}
