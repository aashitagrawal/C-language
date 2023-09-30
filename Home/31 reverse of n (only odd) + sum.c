#include<stdio.h>
void main ()
{
int n,i,sum=0;
printf("Enter a number ");
scanf("%d",&n);
i=n;
do
{
	if(i%2!=0)
	{
	printf("%d \n",i);
	sum=sum+i;
	}
	i--;
} while(i>=1);
printf("%d",sum);
}