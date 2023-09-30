#include<stdio.h>
void main ()
{
int n,f,i,sum=1;
printf("Enter a number ");
scanf("%d",&n);
for (i=1; i<=n; i++)
{
	sum=1/(sum*i)+sum;
}
printf("%d ",sum);
}