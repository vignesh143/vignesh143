#include<stdio.h>
void main()
{
char str[50],i,a;
printf("enter a character:");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>'A'&&str[i]<'z')
{
a++;
}
}
printf("%d",a);
}
