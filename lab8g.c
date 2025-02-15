// Copy one string to other with or without using string handling functions

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10], str2[10], str3[10];
	int i;
	printf("Enter a string: ");
	scanf("%[^\n]s", str1);
	
	// Without using string handling functions
	for(i=0; i<strlen(str1); i++)
	{
		str2[i]=str1[i];
	}
	
	// Using string handling
	strcpy(str3,str1);
	
	printf("\nstr1 = %s\nstr2 = %s\nstr3 = %s", str1, str2, str3);
	
	return 0;
}
