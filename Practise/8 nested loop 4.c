#include<stdio.h>
void main ()
{
int k,n,j,i;
printf("Enter a number ");
scanf("%d",&n);
k=1;
for(i=0; i<n; i++)
{
	for(j=0; j<i; j++)
	{
		printf("%d ",k);
		k++;
	}
	printf("\n");
}
}