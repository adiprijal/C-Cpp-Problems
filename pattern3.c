/*
    H
    H   E
    H   E   L
    H   E   L   L   
    H   E   L   L   O
    H   E   L   L
    H   E   L
    H   E
    H
*/


#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j,k,l,n;
    char s[5];
    printf("Enter word for pattern:\n");                    //HELLO
    scanf("%s",s);
    n = strlen(s);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            printf("%c\t",s[j]);   
        printf("\n");
    }
    for(k=n;k>1;k--)
    {
        for(j=1;j<k;j++)
            printf("%c\t",s[j-1]);
        printf("\n");
    }
    getch();
	return 0;
}
