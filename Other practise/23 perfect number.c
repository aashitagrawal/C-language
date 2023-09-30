#include<stdio.h>
void main ()
{
int sum=0,i,n;
printf("ENter a number ");
scanf("%d",&n);
for (i=1; i<n; i++)
{
	if(n%i==0)
	{
		sum=sum+i;
	}
}
if(sum==n)
{
	printf("It is perfect number \n");
}
else
{
	printf("It is not a perfect number \n");
}
}