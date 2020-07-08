#include<stdio.h>
#include<conio.h>

struct time
{
int hours;
int minutes;
};

void main()
{
struct time t1,t2,t3;
clrscr();

printf("First Time:");
scanf("%d : %d",&t1.hours,&t1.minutes);

printf("Second Time:");
scanf("%d : %d",&t2.hours,&t2.minutes);

t3.hours=t1.hours+t2.hours;
t3.minutes=t1.minutes+t2.minutes;

if(t3.minutes>59)
{
  t3.hours++;
  t3.minutes=t3.minutes-60;
}
printf("%d : %d",t3.hours,t3.minutes);
}