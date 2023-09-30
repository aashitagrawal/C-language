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
	printf("%f is greatest",a);
}
else if (b>a && b>c)
{
	printf("%f is greatest",b);
}
else if (c>a && c>b)
{
	printf("%f is greatest",c);
}
}