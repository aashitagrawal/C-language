#include<stdio.h>
int area(int l, int b)
{
	int a;
	a=l*b;
	return a;
}
void main ()
{
int l,b,z;
printf("Enter value of length ");
scanf("%d",&l);
printf("Enter value of breadth ");
scanf("%d",&b);
z=area(l,b);
printf("%d\n",z);
}