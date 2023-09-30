#include<stdio.h>
void main ()
{
float cost,dis,tc;
printf("Enter cost ");
scanf("%f",&cost);

if (cost<=2000)
{
	dis=cost*5/100;
	tc=cost-dis;
	printf("Your total cost is %f \n",tc);
}
else if (cost<=5000)
{
	dis=cost*10/100;
	tc=cost-dis;
	printf("Your total cost is %f \n",tc);
}
else if (cost<=10000)
{
	dis=cost*15/100;
	tc=cost-dis;
	printf("Your total cost is %f \n",tc);
}
else 
{
	dis=cost*20/100;
	tc=cost-dis;
	printf("Your total cost is %f \n",tc);
}
}