#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int j,n,i,*a,temp;
clrscr();

printf("Input:");
scanf("%d",&n);

a=(int *)malloc(n*sizeof(int));

printf("Enter Array Elements:");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
i=0;
j=n/2-1;

while(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
i++;
j--;
}

printf("Reversed 1st Half Array Is:");
for(i=0;i<n;i++)
{
  printf("%d ",a[i]);
}

}