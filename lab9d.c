// A function which accepts structure as argument and returns structure to the calling program

#include <stdio.h>
#include <math.h>

struct Point {
   double x;
   double y;
};

struct Point addPoints(struct Point p1, struct Point p2) {
   struct Point result;
   result.x = p1.x + p2.x;
   result.y = p1.y + p2.y;
   return result;
}

void main(){
      struct Point p1, p2, result;

      printf("Enter the x and y coordinates of the first point: \n");
      printf("\tx: ");
      scanf("%lf", &p1.x);
      printf("\ty: ");
      scanf("%lf", &p1.y);

      printf("Enter the x and y coordinates of the second point: \n");
      printf("\tx: ");
      scanf("%lf", &p2.x);
      printf("\ty: ");
      scanf("%lf", &p2.y);

      result = addPoints(p1, p2);
      printf("The sum of the points is: (%.2f, %.2f)\n", result.x, result.y);
}
