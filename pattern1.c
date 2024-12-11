/*
    1   2   3   4   5   4   3   2   1
        1   2   3   4   3   2   1
            1   2   3   2   1
                1   2   1
                    1
*/



#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l,n;
    for(i=0;i<5;i++)
    {
        n=1;
        for(j=0;j<i;j++)
            printf(" \t");   
         for(k=5;k>i;k--)					// (k=0;k<5-i;k++)
            {					
                printf("%d\t",n);			// ("%d\t",k+1)
                n++;
            }
            for(l=4-i;l>0;l--)
            printf("%d\t",l);
        printf("\n");
    }
	return 0;
}
