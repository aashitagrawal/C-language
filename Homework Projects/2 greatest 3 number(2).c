#include<stdio.h>
void main ()
{
float a,b,c;
printf("Enter value of a");
scanf("%f",&a);
printf("Enter value of b");
scanf("%f",&b);
printf("Enter value of c");
scanf("%f",&c);
if (a>b && a>c)
{
	printf("%f is greatest \n",a);
}
else if (b>a && b>c)
{
	printf("%f is greatest \n",b);
}
else if (c>a && c>b)
{
	printf("%f is greatest \n",c);
}
}