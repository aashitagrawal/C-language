#include<stdio.h>
void main ()
{
int i,j,sumj,sumi=0,n;
printf("Enter a number ");
scanf("%d",&n);

for (i=1; i<=n; i++)
{
	sumj=0;
	for(j=1; j<=i; j++)
	{
		sumj=sumj+j;
	}
	sumi=sumj+sumi;
}
printf("%d \n",sumi);
}