#include<stdio.h>
void main ()
{
int t,i,ans;
printf("Enter a number ");
scanf("%d",&t);
for(i=1; i<=10; i++)
{
	ans=t*i;
	printf("%d * %d = %d \n",t,i,ans);
}
}