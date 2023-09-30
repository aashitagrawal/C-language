#include<stdio.h>
void main ()
{
int a[10],i,pos;
for(i=1; i<=5; i++)
{
	printf("Enter value at %d ",i);
	scanf("%d",&a[i]);
}
printf("Enter position ");
scanf("%d",&pos);
for(i=pos; i<=5; i++)
{
	a[i]=a[i+1];
}
for(i=1; i<=4; i++)
{
	printf("%d \n",a[i]);
}
}