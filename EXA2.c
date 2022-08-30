#include "stdio.h"


int main ()
{
    int r,d;
    float  D[50];
    float sum=0,avg;
    printf("enter the number of data : \n");
    scanf ("%d", &d);
    for (r = 1 ; r<=d ; r++)
    {
        printf("enter number [%d]\n", r);
        scanf ("%f", &D[r]);
        sum=sum+D[r];
        avg=sum/r;
    }
printf("Average = %f\n",avg );
 return 0;  
}