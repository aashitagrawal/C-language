#include<stdio.h>
void main ()
{
int pos,rep,i,a[5];
for(i=1; i<=5; i++)
{
	printf("Enter value at %d ",i);
	scanf("%d",&a[i]);
}
printf("Enter pos ");
scanf("%d",&pos);
printf("Enter value to be replaced ");
scanf("%d",&rep);
a[pos]=rep;
for(i=1; i<=5; i++)
{
	printf("%d \n",a[i]);
}
}