#include "stdio.h"
#include "string.h"


int main ()
{
    int  i , lenght ; 
    char teeext [200];
    char t=0;
    printf("enter your text :");
    gets(teeext);
    lenght=strlen(teeext)-1;
    for ( i = 0; i <= lenght; i++)
    {
        t=teeext[i];
        teeext[i]=teeext[lenght];
        teeext[lenght]=t; 
        lenght--;
    
    }
   printf("\nreveres string is : %s",teeext); 
    
 return 0;  
}