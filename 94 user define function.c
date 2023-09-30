#include<stdio.h>
void swap(int a, int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("%d\n",a);
	printf("%d\n",b);
}
void main ()
{
int a,b;
printf("Enter value of a ");
scanf("%d",&a);
printf("Enter value of b ");
scanf("%d",&b);
swap(a,b);
}