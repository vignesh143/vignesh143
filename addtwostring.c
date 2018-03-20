#include<stdio.h>
void main()
{
char str[30],str1[40];
int i,j,c=0;
printf("enter 2 strings");
gets(str);
gets(str1);
for(i=0;str[i]!='\0';i++)
{
for(j=0;str1[j]!='\0';j++)
{
if(str[i]==str1[j])
{
c=0;
}
else
{
c=1;
}
}
}
if(c==0)
{
puts(str);
}
else
{
puts(str1);
}
}addtwo
