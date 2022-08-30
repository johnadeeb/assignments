#include "stdio.h"
#include "string.h"


int main ()
{
    int counter=0 , i , lenght ; 
    char teeext [200];
    char t=0;
    printf("enter your text :\n");
    gets(teeext);
    printf("enter a character to find frequency :\n");
    scanf("%c",&t);
    lenght=strlen(teeext);
    for ( i = 0; i < lenght; i++)
    {
        if (teeext[i]==t)
        {
         counter++;   /* code */
        }
         
    
    }
   printf("frequency of %c = %d :\n",t,counter); 
    
 return 0;  
}