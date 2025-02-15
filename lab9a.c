// Input details of BCT students and display their average marks.

#include<stdio.h>
void main()
{
	struct student
	{
		int roll;
		char name[10];
		char address[10];
		int age;
		int marks[3];
	}str[10];
	int sum=0;
	int average[3];
	int i;

	for(i=0;i<3;i++)
	{
		printf("Enter the name: ");
		scanf("%s",str[i].name);
		printf("Enter the roll: ");
		scanf("%d",&str[i].roll);
		printf("Enter the address: ");
		scanf("%s",str[i].address);
		printf("Enter the age: ");
		scanf("%d",&str[i].age);
		printf("Enter the marks in physics: ");
		scanf("%d",&str[i].marks[0]);
		printf("Enter the marks in computer: ");
		scanf("%d",&str[i].marks[1]);
		printf("Enter the marks in math: ");
		scanf("%d",&str[i].marks[2]);
		sum=str[i].marks[0]+str[i].marks[1] + str[i].marks[2];
		average[i]=sum/3;
	}

for(i=0;i<3;i++)
	{
		printf("Name: %s\n",str[i].name);
		printf("Roll: %d\n",str[i].roll);
		printf("Address: %s\n",str[i].address);
		printf("Age: %d\n",str[i].age);
		printf("Marks in physics: %d\n",str[i].marks[0]);
		printf("Marks in computer: %d\n",str[i].marks[1]);
		printf("Marks in math: %d\n",str[i].marks[2]);
		printf("Average marks achieved is %d.\n",average[i]);
		printf("\n");
	}

}
