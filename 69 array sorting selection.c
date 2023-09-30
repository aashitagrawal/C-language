#include<stdio.h>
void main ()
{
int i,a[10],j,min,pos,b;
for(i=1; i<=6; i++)
{
	printf("Enter value at %d ",i);
	scanf("%d",&a[i]);
}
for(i=1; i<=6; i++)
{
min=a[i];
pos=i;
	for(j=i; j<=6; j++)
	{
		if(min>a[j])
		{
			min=a[j];
			pos=j;
		}
	}
	b=a[i];
	a[i]=a[pos];
	a[pos]=b;
}
for(i=1; i<=6; i++)
{
	printf("%d \n",a[i]);
}
}