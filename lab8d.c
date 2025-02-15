// Check string is pallindrome or not

#include<stdio.h>
int main()
{
	char str[100];
	int len=0, p=1;
	printf("Enter a string: ");
	scanf("%s", str);
	
	int i, j;
	for(i=0; str[i]!='\0'; i++)
	{
		len++;
	}
	
	for(i=0,j=len-1; i<len/2,j>len/2; i++, j--)
	{
		if(str[i]!=str[j])
		{
			p=p+1;
			
		}
	}
	
	if(p==1)
	{
		printf("\n%s is palindrome.", str);
	}
	else
	{
		printf("\n%s is not palindrome", str);
	}
	
	return 0;
}
