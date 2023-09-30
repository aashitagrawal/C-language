#include<stdio.h>
void main ()
{
int unit,total;
printf("Enter units ");
scanf("%d",&unit);
if(unit<=100)
{
	total=unit*0.4;
	printf("Your cost is %d \n",total);
}
else if (unit<=300)
{
	total=((unit-100)*0.6)+40;
	printf("Your cost is %d \n",total);
}
else
{
	total=((unit-300)*1)+160;
	printf("Your cost is %d \n",total);
}
}