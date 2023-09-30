#include<stdio.h>
void main ()
{
char a[10],b[10];
printf("Enter your name ");
gets(a);
strcpy(b,a);
printf("%s\n",b);
}