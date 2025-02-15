// Enter two Cartesian coordinate points and display the distance between them

#include<stdio.h>
#include<math.h>
void main()
{
	struct
	{
		int x;
		int y;
	}p1,p2;

	printf("Point1: \n\tx: "); 
	scanf("%d",&p1.x);
	printf("\ty: ");
	scanf("%d",&p1.y);
	
	printf("Point2: \n\tx: ");
	scanf("%d",&p2.x);
	printf("\ty: ");
	scanf("%d",&p2.y);
	
	float y = sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));

	printf("Distance between the two points (%d,%d) and (%d,%d) is %.2f\n",p1.x,p1.y,p2.x,p2.y,y);
}
