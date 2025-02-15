// Remove white spaces and replace '.' with ':'

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int len;
	
	printf("Enter a string: ");
	scanf("%[^\n]s", str);
	
	len=strlen(str);
	
	int i, j;
	for(i=0; i<len; i++)
	{
			if(str[i]==' ')
			{
				for(j=i; j<strlen(str); j++)
				{
					str[j]=str[j+1];
				}
			}
		else if(str[i]=='.')
		{
			str[i]=':';
		}
	}
	
	printf("\nOutput:\n%s", str);
	
	return 0;
}
