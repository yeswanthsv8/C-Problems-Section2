#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int n,i,*a;
clrscr();

printf("Input:");
scanf("%d",&n);

a=(int *)malloc(n*sizeof(int));

printf("Enter Array Elements:");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
printf("Array Elements:");
for(i=0;i<n;i++)
{
  printf("%d ",a[i]);
}

}
