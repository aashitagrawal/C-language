#include<stdio.h>
void main ()
{
int si,p,r,t;
printf("Enter the principle amount ");
scanf("%d",&p);
printf("Enter the rate % ");
scanf("%d",&r);
printf("Enter the time in years ");
scanf("%d",&t);
si=p*r*t/100;
printf("Interest is %d \n",si);
}