#include "stdio.h"
#include "math.h"

int k ; 
int s=1;
void factorial_number(int n)
{
 s=s*n;
 n--;
 if (n!=0)
 {
    factorial_number(n);
 }
 
}


int main ()
{
   
    printf("enter postive number :");
    scanf("%d", &k);
    factorial_number(k);
    printf("factorial of %d : %d",k,s);
    
 return 0;  
}