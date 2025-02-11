// Coordinate Quadrant

#include<stdio.h>
int main()
{
  int x, y;
  printf("Enter x-axis: ");
  scanf("%d", &x);

  printf("\nEnter y-axis: ");
  scanf("%d", &y);

  if(x>=0 && y>=0)
    printf("\nThe coordinate (%d,%d) lies in first quadrant.", x, y);

  else if(x<0 && y>=0)
    printf("\nThe coordinate (%d,%d) lies in second quadrant.", x, y);

  else if(x<0 && y<0)
    printf("\nThe coordinate (%d,%d) lies in third quadrant.", x, y);

  else
    printf("\nThe coordinate (%d,%d) lies in fourth quadrant.", x, y);

  return 0;

}