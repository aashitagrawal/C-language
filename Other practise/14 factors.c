#include<stdio.h>
void main ()
{
int f,n,i;
printf("Enter a number which you want factors ");
scanf("%d",&f);
for (i=1; i<=f; i++)
{
	if (f%i==0)
	{
		printf("%d \n",i);
	}
}
}