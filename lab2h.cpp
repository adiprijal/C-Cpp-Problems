// Solve y for x=2 and z=4

#include<stdio.h>
#include<conio.h>
int main()
{
	int x=2,y,z=4;
//	printf("y = x++ + ++x = %d.\n",x++ + ++x);
//	printf("y = ++x + ++x = %d.\n",++x + ++x);
//	printf("y = (++x + ++x) + ++x + ++x = %d.\n",(++x + ++x) + ++x + ++x);
//	printf("y = x>z ? x:z = %d.\n",x>z ? x:z);
//	printf("y = x&&Z = %d.\n",x&&z);
	printf("x>>2 + z<<1 = %d.\n", (x>>2) + (z<<1) );
	getch();
	return 0;
}
