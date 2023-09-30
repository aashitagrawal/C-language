#include<stdio.h>
void main ()
{
int n,i,sum;
printf("Enter a number ");
scanf("%d",&n);
sum=1;
i=1;
do
{
	sum=sum*i;
	i++;
} while (i<=n);
printf("%d \n",sum);
}