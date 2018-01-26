#include<stdio.h>
void main ()
{
int number;
printf("enter the number :");
scanf("%d",&number);
if(number==0)
{
printf("your number is zero");
}
else if(number>1)
{
printf("your number is positive");
}
else if(number<1)
{
printf("your number is negative");
}
}
