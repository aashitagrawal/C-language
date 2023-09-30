#include <stdio.h>
void main ()
{
int sum,n,i;
sum=0;
printf("Enter a number ");
scanf("%d",&n);
i=1;
while (i<=n)
{
	if(n%i==0)
	{
		printf("%d \n",i);
	}
i++;
}
}