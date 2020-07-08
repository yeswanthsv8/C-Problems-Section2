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
i=n/2;
j=n-1;

while(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
i++;
j--;
}

printf("Reversed 2nd Half Array Is:");
for(i=0;i<n;i++)
{
  printf("%d ",a[i]);
}

}