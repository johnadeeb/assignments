#include "stdio.h"

void main ()
{
    char a = 0;

	printf ("Enter an character you want to check : ");
	scanf ("%c",&a);
    switch (a)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
               {
    printf("your character %c is vowel" , a);
        break;
    
               }
        
    default:
  {
    printf("your character %c is constant" , a);
        break;
    
               }
    }

}