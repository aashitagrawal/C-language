#include<stdio.h>
void main ()
{
int i,a[10],b;
for(i=1; i<=5; i++)
{
	printf("Enter value at %d ",i);
	scanf("%d",&a[i]);
}
printf("Enter value to search ");
scanf("%d",&b);
for(i=1; i<=5; i++)
{
	if(a[i]==b)
	{
		printf("%d \n",i);
		break;
	}
}
}