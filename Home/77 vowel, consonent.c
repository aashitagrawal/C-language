#include<stdio.h>
void main ()
{
int vow=0, con=0, i=0;
char str[30];
printf("ENter a string ");
scanf("%s",&str);
while(str[i]!='\0')
{
	if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
	vow++;
	else
	con++;
	i++;
}
printf("\nNumber of vowels - %d\n",vow);
printf("Number of consoants - %d\n",con);
printf("TOtal character - %d\n",i);
}