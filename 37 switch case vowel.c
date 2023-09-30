#include<stdio.h>
void main ()
{
char ch;
printf("Enter a character ");
scanf("%c",&ch);
switch (ch)
{
	case 'a':
	case 'e': 
	case 'i':
	case 'o':
	case 'u':
	printf("It is a vowel \n");
	break;
	default : printf("%c is a constant \n",ch);
}
}