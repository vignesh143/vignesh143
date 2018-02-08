#include<stdio.h>
void main()
{
    int base,exponent;
    int answer=1;
    printf("enter the base value:");
    scanf("%d",&base);
    printf("enter the exponent:");
    scanf("%d",&exponent);
    while(exponent!=0)
    {
        answer*=base;
        --exponent;
    }
    printf("%d",answer);
    
    }
