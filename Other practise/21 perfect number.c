#include <stdio.h>
void main ()
{
int sum,n,i;
sum=0;
printf("Enter a number ");
scanf("%d",&n);
for (i=1; i<n; i++)
{
	if (n%i==0)
	{
		sum=sum+i;
	}
}
if(sum==n)
{
	printf("It is a pefect number \n");
}
else
{
	printf("It is not a perfect number \n");
}
}