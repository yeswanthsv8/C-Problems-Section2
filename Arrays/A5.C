#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int n,i,*a,max;
clrscr();

printf("Input:");
scanf("%d",&n);

a=(int *)malloc(n*sizeof(int));

printf("Enter Array Elements:");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}

max=a[0];
for(i=0;i<n;i++)
{
    if(a[i]>max)
    {
      max=a[i];
    }
}
printf("Largest Element Is: %d",max);

}
