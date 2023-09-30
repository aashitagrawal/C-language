#include<stdio.h>
void main ()
{
	int c;
	char character,line[80];
	c=0;
	do
	{
	character=getchar();
	line[c]=character;
	c++;
	}while(character != '\n');
	c=c-1;
	line[c]='\0';
	printf("%s",line);
}