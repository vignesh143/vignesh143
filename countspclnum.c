#include<stdio.h>
void main()
{
char str[50],i,c;
printf("enter the word");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if((str[i]>='.')&&(str[i]<='9')||(str[i]>='a')&&(str[i]<='z'))
{
continue;
}
else
{
    c++;
}
}
printf("%d",c+3);
}
