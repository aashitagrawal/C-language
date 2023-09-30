#include<stdio.h>
void main ()
{
char address;
printf("Enter address\n");
scanf("%[^\n]",address);
printf("%-80s",address);
}