#include<stdio.h>
#include<conio.h>

void main()
{
int n,*a,i;
clrscr();

printf("Size:");
scanf("%d",&n);

a=(int*)malloc(sizeof(int)*n);
printf("Enter Array Elements:");

for(i=0;i<n;i++)
{
 scanf("%d",a+i);
}
printf("Array Elements Are:");
for(i=0;i<n;i++)
{
  printf("%d ",*(a+i));
}

}