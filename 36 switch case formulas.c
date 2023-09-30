#include<stdio.h>
#define pi 3.14
void main ()
{
float r,ac,l,b,ar,cc;
int ch;
printf("Select one number \n1 Area of circle \n2 Area of Rectangle \n3 Circumference of circle \n");
scanf("%d",&ch);
switch(ch)
{
	case 1: printf("Enter value of radius ");
			scanf("%f",&r);
			ac=pi*r*r;
			printf("%f \n",ac);
	break;
	
	case 2: printf("Enter value of length ");
			scanf("%f",&l);
			printf("Enter value of breadth ");
			scanf("%f",&b);
			ar=l*b;
			printf("%f \n",ar);
	break;
	
	case 3: printf("Enter value of radius ");
			scanf("%f",&r);
			cc=2*pi*r*r;
			printf("%f \n",cc);
	break;
	
	default : printf("Enter a number between 1 to 3 \n");
			
}
}