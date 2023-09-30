#include<stdio.h>
#define pi 3.142857142857143
int arear(int l, int b)
{
	int a;
	a=l*b;
	return a;
}
int areac(int r)
{
	int a;
	a=pi*r*r;
	return a;
}
int areacc(int r)
{
	int a;
	a=2*pi*r*r;
	return a;
}
void main ()
{
int a,b,r,sw;
printf("Select one number \n1 Area of circle \n2 Area of Rectangle \n3 Circumference of circle \n");
scanf("%d",&sw);
switch (sw)
{
	case 1 :printf("Enter length ");
			scanf("%d",&a);
			printf("Enter breadth ");
			scanf("%d",b);
			r=arear(a,b);
			printf("%d\n",r);
			break;
	case 2 :printf("Enter radius ");
			scanf("%d",&r);
			a=areac(r);
			printf("%d\n",a);
			break;
	case 3 :printf("Enter a radius ");
			scanf("%d",&r);
			a=areacc(r);
			printf("%d\n",a);
			break;
	default :printf("You are wrong\n");
}
}