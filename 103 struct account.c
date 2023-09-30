#include<stdio.h>
struct bank
{
	char nm[20];
	int acno,bal,wd,dep;
};
void main ()
{
struct bank z;
int sw,t;
printf("Enter name ");
scanf("%s",&z.nm);
printf("Enter account number ");
scanf("%d",&z.acno);
printf("Enter current balance ");
scanf("%d",&z.bal);
printf("\n\n");
printf("Enter nuber\n1 Withdraw\n2 Deposit\n");
scanf("%d",&sw);
switch(sw)
{
	case 1 :printf("Enter withdraw amount ");
			scanf("%d",&z.wd);
			if(z.wd>z.bal)
			printf("Insufficent balance ");
			else
			{
				z.bal=z.bal-z.wd;
			}
			break;
	case 2 :printf("Enter depsit ");
			scanf("%d",&z.dep);
			z.bal=z.bal+z.dep;
			break;
	default:printf("Dont waste my time \n");
}
printf("%d\n",z.bal);
}