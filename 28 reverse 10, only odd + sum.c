#include<stdio.h>
void main ()
{
int i,sum;
sum=0;
i=10;
do
{
	if(i%2!=0)
	{
		printf("%d \n",i);
	sum=sum+i;
	}
	i--;
} while (i>=1);
	printf("%d \n",sum);
}