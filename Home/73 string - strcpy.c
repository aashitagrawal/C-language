#include<stdio.h>
void main ()
{
char a[10],b[10];
printf("Enter anything ");
gets(b);
strcpy(a,b);
printf("%s\n",a);
}