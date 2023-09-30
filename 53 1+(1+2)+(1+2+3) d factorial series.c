#include<stdio.h>
void main ()
{
float i,j,sumj,sumi=0,n,f,a,sumf;
printf("Enter a number ");
scanf("%f",&n);
f=n;
for(a=1; a<f; a++)
{
	sumf=0;
	sumf=sumf+a;
}
for (i=1; i<=n; i++)
{
	sumj=0;
	for(j=1; j<=i; j++)
	{
		sumj=sumj+j;
	}
	sumi=(sumj+sumi)/sumf;
}
printf("%f \n",sumi);
}