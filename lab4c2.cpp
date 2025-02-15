// Identify vowel or consonant using switch case 

#include<stdio.h>
int main()
{
  char a;
  printf("Enter an alphabet: ");
  scanf("%c", &a);

  if ((a>='A' && a<='Z')||(a>='a' && a<='z'))
  {
    switch(a)
      {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
          printf("\n%c is a vowel.", a);
        break;
        default:
          printf("\n%c is a consonant.", a);
  }
  }
  else
  {
    printf("\n%c is not an alphabet.", a);
  }

  return 0;

}
