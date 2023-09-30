#include<stdio.h>
void main ()
{
int sum=1,e,p,i;
printf("Enter exponent ");
scanf("%d",&e);
printf("Enter power ");
scanf("%d",&p);
for (i=1; i<=p; i++)
{
	sum=sum*e;
}
printf("%d \n",sum);
}