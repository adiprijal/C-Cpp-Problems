// Demonstrate the use of local and global variable

#include<stdio.h>
#include<conio.h>
int pi=3.14;	//defining global variable
int main()
{
	float radius, area;	//defining local variable
	printf("Enter radius of circle: ");
	scanf("%f", &radius);
	
	area=pi*radius*radius;
	
	printf("\nThe area of circle is %.2f.",area );
}
