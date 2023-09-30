#include<stdio.h>
void main ()
{
int n,i,flag;
flag=1;
printf("Enter a number ");
scanf("%d",&n);
for(i=2; i<n; i++)
{
	if(n%i==0)
	{
		printf("it is not prime number \n");
		flag=0;
		break;
	}
}
if (flag==1)
{
	printf("It is a prime number \n");
}
}