#include<stdio.h>
void main ()
{
int sum,i,n;
printf("Enter a number you want to sum up ");
scanf("%d",&n);
sum=0;
for (i=1; i<=n; i++)
{
	sum=sum+i;
	printf("%d \n",sum);
}
printf("%d \n",sum);
}