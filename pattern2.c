/*
                    N
                e   e   e
            P   P   P   P   P
        a   a   a   a   a   a   a
    L   L   L   L   L   L   L   L   L
*/


#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int i,j,k,l,n;
    char s[15];
    printf("Enter word for pattern:\n");
    scanf("%s",s);
    n=strlen(s);
    for(i=1,l=0;i<=n;i++,l++)
    {
        for(j=i;j<n;j++)
            printf(" \t");   
         for(k=1;k<2*i;k++)
            {
                if (l%2==0)
                    printf("%c\t",toupper(s[l]));
                else
                    printf("%c\t",tolower(s[l]));
            }
        printf("\n");
    }
    getch();
	return 0;
}
