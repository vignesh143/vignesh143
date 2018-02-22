#include <stdio.h>

void main()
{
    int a,i,b[a],max;
    printf("enter the number of  intenger:");
    scanf("%d",&a);
    printf("enter the intenger:");
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    max=b[0];
    for(i=0;i<a;i++)
    if(b[0]<b[i])
    {
        max=b[i];
        
    }
    printf("maximum value of =%d",max);
    
    }
