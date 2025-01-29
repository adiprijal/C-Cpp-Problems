// sort strings in alphabetical order

#include <stdio.h>
#include <string.h>

int main()
{
   char name[5][7] = {"John", "Paul", "George", "Ringo", "Stuart"};
   char temp[7];

   int i = 0, j = 0;

   printf("Names in order before sorting:\n");
   for (i = 0; i < 5; i++)
   {
      printf("\t%s\n", name[i]);
   }

   for (i = 0; i < 5; i++)
   {
      for (j = i + 1; j < 5; j++)
      {
         if (strcmp(name[i], name[j]) > 0)
         {
            strcpy(temp, name[i]);
            strcpy(name[i], name[j]);
            strcpy(name[j], temp);
         }
      }
   }

   printf("\nNames in order after sorting:\n");
   for (i = 0; i < 5; i++)
   {
      printf("\t%s\n", name[i]);
   }

   return 0;
}
