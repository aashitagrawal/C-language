#include<stdio.h>
void main ()
{
int j,i,n;
printf("Enter a number ");
scanf("%d",&n);
for (i=0; i<n; i++)
{
	for(j=i; j<n; j++)
	{
		printf("*");
	}
	printf("\n");
}
for (i=0; i<n; i++)
{
	for (j=0; j<=i; j++)
	{
		printf("*");
	}
	printf("\n");
}
}