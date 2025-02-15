// Take data input and display using unformatted I/O

#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	float wt,ht;
	char name[20], add[30];
	printf("Enter your name: ");
	gets(name);
	printf("Enter your address: ");
	gets(add);
	printf("Enter your age in years: ");
	scanf("%d",&age);
	printf("Enter your weight(in kg): ");
	scanf("%f",&wt);
	printf("Enter your height(in foot): ");
	scanf("%f",&ht);
	printf("Name\t: %s\nAddress\t: %s\nAge\t: %d\nHeight\t: %.2f\nWeight\t: %.2f",name,add,age,wt,ht);
	getch();
	return 0;
}
