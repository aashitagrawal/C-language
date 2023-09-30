#include<stdio.h>
void main ()
{
int j,n,i;
printf("Enter a number ");
scanf("%d",&n);
for (i=1; i<n; i++)
{
	for (j=i; j<i; j++)
	{
		printf("%d",j);
	}
	printf("\n");
}
}