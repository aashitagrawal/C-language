#include<stdio.h>
void main ()
{
int a[10],i,v,pos,sw,b,j,n;
do
{
for(i=1; i<=6; i++)
{
	printf("Enter value at %d ",i);
	scanf("%d",&a[i]);
}
printf("Enter a number\n1 Insertion\n2 Delete\n3 Sorting\n4 Exit\n\n");
scanf("%d",&sw);
switch(sw)
{
	case 1 :printf("Enter position ");
			scanf("%d",&pos);
			printf("Enter value to be added ");
			scanf("%d",&v);
			for(i=6; i>=pos; i--)
			{
				a[i+1]=a[i];
			}
			a[pos]=v;
			for(i=1; i<=7; i++)
			printf("%d \n",a[i]);
			break;
			
	case 2 :printf("Enter postion to be deleted ");
			scanf("%d",&pos);
			for(i=pos; i<=6; i++)
			a[i]=a[i+1];
			for(i=1; i<=5; i++)
			printf("%d\n",a[i]);
			break;
			
	case 3 :for(i=1; i<=6; i++)
			{
				for(j=1; j<=5; j++)
				{
					if(a[j]>a[j+1])
					{
						b=a[j];
						a[j]=a[j+1];
						a[j+1]=b;
					}
				}
			}
			for(i=1; i<=6; i++)
			{
				printf("%d \n",a[i]);
			}
			break;
			
	case 4: printf("Exiting!!!\n\n");
			break;
			
	default:printf("Enter number again\n");
}
}while(sw!=4);
}