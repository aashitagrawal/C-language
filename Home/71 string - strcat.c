#include<stdio.h>
void main ()
{
char a[10],b[10];
printf("Enter first name ");
gets(a);
printf("Enter last name ");
gets(b);
strcat(a,b);
printf("%s\n",a);
}