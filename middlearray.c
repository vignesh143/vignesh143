s (28 sloc)  518 Bytes
#include <stdio.h>

void main()
{
    int a,i,j,b[a];
    printf("enter the number of  intenger:");
    scanf("%d",&a);
    printf("enter the intenger:");
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(b[i]>b[j])
            {
           a=b[i];
           b[i]=b[j];
           b[j]=a;
           
        }
    }}
    printf("\nSorted array elements:");
    for(i=0;i<a;i++)
    {
    printf("\n%d",b[i]);
    }
    
}
