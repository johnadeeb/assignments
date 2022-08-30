#include "stdio.h"
#include "string.h"


int main ()
{
    int counter=1 , i ; 
    char teeext [200];
    printf("enter your text :\n");
    gets(teeext);
    for ( i = 1; teeext[i]!='\0' ; i++)
    {
       counter++;
    }
    
   printf("length of string = %d :\n",counter); 
    
 return 0;  
}