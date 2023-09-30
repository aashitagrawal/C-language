#include<stdio.h>
void main ()
{
int a,b;
printf("Check which number is greater \n");
printf("Enter 1st number ");
scanf("%d",&a);
printf("Enter 2nd number ");
scanf("%d",&b);
if(a > b)
{
printf("%d is greater",a);
}
else
{
printf("%d is greater \n",b);
}
}