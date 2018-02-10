#include <stdio.h>

void main()
{
  int a[3],b,c,*p,i;
  printf("enter the array value:");
  scanf("%d",&p);
  for(i=0;i<3;i++,p++)
  {
      scanf("%d",&a[i]);
  }
for(i=0;i<3;i++,p++)
{
    p=a;
    printf("%d\n",p);
}
    
}
