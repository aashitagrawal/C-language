#include<stdio.h>
void main ()
{
char a[10],b[10];
int c;
printf("Enter your name ");
gets(a);
printf("Enter your friend's name ");
gets(b);
c=strcmp(a,b);
printf("%d\n",c);
if(c==0)
printf("It is same\n");
else
printf("It is not same\n");
}