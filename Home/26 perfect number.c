#include<stdio.h>
void main ()
{
int sum,n,i;
printf("Enter a number ");
scanf("%d",&n);
sum=0;
for (i=1; i<n; i++)
{
	if (n%i==0)
	{
		sum=sum+i;
	}
}
if(sum==n)
{
	printf("It is a perfect number \n");
}
else
{
	printf("It is not a perfect number \n");
}
}