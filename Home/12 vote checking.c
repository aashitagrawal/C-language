#include<stdio.h>
void main ()
{
int age;
printf("Check if you can vote or not! \n");
printf("Enter your age ");
scanf("%d",&age);
if(age >= 18)
{
	printf("You can vote \n");
}
else
{
	printf("You cannot vote \n");
}
}