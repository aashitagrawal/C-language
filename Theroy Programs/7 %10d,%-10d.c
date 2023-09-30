#include<stdio.h>
void main ()
{
int m = 13245;
long n = 987654;
printf("%d\n",m);
printf("%10d\n",m);
printf("%010d",m);
printf("%-10d\n",m);
printf("%101d\n",n);
printf("%101d\n",-n);
}