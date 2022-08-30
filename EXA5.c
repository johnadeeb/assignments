#include "stdio.h"


int main ()
{
  int r , location , value, N;

    int A[40];

    

    printf("enter number of elements from 1 to 40 :\n");
    scanf("%d",&N);
    for (r=0; r<N; r++)
        {
        printf("enter your array of elements [%d]\n", r+1);
        scanf ("%d", &A[r]);
        }
if (N<41&&N>0)
{
   for(r=0;r<N;r++)
    { 
        
        printf("%d\t", A[r]);
        
    }
    printf("\n enter the element to be searched: ");
    scanf("%d",&value);
     for(r=0;r<N;r++)
    { 
        if (A[r]==value)
        {
            printf("\nnumber found at the location = %d",r+1);
        }
        else 
        location=0;
    
        
    }
    if (location==0)
    {
        printf("data not found");
    }
    
}
else 
printf("you entered wrong number");
    

 return 0;  
}