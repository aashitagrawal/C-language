#include<stdio.h>
void main ()
{
int i,a[10],pos,r;
for(i=1; i<=5; i++)
{
	printf("Enter value at %d ",i);
	scanf("%d",&a[i]);
}
printf("Enter postion to be deleted ");
scanf("%d",&pos);
for(i=pos; i<=5; i++)
a[i]=a[i+1];
for(i=1; i<=4; i++)
printf("%d\n",a[i]);
}