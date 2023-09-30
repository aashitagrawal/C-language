#include<stdio.h>
void main ()
{
int a,b,c,d,e,f,g;
a=55;
b=73;
c=a+b;
d=a-b;
e=a*b;
f=a/b;
g=a+b-a*b/a;
printf("Sum is %d \n",c);
printf("Subtraction is %d \n",d);
printf("Multiplication is %d \n",e);
printf("Division is %d \n",f);
printf("Mix - %d \n",g);
}