#include<stdio.h>
void main ()
{
int rev,rem,n,n1;
rev=0;
printf("ENter a number ");
scanf("%d",&n);
n1=n;
while (n>0)
{
	rem=n%10;
	rev=(rev*10)+rem;
	n=n/10;
}
if(rev==n1)
{
	printf("It is a pallindrome no. \n");
}
else
{
	printf("It is not a pallindrome no. \n");
}
}