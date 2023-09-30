#include <stdio.h>
void main ()
{
int f,i;
printf("Enter a number to find its factors ");
scanf ("%d",&f);
for (i=1; i<=f; i++)
{
	if(f%i==0)
	{
		printf("%d \n",i);
	}
}
}