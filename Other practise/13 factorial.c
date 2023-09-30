#include<stdio.h>
void main ()
{
int mul,i,n;
printf("Enter a number to factorial ");
scanf("%d",&n);
mul=1;
for (i=1; i<=n; i++)
{
	mul=mul*i;
}
printf("%d \n",mul);
}