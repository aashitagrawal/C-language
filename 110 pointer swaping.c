#include<stdio.h>
void main ()
{
int a,b,t;
a=100;
b=200;
printf("Before exchange : x = %d   y = %d\n\n",a,b);
t = a;
a = b;
b = t;
printf("After exchange : x = %d   y = %d\n\n",a,b);
}