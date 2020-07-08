#include<stdio.h>
#include<conio.h>

struct length
{
int feet;
int inches;
};

void main()
{
struct length l1,l2,l3;
clrscr();

printf("First Length:");
scanf("%d : %d",&l1.feet,&l1.inches);

printf("Second Length:");
scanf("%d : %d",&l2.feet,&l2.inches);

l3.inches=l1.inches+l2.inches;
l3.feet=l1.feet+l2.feet;

if(l3.inches>11)
{
  l3.feet++;
  l3.inches=l3.inches-12;
}
printf("%d : %d",l3.feet,l3.inches);
}