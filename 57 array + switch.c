#include<stdio.h>
void main ()
{
int i,a[20];
char ch;
for(i=0; i<10; i++)
{
	printf("Enter a number at %d ",i);
	scanf("%d",&a[i]);
}
printf("Do you want to print the number Y or N\n\n");
fflush(stdout);
scanf("%c",&ch);
switch (ch)
{
	case 'Y': 
	case 'y':
	for(i=0; i<10; i++)
	printf("%d \n",a[i]);
	break;
	case 'N':
	case 'n':
	printf("Okay! Goodbye\n");
	break;
	default:
	printf("Goodbye!\n\n\n\n");
}
}