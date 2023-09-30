#include<stdio.h>
void main ()
{
float unit,bill;
printf("Enter units ");
scanf("%f",&unit);
if(unit<=100)
{
	bill=unit*0.4;
	printf("%f is your total cost \n",bill);
}
else if(unit<=300)
{
	bill=((unit-100)*0.6)+40;
	printf("%f is your total cost \n",bill);
}
else if (unit>300)
{
	bill=(unit-300)+160;
	printf("%f is your total cost \n",bill);
}
}