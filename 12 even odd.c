#include<stdio.h>
void main ()
{
int num;
printf("Enter a number ");
scanf("%d",&num);
if(num%2==2)
{
	printf("%d is even \n",num);
}
else
{
	printf("%d is odd \n",num);
}
}