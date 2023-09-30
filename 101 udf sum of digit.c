#include<stdio.h>
int sod(int n)
{
	int sum=0,rem;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	return sum;
}
void main ()
{
int numb,ans;
printf("Enter a number ");
scanf("%d",&numb);
ans=sod(numb);
printf("%d\n",ans);
}