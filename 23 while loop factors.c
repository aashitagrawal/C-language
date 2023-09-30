#include<stdio.h>
void main ()
{
int i,f;
printf("Enter a number ");
scanf("%d",&f);
i=1;
while (i<=f)
{
	if(f%i==0)
	printf("%d \n",i);
	i++;
}
}