// Floor and Celi function

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float var, floor_var, ceil_var;
	printf("Enter a float value: ");
	scanf("%f", &var);
	
	floor_var=floor(var);	//round off number to its base value
	ceil_var=ceil(var);		//round off number to its higher value
	
	printf("\nThe floor value is %f", floor_var);
	printf("\nThe celi value is %f", ceil_var);
	
	getch();
	return 0;
}
