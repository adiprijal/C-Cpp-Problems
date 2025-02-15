// WAP to find HCF and LCM of two numbers.

#include<stdio.h>

int hcf(int n1, int n2);
int lcm(int n1, int n2);

int main()
{
   int n1, n2;
   printf("Enter first number: ");
   scanf("%d", &n1);
   
   printf("\nEnter second number: ");
   scanf("%d", &n2);
   
   printf("\nHCF of %d and %d is: %d", n1, n2, hcf(n1, n2));
   printf("\nLCM of %d and %d is: %d", n1, n2, lcm(n1, n2));
   
   return 0;
}

// HCF function
int hcf(int n1, int n2)
{
   if(n2!=0)
   {
      return hcf(n2, n1%n2);        // (5,7) => (7,5) => (5,2) => (2,1) => (1,0) => 1
   }
   else
   {
      return n1;
   }
}


// LCM function
int lcm(int n1, int n2)
{
   return n1*n2/hcf(n1, n2);
}
