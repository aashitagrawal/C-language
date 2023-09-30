#include<stdio.h>
void main ()
{
char string[]="CProgramming";
int c,d;
printf("\n\n");
for(c=0; c<=11; c++)
{
	d=c+1;
	printf("/%*.1s/\n",d,string);
}
printf("|------------|\n");
for(c=11; c>=0; c++)
{
	d=c+1;
	printf("/%*.1s/\n",d,string);
}
printf("------------\n");
}