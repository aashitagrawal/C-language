#include<stdio.h>
void main ()
{
int sum,e,p,i;
sum=1;
printf("Enter Exponent ");
scanf("%d",&e);
printf("Enter Power ");
scanf("%d",&p);
for (i=1; i<=p; i++ )
{
	sum=sum*e;
}
printf("%d \n",sum);
}