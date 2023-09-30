#include<stdio.h>
void main ()
{
float I,p,r,t,A;
printf("Enter principle amount - ");
scanf("%f",&p);
printf("Enter rate - ");
scanf("%f",&r);
printf("Enter time in years - ");
scanf("%f",&t);
I=p*r*t/100;
printf("Your interest amount is %f \n",I);
A=p+I;
printf("Your total amount is %f \n",A);
}