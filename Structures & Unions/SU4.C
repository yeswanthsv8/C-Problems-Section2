#include<stdio.h>
#include<conio.h>

struct Emp
{
int wages,days,bp;
float hra,np;
};

void main()
{
int n,i;
char name[20];
struct Emp e[100];

clrscr();

printf("No Of Employees:");
scanf("%d",&n);
clrscr();

for(i=1;i<=n;i++)
{
  printf("Name:");
  scanf("%s",name);
  printf("Wages: & Days:");
  scanf("%d %d",&e[i].wages,&e[i].days);
  e[i].bp=e[i].wages*e[i].days;
  e[i].hra=e[i].bp*0.12;
  e[i].np=e[i].bp+e[i].hra;
}

for(i=1;i<=n;i++)
{
  printf("The NetPay Of %d Employees Is: %f\n",i,e[i].np);
}

}