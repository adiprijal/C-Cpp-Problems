//C program to count Array elements by using sizeof() operator

#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int arrsize;
	arrsize= (sizeof(arr)/sizeof(int));
	printf("The array size is %d",arrsize);
}
