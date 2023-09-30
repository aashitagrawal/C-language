#include<stdio.h>
struct marks
{
	char name[20];
	int rollno,m1,m2,m3;
	float total,per;
};
void main ()
{
struct marks a[10];
int i;
for(i=0; i<3; i++)
{
printf("Enter full name ");
gets(a[i].name);
printf("Enter  roll no ");
scanf("%d",&a[i].rollno);
printf("Enter marks of english ");
scanf("%d",&a[i].m1);
printf("Enter marks of maths ");
scanf("%d",&a[i].m2);
printf("Enter marks of science ");
scanf("%d",&a[i].m3);
a[i].total=a[i].m1+a[i].m2+a[i].m3;
a[i].per=a[i].total/3;

}
for(i=0;i<3;i++)
{
printf("%s\n",a[i].name);
printf("%d\n",a[i].rollno);
printf("%d\n",a[i].m1);
printf("%d\n",a[i].m2);
printf("%d\n",a[i].m3);
printf("%f\n",a[i].total);
printf("%f\n",a[i].per);
}
}