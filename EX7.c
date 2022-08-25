#include "stdio.h"

void main ()
{
    int a,b = 0;

	printf ("Enter an integer you want to check : ");
	scanf ("%d",&a);
    if(a%2==0)
    {
       printf ("%d is even ",a);
    }
    else printf("%d is odd",a);
}