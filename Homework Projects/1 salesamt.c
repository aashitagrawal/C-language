#include<stdio.h>
void main ()
{
float sale,a,b,c,d;
printf("Enter sales amount of a person \n");
scanf("%f",&sale);
if(sale > 10000)
{
	a=sale*20/100;
	b=sale+a;
	printf("Commission is %f \nTotal amount is %f \n",a,b);
}
else
{
	c=sale*10/100;
	d=sale+c;
	printf("Commission is %f \nTotal amount is %f \n",c,d);
}
}