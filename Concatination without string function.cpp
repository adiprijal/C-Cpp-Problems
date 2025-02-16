//Program to concatenate two strings without using string function

#include<stdio.h>
int main()
{
	char str1[10],str2[10],combined[20];
	int i,len1=0,len2=0,j;
	
	printf("Enter first string: ");
	gets(str1);
	
	printf("Enter second string: ");
	gets(str2);
	
	for(i=0;str1[i]!='\0';i++)
	{
		len1++;						//To calculate length of string
	}
	
	for(i=0;str2[i]!='\0';i++)
	{
		len2++;
	}
	
	for(i=0;i<len1;i++)
	{
		combined[i]=str1[i];
	}
	
	for(i=0;i<len2;i++)
	{
		
			combined[len1+i]=str2[i];
		
	}
	
	printf("The concatenated string is %s",combined);
	return 0;
}
