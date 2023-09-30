#include<stdio.h>
void main ()
{
char a[10],b[10];
printf("Enter first name ");
gets(a);
printf("Enter second name ");
gets(b);
printf("%s \n",strcat(a,b));
}