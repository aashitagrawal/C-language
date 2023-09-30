#include<stdio.h>
void main ()
{
int ch;
printf(" Select one number \n");
printf("1. Airways \n");
printf("2. Railways \n");
printf("3. Car \n");
printf("4. Bus \n");
scanf("%d",&ch);
switch (ch)
{
	case 1: printf("Thank you for selecting Airways.\nYour total fare is Rs.15000/- \n");
	break;
	
	case 2: printf("Thank you for selecting Railways.\nYour total fare is Rs.1500/- \n");
	break;
	
	case 3: printf("Thank you for selecting Car.\nYour total fare is Rs.800/- \n");
	break;
	
	case 4: printf("Thank you for selecting Bus.\n Your total fare is Rs.1000/- \n");
	break;
	
	default: printf("Select number between 1 to 4. \n");
}
}