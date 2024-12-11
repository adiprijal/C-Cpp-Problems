/*
    P   r   o   g   r   a   m   m   i   n   g   
    r   o   g   r   a   m   m   i   n   
    o   g   r   a   m   m   i   
    g   r   a   m   m   
    r   a   m   
    a
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j,k,n;
    char s[15];
    printf("Enter word for pattern:\n");                //Programming
    scanf("%s",s);
    n = strlen(s);
    for(i=0,k=n;i<n;i++,k--,n-=1)
    {
        for(j=i;j<k;j++)
            printf("%c\t",s[j]);   
        printf("\n");
    }
    getch();
	return 0;
}