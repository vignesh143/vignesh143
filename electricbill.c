#iclude<stdio.h>
void main()
{
int a;
float b,c;
printf("enter the unit: ");
scanf("%d",&a);
if(a<=50)
{
b=(a*1);
}
else if(50<a<=100)
{
b=(50*1)+((a-50)*1.5);
}
else if(100>a<=200)
{
b=(50*1)+(50*1.5)+((a-100)*2));
}
else if(a>250)
{
b=(50*1)+(100*1.5)+(100*2)+((a-250)*2.5));
}
c=b+(b*1);
printf("the rate of a unit is %d",c);
}

