#include<stdio.h>
void main()
{
int c,d,e;
printf("enter two numbers");
scanf("%d%d",&c,&d);
c=c^d;
d=c^d;
c=c^d;
printf("%d\t%d",c,d);
}
