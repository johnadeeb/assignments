#include "stdio.h"
#include "math.h"

int k , j ; 

void prime_number(int n)
{
   int i,m=0,flag=0;      
m=n/2; 
for(i=2;i<=m;i++)    
{    
    if(n%i==0)    
    {      
    flag=1;    
    break;    
    }    
}
if (n!=1)
{
  if(flag==0)    
printf(" %d ",n); /* code */
}
    
 
}


int main ()
{
   
    printf("enter two number (intervals):\n");
    scanf("%d %d", &k ,&j );
    printf("prime numbers between %d and %d are :",k,j);
    for ( ; k < j ; k++)
    {
      prime_number(k);
    }
    
 return 0;  
}