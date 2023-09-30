#include<stdio.h>
void main ()
{
int sum,n,i;
printf("Enter a number to find it's factorial ");
scanf("%d",&n);
sum=1;
for (i=1; i<=n; i++)
{
	sum=sum*i;
}
printf("%d \n",sum);
}