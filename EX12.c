#include "stdio.h"

void main ()
{
    int a,i = 0;
    int sum=1;

	printf ("Enter an integer : \n");
	scanf ("%d",&a);
    if (a>=0)
    {
        if (a==0||a==1)
        {
            printf("your factorial number is %d ",sum);
        }

    for (i = 1; i <= a; i++)
    {
        sum=i*sum;
    }
    printf ("sum = %d ",sum);
    }
    
   else 
   printf("Error !!! factorial of negative number dose not exist");
}