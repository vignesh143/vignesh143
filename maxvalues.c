#include<stdio.h>
void main()
{
int a[10],i,max=a[0];
printf("enter the number:");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
}

printf("%d",max);
}
