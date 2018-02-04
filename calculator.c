#include <stdio.h>
int g;
void main()
{
int c;
int d;
scanf("%d",&c);
scanf("%d",&d);
add(c,d);
sub(c,d);
mul(c,d);
div(c,d);
}
int add(int a,int b)
{
    g=a+b;
     printf("%d\n",g);
    
}
int sub(int a,int b)
{
    g=a-b;
    printf("%d\n",g);
}
int mul(int a,int b)
{
    g=a*b;
    printf("%d\n",g);
}
int div(int a,int b)
{
    g=a/b;
    printf("%d\n",g);
}
