#include<stdio.h>
void main()
{
    int i,a=0,b=1,c=0,n;
    printf("enter the numbers:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
        
    }
}
