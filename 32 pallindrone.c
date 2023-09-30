#include<stdio.h>
void main ()
{
int n,r,rem,n1;
r=0;
printf("Enter a number ");
scanf("%d",&n);
n1=n;
while (n>0)
{
	rem=n%10;
	r=(r*10)+rem;
	n=n/10;
}
printf("%d \n",r);
if (r==n1)
{
	printf("It is a pallindrome number \n");
}
else
{
	printf("it is not a pallindrome number \n");
}
}