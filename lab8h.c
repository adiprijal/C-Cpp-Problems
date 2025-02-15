// String concatenate without string handling

#include<stdio.h>
int main()
{
	char st1[10], st2[10], st3[10];
	int len1=0, len2=0, i;
	
	printf("Enter strings: ");
	gets(st1);
	
	printf("Enter strings: ");
	gets(st2);
		
	for(i=0; st1[i]!='\0'; i++)
	{
		len1++;
	}
	
	for(i=0; st2[i]!='\0'; i++)
	{
		len2++;
	}
	printf("\n%d%d\n",len1,len2);
	for(i=0; i<len1; i++)
	{
		st3[i]=st1[i];
	}
	
	for(i=len1; i<len1+len2; i++)
	{
		st3[i]=st2[i-len1];
	}
	
	printf("\n%s", st3);
	
	return 0;
}
