#include<stdio.h>
#include<conio.h>

void main()
{
int n,*a,i,min;
clrscr();

printf("Size:");
scanf("%d",&n);

a=(int*)malloc(sizeof(int)*n);
printf("Enter Array Elements:");

for(i=0;i<n;i++)
{
 scanf("%d",a+i);
}
printf("Smallest Elements Is:");
min=*(a);
for(i=0;i<n;i++)
{
    if(*(a+i)<min)
     {
	min=*(a+i);
     }
}
printf("%d",min);
}