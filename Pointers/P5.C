#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int n,*a,i,j,temp;
clrscr();

printf("Size:");
scanf("%d",&n);

a=(int*)malloc(sizeof(int)*n);
printf("Enter Array Elements:");

for(i=0;i<n;i++)
{
 scanf("%d",a+i);
}

i=0;
j=n-1;

while(i<j)
{
 temp=*(a+i);
 *(a+i)=*(a+j);
 *(a+j)=temp;
 i++;
 j--;
}
printf("Reversed Array Is:");
for(i=0;i<n;i++)
{
  printf("%d ",*(a+i));
}

}
