#include "stdio.h"

void main ()
{
    float a,b = 0;
    char s = 0;
	printf ("slect switch '+' '-' '/' '*' : \n");
	scanf ("%c",&s);
    printf("enter your two operands");
    scanf("%f %f",&a,&b);
    switch (s)
    {
    case '+':
       {
        printf("%f+%f= %f",a,b,a+b);
       } 
        break;
    case '-':
    {
        printf("%f-%f= %f",a,b,a-b);
    }
        
        break;
    case '*':
    {printf("%f*%f= %f",a,b,a*b);}
    break;
    case '/':
    {
        if (b!=0)
        printf("%f/%f= %f",a,b,a/b);
    else printf("infinte number");    
        break;
    }
    
    default:
    printf("error");
        break;
    }
   
}