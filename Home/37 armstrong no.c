#include<stdio.h>
void main ()
{
int rem,sum,n,n1;
printf("Enter a number ");
scanf("%d",&n);
n1=n;
sum=0;
while (n>0)
{
	rem=n%10;
	sum=sum+(rem*rem*rem);
	n=n/10;
}
printf("%d \n",sum);
if(sum==n1)
{
	printf("It is a armstrong no. \n");
}
else
{
	printf("It is not a armstrong no. \n");
}
}