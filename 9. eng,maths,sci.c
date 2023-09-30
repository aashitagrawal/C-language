#include<stdio.h>
void main ()
{
float eng,maths,sci,total,avg;
printf("Enter marks of eng ");
scanf("%f",&eng);
printf("Enter marks of maths ");
scanf("%f",&maths);
printf("Enter marks of sci ");
scanf("%f",&sci);
total=eng+maths+sci;
printf("Total marks %f \n",total);
avg=total/3;
printf("Average marks %f \n",avg);
if(avg >= 80)  
{
	printf("A grade! \n");
}
else if (avg >=60)
{
	printf("B grade! \n");
}
else if (avg >=40)
{
	printf("C grade! \n");
}
else
{
	printf("D grade! \n");
}
}