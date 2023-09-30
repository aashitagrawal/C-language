#include<stdio.h>
void main()
{

	int i,j,n;
	n=5;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}