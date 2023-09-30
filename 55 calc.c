#include<stdio.h>
void main ()
{
int a,b,c,d;
do
{
printf("Enter 1st number ");
scanf("%d",&a);
printf("Enter 2nd number ");
scanf("%d",&b);
printf("Enter number \n1 Add\n2 Sub\n3 Mul\n4 Div\n5 Exit\n");
scanf("%d",&c);
	switch(c)
	{
		case 1: d=a+b;
				printf("%d\n",d);
				break;
		case 2: d=a-b;
				printf("%d\n",d);
				break;
		case 3: d=a*b;
				printf("%d\n",d);
				break;
		case 4: d=a/b;
				printf("%d\n",d);
				break;
		case 5: printf("Exiting\n");
				break;
		default:printf("You are wrong\n\n\n");
	}
}while(c!=5);
}