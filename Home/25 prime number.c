#include<stdio.h>
void main ()
{
int flag,n,i;
flag=1;
printf("Enter a number ");
scanf("%d",&n);
for (i=2; i<n; i++)
{
	if(n%i==0)
	{
		printf("It is not a prime number \n");
		flag=0;
		break;
	}
}
if (flag==1)
{
	printf("It is prime number \n");
}
}