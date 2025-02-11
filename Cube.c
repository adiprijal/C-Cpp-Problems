// find cube of an integer number

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int num, cube, cube_with_fn;
	printf("Enter any number: ");
	scanf("%d", &num);
	
	// cube with out using pow() function
	cube=num*num*num;
	
	//cube using pow function
	cube_with_fn=pow(num,3);
	
	printf("\ncube without function is %d", cube);
	printf("\ncube with function is %d", cube_with_fn);
	
	getch();
	return 0;
	
}
