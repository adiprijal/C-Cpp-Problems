// Increment and decrement operators for 2 terms

#include <stdio.h>
#include <conio.h>
int main()
{
	int x = 5;


   printf("++x + ++x = %d\n", ++x + ++x);
   printf("x = %d\n\n", x);
 
   printf("++x + x++ = %d\n", ++x + x++);
   printf("x = %d\n\n", x);
 
   printf("x++ + x++ = %d\n", x++ + x++);
   printf("x = %d\n\n", x);
 
   printf("x++ + ++x = %d\n", x++ + ++x);
   printf("x = %d\n\n", x);


   printf("--x + --x = %d\n", --x + --x);
   printf("x = %d\n\n", x);
 
   printf("--x + x-- = %d\n", --x + x--);
   printf("x = %d\n\n", x);
 
   printf("x-- + x-- = %d\n", x-- + x--);
   printf("x = %d\n\n", x);
 
   printf("x-- + --x = %d\n", x-- + --x);
   printf("x = %d\n\n", x);
   


   printf("++x - ++x = %d\n", ++x - ++x);
   printf("x = %d\n\n", x);
 
   printf("++x - x++ = %d\n", ++x - x++);
   printf("x = %d\n\n", x);
 
   printf("x++ - x++ = %d\n", x++ - x++);
   printf("x = %d\n\n", x);
 
   printf("x++ - ++x = %d\n", x++ - ++x);
   printf("x = %d\n\n", x);


   printf("--x - --x = %d\n", --x - --x);
   printf("x = %d\n\n", x);
 
   printf("--x - x-- = %d\n", --x - x--);
   printf("x = %d\n\n", x);
 
   printf("x-- - x-- = %d\n", x-- - x--);
   printf("x = %d\n\n", x);
 
   printf("x-- - --x = %d\n", x-- - --x);
   printf("x = %d\n\n", x);

   getch();
   return 0;
}
