#include<stdio.h>
void main ()
{
int n,i,sum;
printf("Enter a number ");
scanf("%d",&n);
for (i=1; i<=n; i++)
{
	sum=i*i;
	printf("%d ",sum);
}
}