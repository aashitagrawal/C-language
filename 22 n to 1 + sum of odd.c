#include<stdio.h>
void main ()
{
int n,i;
printf("Enter a number ");
scanf("%d",&n);
i=n;
while (i>=1)
{
	if (i%2!=0)
	printf("%d \n",i);
	i--;
	
}
}