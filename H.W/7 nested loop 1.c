#include<stdio.h>
void main ()
{
int i,j,n;
printf("Enter a number ");
scanf("%d",&n);
for (i=1; i<=n; i++)
{
	for(j=i; j>=1; j--)
	{
		printf("%d ",j);
	}
	printf("\n");
}
}