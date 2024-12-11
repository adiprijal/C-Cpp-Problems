/*
            A
           BAB
          CBABC
         DCBABCD
        EDCBABCDE
*/


#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,j,k,l;
    char s;
    for(i=0;i<5;i++)
    {
        s='A';
        s=s+i;
        for(j=5;j>i+1;j--)
            printf(" \t");   
        
        for(k=0;k<=i;k++)
        {   
            printf("%c\t",s);
            s=s-1;  
        }
        
        for(l=0,s='B';l<i;l++,s+=1)
            printf("%c\t",s);
        
        printf("\n");
    }
    getch();
	return 0;
}


//  Incomplete version
/*

    #include<stdio.h>
    #include<conio.h>
    #include<math.h>
    int main()
    {
        int i,j,k,l;
        char s;
        for(i=0;i<5;i++)
        {
            s='A';
            s=s+i;
            for(j=5;j>i;j--)
                printf(" \t");   
            for(k=0;k<2*i+1;k++)
            {   
                printf("%c\t",s);
                s=s-1;  
                if(s<'A')
                {   
                    s='B';
                    for(l=0;l<i;l++)
                    {
                        printf("%c\t",s);
                        s=s+1;
                    }
                }
            }
            printf("\n");
        }
        getch();
        return 0;
    }

*/