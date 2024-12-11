/*
    A
    B   C   
    D   E   F   
    G   H   I   J   
    K   L   M   N   O   
*/


#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char s='A';
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++,s+=1)
            printf("%c\t",s);   
        printf("\n");
    }
    getch();
	return 0;
}