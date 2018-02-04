#include <stdio.h>

void main()
{ 
    char v;
    ascii(v);
}
int ascii(int v)
{
    printf("enter the character:");
    scanf("%c",&v);
    printf("%d",v);
}
