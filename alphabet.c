#include<stdio.h>
void main()
{
char c;
printf("enter the character:");
scanf("%c",&c);
if((c>='a' && 'z'<=c)||(c>='A' && 'Z'<=c))
{
printf("it is alaphabet:");
}
else
{
printf("it is not alaphabet:");
}
}
