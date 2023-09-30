#include<stdio.h>
void main ()
{
int year,count;
float amount,price;
char code,city[10];
double root;
count=1275;
price= -235.74;
printf("%d %f \n\n",count, price);
printf("%2d\n%f\n\n",count,price);
printf("%d %f",price,count);
printf("%10dxxxx%5.2f\n\n",count,price);
printf("%s\n\n",city);
printf("%-10d %-15sn\n\n",count,city);
}