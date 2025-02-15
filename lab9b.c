// Input details of company (name, phone, address, number of employees) and print the details of the company.

#include<stdio.h>
void main()
{
	struct company
	{
		int phone;
		char name[10];
		char address[10];
		int employee;
	}str[10];
	int i, n;
	
	printf("Enter the number of companies: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter the name: ");
		scanf("%s",str[i].name);
		printf("Enter the phone number: ");
		scanf("%10d",&str[i].phone);
		printf("Enter the address: ");
		scanf("%s",str[i].address);
		printf("Enter the number of employees: ");
		scanf("%d",&str[i].employee);
	}

for(i=0;i<n;i++)
	{
		printf("Name: %s\n",str[i].name);
		printf("Phone number: %d\n",str[i].phone);
		printf("Address: %s\n",str[i].address);
		printf("Number of employees: %d\n",str[i].employee);
	}
}
