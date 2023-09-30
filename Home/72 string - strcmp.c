#include<stdio.h>
void main ()
{
int a[10],b[10];
int c;
printf("Enter anything ");
gets(a);
printf("Enter anything ");
gets(b);
c=strcmp(a,b);
printf("%d\n",c);
if(c==0)
printf("It is same \n");
else
printf("It is not same \n");
}