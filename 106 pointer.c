#include<stdio.h>
void main ()
{
int x,y;
int *ptr;
x = 10;
ptr=&x;
y=*ptr;
printf("Value of x is %d\n",x);
printf("%d is stored at address %u\n",x,&x);
printf("%d is stored at address %u\n",*&x, &x);
printf("%d is stored at address %u\n",*ptr, ptr);
printf("%d is stored at address %u\n",ptr, &ptr);
printf("%d is stored at address %u\n\n",y,&y);
*ptr=25;
printf("\nNow x = %d\n",x);
}