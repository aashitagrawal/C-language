#include<stdio.h>
void main ()
{
int i,a[10],j,b;
for(i=1; i<=6; i++)
{
	printf("Enter value at %d ",i);
	scanf("%d",&a[i]);
}
for(i=1; i<=6; i++)
{
	for(j=1; j<=5; j++)
	{
		if(a[j]>a[j+1])
		{
			b=a[j];
			a[j]=a[j+1];
			a[j+1]=b;
		}
	}	
}
for(i=1; i<=6; i++)
{
	printf("%d \n",a[i]);
}
}