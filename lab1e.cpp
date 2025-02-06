// TSA of cylinder

#include<stdio.h>
#include<conio.h>
#include<math.h>
# define PI 3.1415
int main()
{
	int r,h;
	float TSA;
	printf("Enter radius of base:");
	scanf("%d",&r);
	printf("Enter height of cylinder:");
	scanf("%d",&h);
	TSA = 2*PI * r *h + 2 * PI * pow(r,2);
	printf("The total surface area is %.2f.",TSA);
	getch();
	return 0;
}
