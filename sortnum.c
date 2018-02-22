#include <stdio.h>

void main()
{
    int a,i,j,c,b[a],min;
    printf("enter the number of  intenger:");
    scanf("%d",&a);
    printf("enter the intenger:");
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(b[i]<b[j])
            {
          c=b[i];
          b[i]=b[j];
          b[j]=c;
        }
    }
    }
for(i=0;i<a;i++)
{
    printf("%d",b[i]);
    
}
}
