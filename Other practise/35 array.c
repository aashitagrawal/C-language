#include<stdio.h>
void main ()
{
int i,a[10];
for(i=1; i<=10; i++)
{
printf("Enter value at %d ",i);
scanf("%d",&a[i]);
}
for(i=1; i<=10; i++)
printf("%d \n",a[i]);
}