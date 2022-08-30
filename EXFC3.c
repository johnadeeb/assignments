#include "stdio.h"
#include "math.h"


int POWER_NUMBER(int b,int p)
{
 if (p!=0)
 {
    return (b*POWER_NUMBER(b,p-1));
 }
 else
 return 1;
}


int main ()
{
   int k , j ;
    printf("enter your base number :\n");
    scanf("%d", &k);
    printf("enter your power number (postive):");
    scanf("%d", &j);
    printf(" %d^%d = %d",k,j,POWER_NUMBER(k,j));

 return 0;  
}