#include<stdio.h>
void main ()
{
int i,num;
printf("Enter a number, till you list of even number ");
scanf("%d",&num);
for(i=1; i<=num; i++)
{
	if(i%2==0)
	{
		printf("%d \n",i);
	}
}
}