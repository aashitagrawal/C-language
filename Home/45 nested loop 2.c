#include<stdio.h>
void main ()
{
int j,i,n;
printf("Enter a number ");
scanf("%d",&n);
for (i=n; i>=0; i--)
{
	for (j=i; j<n; j++)
	{
		printf("%d ",j);
	}
	printf("\n");
}
}