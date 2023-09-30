#include<stdio.h>
void main ()
{
int n,i,sum;
printf("Enter a number ");
scanf("%d",&n);
sum=0;
i=1;
while (i<n)
{
	if(n%i==0)
	{
		sum=sum+i;

	}
	i++;
}
if (sum==n)
{
	printf("it is perfect number \n");

}
else
{
	printf("It is not a perfect number \n");
}
}