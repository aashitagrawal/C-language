#include<stdio.h>
void main ()
{
int n,j,i;
printf("Enter a number ");
scanf("%d",&n);
for (i=0; i<n; i++)
{
	for(j=0; j<i; j++)
	{
		printf("%d",j);
	}
	printf("\n");
}
}