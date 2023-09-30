#include<stdio.h>
void main ()
{
float tc,unit;
printf("Enter units");
scanf("%f",&unit);
if (unit<=100)
{
	tc=unit*0.4;
	printf("Yout total amount is %f",tc);
}
else if (unit<=300)
{
	tc=((unit-100)*.6)+40;
	printf("Your total amount is %f",tc);
}
else if (unit>300)
{
	tc=((unit-300)*1)+160;
	printf("Your total amount is %f",tc);
}
}