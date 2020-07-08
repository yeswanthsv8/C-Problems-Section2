#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int n,i,*a,key;
clrscr();

printf("Input:");
scanf("%d",&n);

a=(int *)malloc(n*sizeof(int));

printf("Enter Array Elements:");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}

printf("Enter Key Elements:");
scanf("%d",&key);

printf("Elements Are:");
for(i=0;i<n;i++)
{
    if(a[i]<key)
    {
      printf("%d ",a[i]);
    }
}

}
