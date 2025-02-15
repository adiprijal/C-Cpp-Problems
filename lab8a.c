//  Find largest among three numbers using pointer

#include<stdio.h>
int main()
{
	int *a, *b, *c, x, y, z;
	a=&x;
	b=&y;
	c=&z;
	
	printf("a: ");
	scanf("%d", &x);
	
	printf("\nb: ");
	scanf("%d", &y);
	
	printf("\nc: ");
	scanf("%d", &z);
	
	if(*a>*b && *a>*c)
		printf("\n%d is greatest.", *a);
	
	else if(*b>*a && *b>*c)
		printf("\n%d is greatest.", *b);
	
	else
		printf("\n%d is greatest.", *c);
		
	return 0;
}
