#include<stdio.h>
void main ()
{
int sum,i,n;
printf("ENter a number ");
scanf("%d",&n);
sum=1;
for(i=1; i<=n; i++)
{
	sum=sum*i;
}
printf("%d \n",sum);
}