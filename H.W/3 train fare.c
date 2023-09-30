#include<stdio.h>
void main ()
{
float age,dist;
printf("Enter your age ");
scanf("%f",&age);
printf("Enter distance in km ");
scanf("%f",&dist);
if (age<=10 && dist<=10)
{
	printf("Your Fare is Rs.5 \n");
}
else if (age<=10 && dist<=50)
{
	printf("Your Fare is Rs.20 \n");
}
else if (age<=10 && dist>50)
{
	printf("Your Fare is Rs.50 \n");
}
else if (age<=60 && dist<=10)
{
	printf("Your Fare is Rs.10 \n");
}
else if (age<=60 && dist<=50)
{
	printf("Your Fare is Rs.40 \n");
}
else if (age<=60 && dist>50)
{
	printf("Your Fare is Rs.80 \n");
}
else if (age>60 && dist<=10)
{
	printf("Your Fare is Rs.4 \n");
}
else if (age>60 && dist<=50)
{
	printf("Your Fare is Rs.15 \n");
}
else if (age>60 && dist>50)
{
	printf("Your Fare is Rs.35 \n");
}
}