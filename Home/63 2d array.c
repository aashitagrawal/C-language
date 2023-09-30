#include<stdio.h>
void main ()
{
int i,a[3][3],j;
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		printf("Enter value ");
		scanf("%d",&a[i][j]);
	}
}
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
}
}