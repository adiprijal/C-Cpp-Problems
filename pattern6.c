/*
    *   
    *   *   
    *   *   *   
    *   
    *   *   
    *   *   *   
    * 
    * 
    * 
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l;

    for(i=0;i<3;i++)
    {
        for(j=0;j<=i;j++)
            printf("*\t");   
        printf("\n");
    }
    
    for(k=0;k<3;k++)
    {
        for(l=0;l<=k;l++)
            printf("*\t");   
        printf("\n");
    }

    for(l=0;l<3;l++)
        printf("*\n");   

    getch();
	return 0;
}