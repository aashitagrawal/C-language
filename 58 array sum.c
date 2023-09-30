#include<stdio.h>
void main ()
{
int i,a[10],sum=0;
for(i=1; i<=4; i++)
{
	printf("Enter a number at %d ",i);
	scanf("%d",&a[i]);
}
for(i=1;i<=4; i++)
sum=sum+a[i];
printf("%d\n\n",sum);
}