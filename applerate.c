#include <stdio.h>

void main()
{
  int t,b,c,d;
  printf("enter the total rate:");
  scanf("%d",&t);
  printf("enter the apple rate\n");
  scanf("%d",&b);
  printf("enter the bannana rate\n");


  scanf("%d",&c);
  c=t-(b*2);
  d=c/12;
  printf("the cost of one bannana is %d",d);
 
}
