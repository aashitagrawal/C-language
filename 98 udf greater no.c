#include<stdio.h>
int greater(int a, int b)
{
	if(a>b)
	printf("%d is greater\n",a);
	else
	printf("%d is greater\n",b);
	return a;
}
void main ()
{
int a,b,z;
printf("Enter 1st number ");
scanf("%d",&a);
printf("Enter 2nd number ");
scanf("%d",&b);
z=greater(a,b);
}