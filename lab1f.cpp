// Area of ellipse

#include<stdio.h>
#include<conio.h>
#include<math.h>
# define PI 3.1415
int main()
{
	int major,minor;
	float area;
	printf("Enter length of major axis:");
	scanf("%d",&major);
	printf("Enter length of minor axis:");
	scanf("%d",&minor);
	area = PI * major * minor;
	printf("The area is %.2f.",area);
	getch();
	return 0;
}
