#include<stdio.h>
#include<conio.h>
int main()
{
	float balance;
	char gender;
	
	printf("Enter old balance: ");
	scanf("%f",&balance);
	
	printf("Enter gender(m/f): ");
	scanf("%s",&gender);
	
	if(gender=='f')
	{
		if(balance>5000)
		{
			balance=balance+0.05*balance;
		}
		else
		{
			balance=balance+0.02*balance;
		}
	}
	
	else{
		balance=balance+0.02*balance;
	}
	printf("The new balance is %f",balance);
	return 0;
}
