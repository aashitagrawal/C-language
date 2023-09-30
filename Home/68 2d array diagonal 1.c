#include<stdio.h>
void main ()
{
int a[3][3],i,j,s=0;
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		printf("Enter value");
		scanf("%d",&a[i][j]);
	}
}
for(i=1; i<=3; i++)
{
	s=s+a[i][i];
}
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		printf("%d",a[i][j]);
	}
	printf("\n");
}
printf("%d\n",s);
}