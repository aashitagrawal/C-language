#include<stdio.h>
struct bank
{
	char nm[20];
	int acno,bal,wd,dep;
};
void main ()
{
struct bank z[10];
int sw,t,i;
for(i=0; i<5; i++)
{
printf("Enter name ");
scanf("%s",&z[i].nm);
printf("Enter account number ");
scanf("%d",&z[i].acno);
printf("Enter current balance ");
scanf("%d",&z[i].bal);
printf("\n\n");
printf("Enter nuber\n1 Withdraw\n2 Deposit\n");
scanf("%d",&sw);
switch(sw)
{
	case 1 :printf("Enter withdraw amount ");
			scanf("%d",&z[i].wd);
			if(z[i].wd>z[i].bal)
			printf("Insufficent balance ");
			else
			{
				z[i].bal=z[i].bal-z[i].wd;
			}
			break;
	case 2 :printf("Enter deposit ");
			scanf("%d",&z[i].dep);
			z[i].bal=z[i].bal+z[i].dep;
			break;
	default:printf("Dont waste my time \n");
}
}
printf("%d\n",z[i].bal);
}