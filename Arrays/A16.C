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

printf("1st Half Ascen & 2nd Half Descen:");
for(i=0;i<n/2;i++)
{
  for(j=i+1;j<n;j++)
  {
     if(a[i]>a[j])
     {
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
     }
  }
}

for(i=n/2;i<n;i++)
{
   for(j=i+1;j<n;j++)
   {
      if(a[i]<a[j])
      {
	 temp=a[i];
	 a[i]=a[j];
	 a[j]=temp;
      }
   }
}

for(i=0;i<n;i++)
{
  printf("%d ",a[i]);
}

}