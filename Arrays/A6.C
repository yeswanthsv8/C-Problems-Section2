#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int n,i,*a,min;
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
for(i=0;i<n;i++)
{
    if(a[i]<min)
    {
      min=a[i];
    }
}
printf("Smallest Element Is: %d",min);

}
