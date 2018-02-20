#include <stdio.h>
void main()
{
  int a,b=0,c,d;
  printf("Enter the numbers: ");
  scanf("%d",&a);
 
  
  
      a=b;
      
      while(a>0)
      {
          d=(c%10);
          c+=d*d*d;
          a/=10;
      }
      if(a==b)
      {
          printf(" the given number is armstrong");
       }
       else
       {
           printf(" the given number is not armstrong");
       }
       }
