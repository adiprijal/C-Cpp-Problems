// Reverse the digits of an integer number

#include<stdio.h>
int main()
{
  int num, rev=0, rem, copy;
  
  printf("Enter any integer: ");
  scanf("%d", &num);
  copy=num;

  while (num>0)
  {
    rem = num % 10;
    rev = rev * 10 + rem;
    num = num / 10;
    
  }

  printf("\nThe reverse order of digit %d is %d.", copy, rev );

  return 0;
}
