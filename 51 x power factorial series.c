#include<stdio.h>
void main ()
{
float x,f,i,j,sum,mul,p,mul2;
printf("Enter a number ");
scanf("%f",&x);
printf("Enter 2nd number ");
scanf("%f",&f);
sum=0;
for (i=1; i<=f; i++)
{
	mul=mul2=1;
	for(j=1; j<=i; j++)
	{
		mul=mul*j;
	}
	for(p=1; p<=i; p++)
	{
		mul2=mul2*x;
	}
	sum=(mul2/mul)+sum;
}
printf("%f",sum);
}