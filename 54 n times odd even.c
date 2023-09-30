#include<stdio.h>
void main ()
{
int n,i,f;
printf("Enter number ");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	printf("Enter number to check ");
	scanf("%d",&f);
	if(f%2==0)
	{
		printf("It is even \n");
	}
	else
	{
		printf("It is odd\n");
	}
}
}