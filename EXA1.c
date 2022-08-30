#include "stdio.h"


int main ()
{
    int r , c ;

    float R [2][2],T [2][2],S [2][2];

    printf("enter your 1ST matrix\n");
     for( r=0 ; r<2 ; r++ )
     { 
        for (c=0; c<2; c++)
        {
        printf("enter your matrix element [%d][%d]\n", r, c);
        scanf ("%f", & R[r][c]);
        }
     }

     printf("enter your 2ND matrix\n");
     for(r=0;r<2;r++)
     { 
        for (c = 0; c < 2; c++)
        {
        printf("enter your matrix element [%d][%d]\n", r, c);
        scanf ("%f", & T [r][c]);
        }
     }
     printf("sum of matrix:\n");
     for(r=0;r<2;r++)
    { 
        for (c = 0; c < 2; c++)
        { 
         S[r][c]=R[r][c]+T[r][c];
        printf("%f\t", S[r][c]);
        }
     printf("\r\n");
    }


 return 0;  
}