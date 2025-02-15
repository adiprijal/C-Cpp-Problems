// Swap 2 numbers

/*

// using 3rd variable

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Before swap:\n");
	printf("a = %d.\nb = %d\n.",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swap:\n");
	printf("a = %d.\nb = %d.",a,b);
	getch();
	return 0;
}

*/


// Without using 3rd variable

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,temp;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Before swap:\n");
	printf("a = %d.\nb = %d\n.",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("After swap:\n");
	printf("a = %d.\nb = %d.",a,b);
	getch();
	return 0;
}
