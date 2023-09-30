#include<stdio.h>
int add(int a, int b)
{
	int s;
	s=a+b;
	return s;	
}
int sub(int a, int b)
{
	int su;
	su=a-b;
	return su;	
}
int mul(int a, int b)
{
	int m;
	m=a*b;
	return m;	
}
int div(int a, int b)
{
	int d;
	d=a/b;
	return d;	
}
void main ()
{
int sw,y,z,i;
printf("Enter value of a ");
scanf("%d",&y);
printf("Enter value of b ");
scanf("%d",&z);
printf("Enter a number\n1 Add\n2 Sub\n3 Mul\n4 Div\n");
scanf("%d",&sw);
switch(sw)
{
	case 1 : i=add(y,z);
			printf("%d\n",i);
			break;
	case 2 : i=sub(y,z);
			printf("%d\n",i);
			break;
	case 3 : i=mul(y,z);
			printf("%d\n",i);
			break;
	case 4 : i=div(y,z);
			printf("%d\n",i);
			break;
	default : printf("Enter number again \n\n\n\n\n\n\n\n\n");
}
}