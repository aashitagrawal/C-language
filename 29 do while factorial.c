#include<stdio.h>
void main ()
{
int n,i,sum;
sum=1;
printf("Enter a number ");
scanf("%d",&n);
i=1;
do
{
	sum=sum*i;
	i++;
} while (i<=n);
printf("%d \n",sum);
}