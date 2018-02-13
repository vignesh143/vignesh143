#include<stdio.h> 

void main(){

           int a,b,rem,i;

           printf("enter the first number:\n");

           scanf("%d",&a);

           printf("enter the final number :\n");

           scanf("%d",&b);

           printf("\n The odd numbers between %d and %d are ",a,b); 

           for(i=a; i<=b; ++i){

               rem = i % 2;

               if(rem != 0)

               printf("\n  %d",i);

           }
}
    
