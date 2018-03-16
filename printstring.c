#include <stdio.h>
#include<conio.h>
void main()
{
    
  char str[50];
  int k,i;
  clrscr();
  printf("enter the string:");
  scanf("%s",&str);
  printf("enter the limit");
  scanf("%s",&k);
  for(i=1;i<=k;i++)
  {
      printf("%s",str);
  }
  getch();
    }
