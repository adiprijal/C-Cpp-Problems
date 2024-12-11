/*
    P   
    P   U   
    P   U   L   
    P   U   L   C   
    P   U   L   C   H   
    P   U   L   C   H   O   
    P   U   L   C   H   O   W   
    P   U   L   C   H   O   W   K   
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j,k,n;
    char s[15];
    printf("Enter word for pattern:\n");                //PULCHOWK
    scanf("%s",s);
    n = strlen(s);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            printf("%c\t",s[j]);   
        printf("\n");
    }
    getch();
	return 0;
}