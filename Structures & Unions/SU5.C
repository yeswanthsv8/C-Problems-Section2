#include<stdio.h>
#include<conio.h>

union ex
{
 int a,b;
};

void main()
{
union ex u1;
clrscr();

u1.a=1;
printf("%d\n",u1.b);

u1.b=2;
printf("%d",u1.a);
}
