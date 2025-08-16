// Take details of 5 bank customers and execute a payment transaction between two customers.
// Display the details of the payer and receiver along with the payment date.

#include <stdio.h>

struct cust
{
   char name[20];
   char street[30];
   char city[20];
   long int accNo;
   float balance;
} cusNo[5], payer, receiver;

struct date
{
   int year;
   int month;
   int day;
} payment_date;

int main()
{
   int i;
   int payerIndex, receiverIndex;
   long int payer_acc, receiver_acc;
   float payment;

   for (i = 0; i < 2; i++)
   {
      printf("Enter details of Customer %d: \n", i + 1);
      printf("\tName: ");
      scanf("%[^\n]s", cusNo[i].name);
      getchar();
      printf("\tCity: ");
      scanf("%[^\n]s", cusNo[i].city);
      getchar();
      printf("\tStreet: ");
      scanf("%[^\n]s", cusNo[i].street);
      printf("\tAccount No: ");
      scanf("%d", &cusNo[i].accNo);
      printf("\tCurrent Balance: ");
      scanf("%f", &cusNo[i].balance);
      printf("\n");
      getchar();
   }

   printf("\nPayer's Account No.: ");
   scanf("%ld", &payer_acc);

   printf("Receiver's Account No.: ");
   scanf("%ld", &receiver_acc);

   printf("\nEnter date of payment: ");
   printf("\n\tYear: \t");
   scanf("%d", &payment_date.year);
   printf("\tMonth: \t");
   scanf("%d", &payment_date.month);
   printf("\tDay: \t");
   scanf("%d", &payment_date.day);

   printf("\nEnter the payment amount: ");
   scanf("%f", &payment);

   for (i = 0; i < 2; i++)
   {
      if (payer_acc == cusNo[i].accNo)
      {
         payer = cusNo[i];
         payerIndex = i;
      }
      if (receiver_acc == cusNo[i].accNo)
      {
         receiver = cusNo[i];
         receiverIndex = i;
      }
   }

   if (cusNo[payerIndex].balance < payment){
      printf("\nCurrent Balance: %.2f", cusNo[payerIndex].balance);
      printf("\nNot Enough Balance !!");
   }
   else{
      printf("\nPayment Successful !!");

      printf("\n\nPayer's Details: ");
      printf("\n\tName: \t\t%s", payer.name);
      printf("\n\tCity: \t\t%s", payer.city);
      printf("\n\tStreet: \t%s", payer.street);
      printf("\n\tAccount No: \t%ld", payer.accNo);
      printf("\n\tOld Balance: \t%.2f", payer.balance);
      payer.balance = payer.balance - payment;
      printf("\n\tNew Balance: \t%.2f", payer.balance);

      printf("\n\nReceiver's Details: ");
      printf("\n\tName: \t\t%s", receiver.name);
      printf("\n\tCity: \t\t%s", receiver.city);
      printf("\n\tStreet: \t%s", receiver.street);
      printf("\n\tAccount No: \t%ld", receiver.accNo);
      printf("\n\tOld Balance: \t%.2f", receiver.balance);
      receiver.balance = receiver.balance + payment;
      printf("\n\tNew Balance: \t%.2f", receiver.balance);
      printf("\n\n\tDate: %.2d-%.2d-%d", payment_date.day, payment_date.month, payment_date.year);
   }

   return 0;
}