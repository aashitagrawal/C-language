#include<stdio.h>
void main ()
{
int n,r,rem;
r=0;
printf("Enter a number to reverse it ");
scanf("%d",&n);
while (n>0)
{
	rem=n%10;
	r=(r*10)+rem;
	n=n/10;

}
printf("%d \n",r);
}