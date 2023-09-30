#include<stdio.h>
void main ()
{
int a[3][3],b[3][3],i,j,k,s,c[3][3];
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		printf("A-Enter value ");
		scanf("%d",&a[i][j]);
	}
}
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		printf("B-Enter value ");
		scanf("%d",&b[i][j]);
	}
}
for(k=1;k<=3; k++)
{
	for(i=1; i<=3; i++)
	{
		s=0;
		for(j=1; j<=3; j++)
		{
			s=s+(a[k][j]*b[j][i]);
		}
		c[k][i]=s;
	}
}
printf("\n");
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		printf("%d ",c[i][j]);
	}
	printf("\n");
}
}