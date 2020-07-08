#include<stdio.h>
#include<conio.h>

struct marks
{
char name[50];
int m1,m2,m3,m4,m5;
float avg;
};

void main()
{
int n,i,sum=0,avg;
struct marks m[100];

clrscr();

printf("No Of Students:");
scanf("%d",&n);
clrscr();

for(i=1;i<=n;i++)
{
  printf("Name:");
  scanf("%s",&m[i].name);
  printf("\nEnter Five Subject Marks:");
  scanf("%d %d %d %d %d",&m[i].m1,&m[i].m2,&m[i].m3,&m[i].m4,&m[i].m5);
  sum=m[i].m1+m[i].m2+m[i].m3+m[i].m4+m[i].m5;
  m[i].avg=sum/5;
}

for(i=1;i<=n;i++)
{
  printf("The Average Of %d Student Is: %f\n",i,m[i].avg);
}

}