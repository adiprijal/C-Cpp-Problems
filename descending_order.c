// Sort numbers in descending order

#include<stdio.h>
int main()
{
  int n;
  printf("How many numbers you want to enter?\n");
  scanf("%d", &n);

  int num[n], i, j, temp;
  printf("\nEnter numbers:\n");
  for(i=0; i<n; i++)
  {
    scanf("%d", &num[i]);
  }

  for(i=0; i<n; i++)
  {
    for(j=i+1; j<n; j++)
    {
      if(num[i]<num[j])
      {
        temp=num[i];
        num[i]=num[j];
        num[j]=temp;
      }
    }
  }

  printf("\nThe numbers in descending order is: \n");

  for(i=0; i<n; i++)
  {
    printf("%d\t", num[i]);
  }

  return 0;
}
