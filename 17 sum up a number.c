#include<stdio.h>
void main ()
{
int i,n,sum;
printf("Enter a number ");
scanf("%d",&n);
sum=0;
for(i=1; i<=n; i++)
{
	sum=sum+i;
}
printf("%d \n",sum);
}