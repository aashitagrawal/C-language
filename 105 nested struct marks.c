#include<stdio.h>
struct stud
{
	char nm[20];
	int rno;
	
	struct marks
	{
		int m1,m2,m3;
		float t,p;
	}m;
};
void main ()
{
	struct stud s;
	printf("Enter name ");
	scanf("%s",&s.nm);
	printf("Enter rollno. ");
	scanf("%d",&s.rno);
	printf("Enter marks in English ");
	scanf("%d",&s.m.m1);
	printf("Enter marks in Maths ");
	scanf("%d",&s.m.m2);
	printf("Enter marks in Science ");
	scanf("%d",&s.m.m3);
	s.m.t=s.m.m1+s.m.m2+s.m.m3;
	s.m.p=s.m.t/3;
	printf("%f\n",s.m.t);
	printf("%f\n",s.m.p);
}