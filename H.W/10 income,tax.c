#include<stdio.h>
void main ()
{
int inc,tax,t;
printf("Enter your annual income ");
scanf("%d",&inc);
if(inc<100000)
{
	printf("%d\n",inc);
}
else if(inc<500000)
{
	tax=(inc*10)/100;
	t=inc-tax-1000;
	printf("%d\n",t);
}
else if(inc<800000)
{
	tax=(inc*20)/100;
	t=inc-tax-5000;
	printf("%d\n",t);
}
else if(inc>800000)
{
	tax=(inc*30)/100;
	t=inc-tax-10000;
	printf("%d\n",t);
}
}