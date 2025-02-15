// Input a number and display its reverse

#include<stdio.h>
int main(){
	int n, i, num, temp, rem, rev=0;
	printf("Enter no. of digits:");
	scanf("%d",&n);
	printf("\nEnter a number:");
	scanf("%d",&num);
	
	for(i=0, temp=num; i<n; i++)
	{
		rem = temp%10;
		temp = temp/10;
		rev = rev*10 + rem;
	}
	
	printf("\nThe reverse of %d is %d.",num,rev);
	return 1;
}
