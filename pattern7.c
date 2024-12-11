/*
    *   *   *   *   *   *   *   *   *   *
    *   *   *   *           *   *   *   *
    *   *   *                   *   *   *
    *   *                           *   *
    *                                   *
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l,n;
    printf("ENTER NO. OF LINES YOU WANT TO PRINT:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
            printf("*\t");
        for(k=0;k<2*i;k++)
            printf(" \t");
        for(l=n;l>i;l--)
            printf("*\t");
        printf("\n");
    }
    getch();
	return 0;
}