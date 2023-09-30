#include<stdio.h>
void main ()
{
int km,m,cm,ft,inch;
printf("enter value in kilometer ");
scanf("%d",&km);
m=km*1000;
printf("%dm \n",m);
cm=km*100000;
printf("%dcm \n",cm);
ft=km*1000/30;
inch=km*1000/3;
printf("%dft \n",ft);
printf("%dinch \n",inch);
}