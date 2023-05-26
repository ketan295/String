#include<stdio.h>

main()
{
	char c ;
	printf("Enter any character in lower case letter:");
	scanf("%c",&c);
	
	int upr=c-32;
	
	printf("Corresonding uppercase letter :%c",upr);
}