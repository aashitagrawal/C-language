#include<stdio.h>
void main ()
{
float eng,maths,sci,total,avg;
printf("Enter your marks of Eng ");
scanf("%f",&eng);
printf("Enter your marks of Maths ");
scanf("%f",&maths);
printf("Enter your marks of Sci ");
scanf("%f",&sci);
total=eng+maths+sci;
printf("Total marks %f \n",total);
avg=total/3;
printf("Average %f \n",avg);
if (avg>=80)
{
	printf("Grade - A \n");
}
else if (avg>=60)
{
	printf("Grade - B \n");
}
else if (avg>=40)
{
	printf("Grade - C \n");
}
else
{
	printf("Grade - D \n");
}
}