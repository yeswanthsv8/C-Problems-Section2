#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int n,i,*a,min,smin;
clrscr();

printf("Input:");
scanf("%d",&n);

a=(int *)malloc(n*sizeof(int));

printf("Enter Array Elements:");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}

min=a[0];
smin=a[1];
for(i=0;i<n;i++)
{
    if(a[i]<min)
    {
      smin=min;
      min=a[i];
    }
}
printf("Second Smalllest Element Is: %d",smin);

}
