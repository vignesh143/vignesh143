#include<stdio.h>
void main()
{
    int a,b=1,i,c;
    printf("enter the number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        c=a*i;
        printf("%d\n",c);
    }
}
