// Pattern
/*
	U N
	U N I V
	U N I V E R
	U N I V E R S I
	U N I V E R S I T Y
	U N I V E R S I
	U N I V E R
	U N I V
	U N
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[15]="UNIVERSITY";
	int i, j, k, len, mid;
	
	len = strlen(s);
	
	if(len%2!=0)
		mid = (len-1)/2 + 1;
	else
		mid = len/2;
	
	for(i=1; i<=mid; i++){
		for(j=0; j<2*i; j++){
			printf("%c ",s[j]);
		}
		printf("\n");
	}
	
	for(i=mid-1; i>1; i--){
		for(j=0; j<2*i; j++){
			printf("%c ",s[j]);
		}
		printf("\n");
	}
	
	return 0;
}
