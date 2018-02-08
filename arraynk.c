#include<stdio.h>
void main()
{
    int i,a,b,sum=0;
    int array[5];
    printf("enter the size of array");
    scanf("%d",&a);
    printf("how many value do you want to find");
    scanf("%d",&b);
    printf("enter the array");
    for(i=0;i<a;i++)
    {
        scanf("%d",&array[i]);
        }
        for(i=0;i<b;i++)
        {
            sum+=array[i];
        }
        printf("%d",sum);
        
    
}
