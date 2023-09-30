#include<stdio.h>
void main ()
{
int sum,i,n;
sum=1;
printf("Enter a number ");
scanf("%d",&n);
i=1;
while(i<=n)
{
	sum=sum*i;
	i++;
}
printf("%d \n",sum);
}