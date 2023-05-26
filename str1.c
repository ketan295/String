#include<stdio.h>

main()
{
	char c ;
	printf("Enter any character in upper case :");
	scanf("%c",&c);
	
	int lwr=c+32;
	
	printf("Corresonding lowercase letter :%c",lwr);
}