#include<stdio.h>
void main ()
{
int f,l,c,n,i;
printf("Enter a number ");
scanf("%d",&n);
f=1;
l=1;
i=1;
while(i<n)
{
	printf("%d ",f);
	c=f+l;
	f=l;
	l=c;
	i++;
}
}