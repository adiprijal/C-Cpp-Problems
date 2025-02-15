// Count no. of characters and words in a sentence.

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int len;
	printf("Enter a string: ");
	scanf("%[^\n]s", str);
	printf("Number of characters: %d", strlen(str));
	
	int word=1, i;
	for(i=0; i<strlen(str); i++)
	{
		if(str[i]==' ')
		{
			word++;
		}
	}
	
	printf("\nNumber of words: %d", word);
	
	return 0;
	 
}
