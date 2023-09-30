#include<stdio.h>
void main ()
{
int flag,i,n;
flag=1;
printf("ENter a number ");
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
if(flag==1)
{
	printf("It's a prime number \n");
}
}