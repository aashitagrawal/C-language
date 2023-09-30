#include<stdio.h>
void main ()
{
int sum,i,n;
printf("Enter a number ");
scanf("%d",&n);
sum=1;
i=1;
while (i<=n)
{
	sum=sum*i;
	i++;
}
printf("%d \n",sum);
}