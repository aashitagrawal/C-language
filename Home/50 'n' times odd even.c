#include<stdio.h>
void main ()
{
int n,i,a;
printf("Enter a number ");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	printf("Enter a number to check ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("It is even \n");
	}
	else
	{
		printf("It is odd\n");
	}
}
}