#include<stdio.h>
void main ()
{
int ch;
printf("Enter a number\n1 Airways\n2 Railways\n3 Bus\n4 Car \n");
scanf("%d",&ch);
switch (ch)
{
	case 1: printf("Your fare is Rs.15000/- \n");
	break;
	case 2: printf("Your fare is Rs.1500/- \n");
	break;
	case 3: printf("Your fare is Rs.500/- \n");
	break;
	case 4: printf("Your fare is Rs.400/- \n");
	break;
	default: printf("Enter a number between 0 to 4, you idiot \n");
}
}