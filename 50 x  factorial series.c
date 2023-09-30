#include<stdio.h>
void main ()
{
float x,f,i,j,sum,mul;
printf("Enter a number ");
scanf("%f",&x);
printf("Enter 2nd number ");
scanf("%f",&f);
sum=0;
for (i=1; i<=f; i++)
{
	mul=1;
	for(j=1; j<=i; j++)
	{
		mul=mul*j;
	}
	sum=(x/mul)+sum;
}
printf("%f",sum);
}