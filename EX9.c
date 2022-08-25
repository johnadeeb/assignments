#include "stdio.h"

void main ()
{
    int a,b,c = 0;

	printf ("Enter 3 numbers : \n");
	scanf ("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("lagrest number is : %d ",a);
        }
        else 
        printf("lagrest number is : %d ",c);
    }
    else 
    { if (b>c) 
    printf("lagrest number is : %d ",b);
    else 
    printf("lagrest number is : %d ",c);

    }

}