#include<stdio.h>
void main ()
{
int a[3][3],b[3][3],i,j,sum[3][3];
printf("1ST MATRIX\n");
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
printf("2ND MATRIX\n");
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		printf("Enter value ");
		scanf("%d",&b[i][j]);
	}
}
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		printf("%d ",b[i][j]);
	}
	printf("\n");
}
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		sum[i][j]=a[i][j]+b[i][j];
	}
}
printf("\n");
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		printf("%4d",sum[i][j]);
	}
	printf("\n");
}
}