#include<stdio.h>
#define pi 3.14
void main ()
{
int ch;
float r,ac,l,b,ar,cc;
printf("Enter a number to find it's answer \n1 Area of circle \n2 Area of Rectangle \n3 Circumference of circle \n");
scanf("%d",&ch);
switch (ch)
{
	case 1: printf("Enter radius ");
			scanf("%f",&r);
			ac=pi*r*r;
			printf("%f \n",ac);
	break;
	
	case 2: printf("Enter length ");
			scanf("%f",&l);
			printf("Enter breadth ");
			scanf("%f",&b);
			ar=l*b;
			printf("%f \n",ar);
	break;
	
	case 3: printf("Enter a radius ");
			scanf("%f",&r);
			cc=2*pi*r*r;
			printf("%f \n",cc);
	break;
	
	default: printf("Enter number between 0 to 4, you idiot \n");
}
}