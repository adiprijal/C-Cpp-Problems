// Identify vowel or consonant using if-else

#include<stdio.h>
int main()
{
  char a;
  printf("Enter an alphabet: ");
  scanf("%c", &a);

  
  if ((a>='A' && a<='Z')||(a>='a' && a<='z'))
  {
	  if(a=='a'|| a=='e'||a=='i'|| a=='o'|| a=='u'|| a=='A' || a=='E' || a=='I' || a=='O'|| a=='U')
	  {
	    printf("\n%c is a vowel.", a);
	  }
	  else
	  {
	    printf("\n%c is a consonant.", a);
	  }
	}
	else
		printf("Not an alphabet.");
		
  return 0;
}
