#include "stdio.h"


int main ()
{
  int r , c , q,w;

    float  A[5][5], T[5][5];

    printf("enter your rows and columns of matrix:\n");
    scanf("%d %d",&q,&w);
    printf("enter your matrix\n");
     for( r=0 ; r<q ; r++ )
     { 
        for (c=0; c<w; c++)
        {
        printf("enter your matrix element [%d][%d]\n", r, c);
        scanf ("%f", &A[r][c]);
        }
     }

     printf("enterd matrix:\n");
     for(r=0;r<q;r++)
    { 
        for (c = 0; c < w; c++)
        { 
        printf("%f\t", A[r][c]);
        }
     printf("\r\n\n");
    }
    printf("transpose matrix:\n");
     for(r=0;r<q;r++)
    { 
        for (c = 0; c < w; c++)
        { 
        T[r][c]=A[c][r];    
        printf("%f\t", T[r][c]);
        }
     printf("\r\n\n");
    }

 return 0;  
}