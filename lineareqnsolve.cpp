#include<stdio.h>

int main()
{
	int a,b,c,d,m,n,divisor,x,y;
	
	printf("For first equation:\nEnter coefficients of x,y and constant: ");
	scanf("%d %d %d",&a,&b,&m);
	printf("For second equation:\nEnter coefficients of x,y and constant: ");
	scanf("%d %d %d",&c,&d,&n);
	
	divisor=a*d-b*c;
	if(divisor==0)
	{
		printf("The equations have no solution.");
	}
	
	else{
	x=(m*d-n*b)/divisor;
	y=(a*n-c*m)/divisor;
	
	printf("The value of x and y is %d and %d respectively.",x,y);
	return 0;
	}
	
}
