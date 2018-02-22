#include <stdio.h>

void main()
{
    int a,i,b[a],min;
    printf("enter the number of  intenger:");
    scanf("%d",&a);
    printf("enter the intenger:");
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    min=b[0];
    for(i=0;i<a;i++)
    if(b[0]>b[i])
    {
        min=b[i];
        
    }
    printf("minimum value of =%d",min);
    
    }

    
