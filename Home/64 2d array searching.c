#include<stdio.h>
void main ()
{
int a[3][3],i,j,b;
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		printf("Enter value ");
		scanf("%d",&a[i][j]);
	}
}
printf("Enter value to search ");
scanf("%d",&b);
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		if(a[i][j]==b)
		{
			printf("%d %d",i,j);
			break;
		}
	}
}
}