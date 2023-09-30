#include<stdio.h>
void main ()
{
int i,a[10],r,pos;
for(i=1; i<=5; i++)
{
	printf("Enter a value at %d ",i);
	scanf("%d",&a[i]);
}
printf("Enter position ");
scanf("%d",&pos);
printf("Enter value to be added ");
scanf("%d",&r);
for(i=5; i>=pos; i--)
{
	a[i+1]=a[i];
}
a[pos]=r;
for(i=1; i<=6; i++)
printf("%d \n",a[i]);
}