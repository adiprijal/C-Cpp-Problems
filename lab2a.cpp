// Display percentage

#include<stdio.h>
#include<conio.h>
int main()
{
	int roll;
	float phy,mth,dra,fee,com,per;
	char n[20];
	printf("Enter your name:");
	scanf("%s",n);
	printf("Enter your roll no:");
	scanf("%d",roll);
	error:
	{
		printf("Enter your Physics, Math, Drawing, FEE and  Computer marks:");
		scanf("%.2f %.2f %.2f %.2f %.2f\n",phy,mth,dra,fee,com);
	}
	if ( phy > 100 || mth > 100 || dra > 100 || fee > 100 || com > 100 )
	{
		printf(" Enter marks out of 100!! ");
		goto error;
	}
	
	per = (phy+mth+dra+fee+com)/5;
	printf("Name:\t\t%s\nRoll no:\t\t%d\nPercenatge:\t%.2f",n,roll,per);
	getch();
	return 0;
}
