#include<stdio.h>
void main ()
{
int i,n,flag;
flag=1;
printf("Enter a number");
scanf("%d",&n);
i=2;
while (i<n)
{
	if(n%i==0)
	{
		printf("It is not prime number \n");
		flag=0;
		break;
	}
}
if (flag==1)
{
	printf("It is prime number \n");
}
}