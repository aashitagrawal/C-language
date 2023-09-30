#include<stdio.h>
void main ()
{
int sw,c;
char a[10],b[10],d[50];
printf("1 Concatenate(Join)\n2 Compare\n3 Copy\n4 Length\n");
scanf("%d",&sw);
switch(sw)
{
	case 1: gets(d);
			printf("Enter 1st name ");
			gets(a);
			printf("Enter 2nd name ");
			gets(b);
			strcat(a,b);
			printf("%s",a);
			break;
			
	case 2: gets(d);
			printf("Enter your name ");
			gets(a);
			printf("Enter your friend's name ");
			gets(b);
			c=strcmp(a,b);
			printf("%d\n",c);
			if(c==0)
			printf("It is same \n");
			else
			printf("It is not same \n");
			break;
			
	case 3: gets(d);
			printf("Enter anything ");
			gets(a);
			strcpy(b,a);
			printf("%s\n",b);
			break;
			
	case 4: gets(d);
			printf("Enter anyting ");
			gets(a);
			c=strlen(a);
			printf("%d \n",c);
			break;
			
	default: printf("Enter number again \n");
}
}