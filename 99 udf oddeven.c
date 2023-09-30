#include<stdio.h>
void oe(int a)
{
	if(a%2==0)
	printf("It is even\n");
	else
	printf("It is odd\n");
}
void main ()
{
int a,b;
printf("Enter number ");
scanf("%d",&a);
oe(a);
}