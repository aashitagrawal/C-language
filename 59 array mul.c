#include<stdio.h>
void main ()
{
int i,a[4],mul=1;
for(i=1; i<=4; i++)
{
printf("Enter value at %d ",i);
scanf("%d",&a[i]);
}
for(i=1; i<=4; i++)
mul=mul*a[i];
printf("%d\n",mul);
}