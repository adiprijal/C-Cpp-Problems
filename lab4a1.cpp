// Input marks of a student in 5 subjects and display division.

#include<stdio.h>
int main()
{
  float phy, mth, fee, draw, com, total, per;
  char rank[20];
  printf("Enter your marks obtained in following subjects (out of 100):");
  printf("\nPhysics: ");
  scanf("%f", &phy);

  printf("\nMath: ");
  scanf("%f", &mth);

  printf("\nFEE: ");
  scanf("%f", &fee);

  printf("\nDrawing: ");
  scanf("%f", &draw);

  printf("\nC-Programming: ");
  scanf("%f", &com);
  
  total= phy+mth+fee+draw+com;
  per=total/5;

  printf("\nYour academic result is as follows:");
  printf("\nPhysics: %.2f", phy);
  printf("\nMath: %.2f", mth);
  printf("\nFEE: %.2f", fee);
  printf("\nDrawing: %.2f", draw);
  printf("\nC-Programming: %.2f", com);
  printf("\nTotal: %.2f", total);
  printf("\nPercentage: %.2f", per);

  if (phy<40 || mth<40 || fee<40 || draw<40 || com<40)
  	{
  	  printf("\nFail");
	  return 0;
	}
  else
  {
	  if(per<40)
	  {
	    printf("\nRank: Fail");
	  }
	  else if(per>=40 && per<55)
	  {
	    printf("\nRank: Pass");
	    printf("\nDivision: Third Division");
	  }
	  else if(per>=55 && per<65)
	  {
	    printf("\nRank: Pass");
	    printf("\nDivision: Second Division");
	  }
	
	  else if(per>=65 && per<80)
	  {
	    printf("\nRank: Pass");
	    printf("\nDivision: First Division");
	  }
	  else if(per>=80 && per<95)
	  {
	    printf("\nRank: Pass");
	    printf("\nDivision: Distinction");
	  }
	  else if(per>=95 && per<=100)
	  {
	    printf("\nRank: Pass");
	    printf("\nDivision: Extraordinary");
	  }
	  else
	  	printf("\nERROR 404!!!");
	}

  return 0;
}
