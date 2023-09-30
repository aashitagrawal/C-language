#include<stdio.h>
void main ()
{
int ex,po,pow,i;
printf("Enter exponent ");
scanf("%d",&ex);
printf("Enter power ");
scanf("%d",&po);
pow=1;
for (i=1; i<=po; i++)
{
	pow=pow*ex;
}
printf("%d \n",pow);
}