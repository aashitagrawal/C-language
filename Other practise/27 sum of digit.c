#include<stdio.h>
void main ()
{
int rem,sum,n;
printf("ENter a number ");
scanf("%d",&n);
sum=0;
while (n>0)
{
	rem=n%10;
	sum=sum+rem;
	n=n/10;
}
printf("%d \n",sum);
}