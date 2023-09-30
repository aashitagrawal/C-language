#include<stdio.h>
void main ()
{
int j,i,n;
printf("Enter a number ");
scanf("%d",&n);
for (i=1; i<=n; i++)
{
	for (j=n; j>n-i; j--)
	{
		printf("%d",j);
	}
	printf("\n");
}
}