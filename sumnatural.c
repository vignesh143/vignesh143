#include<stdio.h>
void main()
{
int i,n=0,a;
printf("enter the number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
   n=i+n;
}
printf("%d",n);
}
