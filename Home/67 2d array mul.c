#include<stdio.h>
void main ()
{
int a[3][3],b[3][3],mul[3][3];i,j,k,s;
printf("1ST MATRIX\n");
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		printf("Enter value ");
		scanf("%d",&a[i][j]);
	}
}
printf("2ND MATIRX\n");
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		printf("Enter value ");
		scanf("%d",&b[i][j]);
	}
}
for(k=1; k<=3; k++)
{
	for(i=1; i<=3; i++)
	{
		s=0;
		for(j=1; j<=3; j++)
		{
			s=s+(a[k][j]*b[j][i]);
		}
		mul[k][i]=s;
	}
}
printf("\n");
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		printf("%d ",mul[i][j]);
	}
	printf("\n");
}
}