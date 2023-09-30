#include<stdio.h>
void main ()
{
int p,i,e,n,sum,po;
sum=0;
printf("Enter exponent ");
scanf("%d",&e);
printf("Enter power ");
scanf("%d",&n);
for (i=1; i<=n; i++)
{
	po=1;
	for(p=1; p<=i; p++)
	{
		po=po*e;
	}
	sum=sum+po;
}
printf("%d \n",sum);
}