#include<stdio.h>
void main ()
{
int flag=1,n,i;
printf("Enter a number ");
scanf("%d",&n);
for (i=2; i<n; i++)
{
	if(n%i==0)
	{
		printf("%d is not a prime number \n",n);
		flag=0;
		break;
	}
}
if(flag==1)
{
	printf("%d is a prime number \n",n);
}
}