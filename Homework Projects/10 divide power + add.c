#include<stdio.h>
void main ()
{
int sum,n,p,po,e,i;
sum=0;
printf("Enter a exponent ");
scanf("%d",&e);
printf("Enter power ");
scanf("%d",&n);
for (i=1; i<=n; i++)
{
	po=1;
	for (p=1; p<=i; p++)
	{
		po=e/po;
	}
	sum=sum+po;
}
printf("%d \n",sum);
}