#include<stdio.h>
void main ()
{
int vow=0,con=0,i=0;
char str[30];
printf("Enter a string ");
gets(str);
while(str[i]!='\0')
{
	if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
	vow++;
	else
	con++;
	i++;
}
printf("\nNumber of Vowels - %d\n",vow);
printf("\nNumber of consonants - %d\n",con);
printf("\nTotal characters - %d\n\n",i);
}