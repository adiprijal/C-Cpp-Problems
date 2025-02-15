// Read values of coefficient a, b and c of eqn ax^2 + bx + c = 0 and find the roots.

#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c;
	float root1, root2;
	printf("Enter the coefficients of ax^2 + bx + c = 0 : ");
	
	printf("\na = ");
	scanf("%d",&a);
	
	printf("\nb = ");
	scanf("%d",&b);
	
	printf("\nc = ");
	scanf("%d",&c);
	
	root1 = (-b + sqrt(pow(b,2) - 4*a*c)) / (2*a);
	root2 = (-b - sqrt(pow(b,2) - 4*a*c)) / (2*a);
	
	if( (pow(b,2) - 4*a*c)<0)
		printf("Complex solution.");
	else
		printf("The roots of equation %dx^2+%dx+%d=0 are %.2f and %.2f.",a,b,c,root1,root2);
		
	return 1;
}
