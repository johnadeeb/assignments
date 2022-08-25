#include "stdio.h"

void main ()
{
    char a = 0;

	printf ("Enter your character : \n");
	scanf ("%c",&a);
    if (a>=65&&a<=122)
    {
        printf("your character: %c is  alphabet ", a);
    }
    else 
    printf("your character: %c is not alphabet ", a);

}