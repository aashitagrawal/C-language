#include<stdio.h>
void main ()
{
int amt,dis,sw,a,t;
printf("Enter amount ");
scanf("%d",&amt);
printf("1 Mill\n2 Handloon\n");
scanf("%d",&sw);
switch(sw)
{
	case 1 :if(amt<1000)
	{
		a=(amt*2)/100;
		t=amt-a;
		printf("%d\n",t);
	}
	else if(amt<5000)
	{
		a=(amt*20)/100;
		t=amt-a;
		printf("%d\n",t);
	}
	else if(amt<10000)
	{
		a=(amt*40)/100;
		t=amt-a;
		printf("%d\n",t);
	}
	else if(amt>10000)
	{
		a=(amt*50)/100;
		t=amt-a;
		printf("%d\n",t);
	}
	break;
	case 2: if(amt<1000)
	{
		a=(amt*5)/100;
		t=amt-a;
		printf("%d\n",t);
	}
	else if(amt<5000)
	{
		a=(amt*25)/100;
		t=amt-a;
		printf("%d\n",t);
	}
	else if(amt<10000)
	{
		a=(amt*50)/100;
		t=amt-a;
		printf("%d\n",t);
	}
	else if(amt>10000)
	{
		a=(amt*60)/100;
		t=amt-a;
		printf("%d\n",t);
	}
	break;
	default:printf("You are wrong\n");
}
}