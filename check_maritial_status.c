// Check the maritial status of a girl and greet them accordingly

#include<stdio.h>
int main()
{
  char name[50], maritial_status[50];
  printf("Enter your name: ");
  scanf("%d[^\n]s",name);
  printf("\nMaritial status: ");
  scanf("%[^\n]s", maritial_status);

  if(maritial_status=='married')
   printf("Hello Mrs. %s.", name);

  else
    printf("Hello Ms. %s.", name);
  
  return 0;
}