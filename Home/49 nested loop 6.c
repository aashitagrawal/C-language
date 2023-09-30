#include<stdio.h>
void main ()
{
int n,j,i;
printf("Enter a number ");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
	for(j=i; j<=n; j++)
	{
		printf("* ");
	}
	printf("\n");
}
for(i=1; i<=n; i++)
{
	for(j=1; j<=i; j++)
	{
		printf("* ");
	}
	printf("\n");
}
}