#include<stdio.h>
void main ()
{
float sale,comm;
printf("Enter sales amount of a person \n");
scanf("%f",&sale);
if(sale > 10000)
{
	comm=sale*20/100;
	printf("Commission is %f \n",comm);
}
else
{
	comm=sale*10/100;
	printf("Commission is %f \n",comm);
}
}