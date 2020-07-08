#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int n,i,*a,max,smax;
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
smax=a[1];
for(i=0;i<n;i++)
{
    if(a[i]>max)
    {
      smax=max;
      max=a[i];
    }
}
printf("Second Largest Element Is: %d",smax);

}
