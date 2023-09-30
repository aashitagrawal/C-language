#include<stdio.h>
int com(int a)
{
	int b;
	if(a<=10000)
	{
		b=(a*10)/100;
	}
	else if(a<=50000)
	{
		b=(a*20)/100;
	}
	else if(a>50001)
	{
		b=(a*30)/100;
	}
	return b;
}
void main ()
{
int sal,comm;
printf("Enter salary ");
scanf("%d",&sal);
comm=com(sal);
printf("%d\n",comm);
}