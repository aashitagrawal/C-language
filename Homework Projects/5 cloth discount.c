#include<stdio.h>
void main ()
{
float cost,total;
printf("Enter cost ");
scanf("%f",&cost);
if (cost<=2000)
{
	total=cost-(cost*5/100);
	printf("Your total cost is %f \n",total);
}
else if (cost<=5000)
{
	total=cost-(cost*25/100);
	printf("Your total cost is %f \n",total);
}
else if (cost<=10000)
{
	total=cost-(cost*35/100);
	printf("Your total cost is %f \n",total);
}
else
{
	total=cost-(cost*50/100);
	printf("Your total cost is %f \n",total);
}
}