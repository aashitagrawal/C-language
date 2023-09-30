#include<stdio.h>
void main ()
{
int j,i,n;
printf("Enter a numer ");
scanf("%d",&n);
for (i=0; i<n; i++)
{
	for (j=i; j<n; j++)
	{
		printf("%d ",j);
	}
	printf("\n");
}
}