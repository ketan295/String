#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
     char str[30];
     printf("Enter the string :");
     gets(str);
     int i,length;
     
     length=strlen(str);
     
    str[0] = toupper(str[0]);
    printf("String in Titlecase is :%c",str[0]);
 
    
    if(strlen(str) >= 1) 
    {
        for(i = 1; i <=length; ++i)
       {
            str[i] = tolower(str[i]);
            if(str[i -1] == ' ')
            {
                str[i] = toupper((int)str[i]);
            }
             printf("%c",str[i]);
 
       }
    }
   
   
}