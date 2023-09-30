#include<stdio.h>
void main ()
{
int i,a[5],min;
for(i=1; i<=5; i++)
{
	printf("Enter value at %d ",i);
	scanf("%d",&a[i]);
}
min=a[1];
for(i=1; i<=5; i++)
{
	if(a[i]<min)
	{
		min=a[i];
	}
}
printf("%d\n",min);
}