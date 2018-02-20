#include<stdio.h>
void main()
{
    int a,b=1,i;
    printf("enter the number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=b*i;
    }
printf("%d\n",b);
}
