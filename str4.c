#include<stdio.h>
#include<string.h>

main()
{
	char s[100] ;
	int i,length;
	
	printf("Enter any string in lowercase string :");
	gets(s);
	
	 length=strlen(s);
	 
     for(i=0;i<=length;i++)
     {
     	s[i]=s[i]-32;
     }
     printf("\nCorresonding uppercase string :");
     puts(s);
    
}