#include<stdio.h>
void main ()
{
int i,n;
printf("Enter a number, till you want list of odd numbers ");
scanf("%d",&n);
for (i=1; i<=n; i++)
{
	if (i%2!=0)
	{
		printf("%d \n",i);
	}
}
}