#include<stdio.h>
void main ()
{
int rem,sum,n,n1;
printf("Enter a number ");
scanf("%d",&n);
n=n1;
sum=0;
while (n>0)
{
	rem=n%10;
	sum=(sum*10)+rem;
	n=n/10;
}
if (sum==n1)
{
	printf("It is a pallindrome number \n");
}
else
{
	printf("It is a pallindrome number \n");
}
}