#include<stdio.h>
void main ()
{
int i,j,n;
printf("Enter a number ");
scanf("%d",&n);
for (i=0; i<n; i++)
{
	//printf("\nvalue of i:%d\n",i);
	for(j=0; j<i; j++)
	{
		//printf("\nvalue of j:%d\n",j);
		printf("%d",j);
	}
	printf("\n");
}
}