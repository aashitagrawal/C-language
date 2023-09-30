#include<stdio.h>
void main ()
{
char a[5][10],i;
for(i=1; i<=5; i++)
{
	printf("Enter string %d ",i);
	scanf("%s",&a[i]);
}
for(i=1; i<=5; i++)
{
	printf("%s\n",a[i]);
}
}