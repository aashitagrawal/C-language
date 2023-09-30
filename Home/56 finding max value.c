#include<stdio.h>
void main ()
{
int a[5],i,max;
for(i=1; i<=5; i++)
{
	printf("Enter value at %d ",i);
	scanf("%d",&a[i]);
}
max=a[1];
for(i=1; i<=5; i++)
{
	if(a[i]>max)
	{
		max=a[i];
	}
}
printf("%d\n",max);
}