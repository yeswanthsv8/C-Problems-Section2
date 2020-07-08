#include<stdio.h>
#include<conio.h>

void main()
{
int n,*a,i,sum=0;
clrscr();

printf("Size:");
scanf("%d",&n);

a=(int*)malloc(sizeof(int)*n);
printf("Enter Array Elements:");

for(i=0;i<n;i++)
{
 scanf("%d",a+i);
 sum=sum+*(a+i);
}
printf("Sum Is:%d",sum);

}