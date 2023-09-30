#include<stdio.h>
void main ()
{
char a[10];
int b;
printf("Enter anything \n");
gets(a);
b=strlen(a);
printf("%d \n",b);
}