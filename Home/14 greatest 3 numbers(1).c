#include<stdio.h>
void main ()
{
float a,b,c;
printf("Enter the value of a");
scanf("%f",&a);
printf("Enter the value of b");
scanf("%f",&b);
printf("Enter the value of c");
scanf("%f",&c);
if ( a > b)
{
	if( a > c)
	{
		printf("%f is greatest \n",a);
	}
	else
	{
		printf("%f is greatest \n",c);
	}
}
else
{
	if ( b > c)
	{
		printf("%f is greatest \n",b);
	}
	else
	{
		printf("%f is greatest",c);
	}
}
}