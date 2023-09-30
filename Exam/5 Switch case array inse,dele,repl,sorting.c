#include<stdio.h>
void main ()
{
int sw,i,a[10],ins,pos,del,b,j;
for(i=1; i<=5; i++)
{
	printf("Enter value at %d ",i);
	scanf("%d",&a[i]);
}
do
{
printf("1 Insertion\n2 Deletion\n3 Replacement\n4 Sorting\n5 Exit");
scanf("%d",&sw);
switch (sw)
{
	case 1: printf("Enter position ");
			scanf("%d",&pos);
			printf("Enter value to be added ");
			scanf("%d",&ins);
			for(i=5; i>=pos; i--)
			{
				a[i+1]=a[i];
			}
			a[pos]=ins;
			for(i=1; i<=6; i++)
			{
				printf("%d\n",a[i]);
			}
			break;
	case 2: printf("Enter position to be deleted ");
			scanf("%d",&del);
			for(i=del; i<=5; i++)
				a[i]=a[i+1];
			for(i=1; i<=4; i++)
				printf("%d\n",a[i]);
			break;
	case 3: for(i=1; i<=5; i++)
			printf("Enter postion to be deleted ");
			scanf("%d",&pos);
			for(i=pos; i<=5; i++)
			a[i]=a[i+1];
			for(i=1; i<=4; i++)
			printf("%d\n",a[i]);
			break;
	case 4: for(i=1; i<=5; i++)
			{
				for(j=1; j<=4; j++)
				{
					if(a[j]>a[j+1])
					{
						b=a[j];
						a[j]=a[j+1];
						a[j+1]=b;
					}
				}	
			}
			for(i=1; i<=5; i++)
			{
				printf("%d \n",a[i]);
			}
			break;
	case 5: printf("Okay! Exiting\n");
	}
}while(sw!=5);
}