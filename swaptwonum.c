#include <stdio.h>

void main()
{
int a=10,b=5;
printf("%d%d\n",a,b); 

    fun (a,b);
}
int fun(c,d)
{
    c=c+d;
    d=c-d;
    c=c-d;
    printf("%d%d",c,d);
}
