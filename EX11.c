#include "stdio.h"

void main ()
{
    int a,sum,i = 0;

	printf ("Enter an integer : \n");
	scanf ("%d",&a);
    for (i = 1; i <= a; i++)
    {
        sum=i+sum;
    }
    printf ("sum = %d ",sum);
}