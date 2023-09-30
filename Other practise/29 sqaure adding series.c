#include<stdio.h>
void main ()
{
int sum,po,p,i,e,n;
printf("Enter exponent ");
scanf("%d",&e);
printf("Enter power ");
scanf("%d",&n);
sum=0;
for (i=1; i<=n; i++)
{
	po=1;
	for (p=1; p<=i; p++)
	{
		po=po*e;
	}
	sum=sum+po;
}
printf("%d \n",sum);
}