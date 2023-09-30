#include<stdio.h>
void main ()
{
char ch,str[10],i,z[5];
printf("Enter a string ");
scanf("%s",&str);
gets(z);
printf("Enter character ");
scanf("%c",&ch);
for(i=0; str[i]!='\0'; i++)
{
	if(str[i]==ch)
	{
	printf("%d\n",i);
	}
}
}