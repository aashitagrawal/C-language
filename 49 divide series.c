#include<stdio.h>
void main ()
{
float x,n,i,sum;
printf("Enter number ");
scanf("%f",&n);
printf("Enter 2nd number ");
scanf("%f",&x);
sum=0;
for (i=1; i<=n; i++)
{
	sum=sum+i/x;
}
printf("%f",sum);
}