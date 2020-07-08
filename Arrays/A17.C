#include<stdio.h>
#include<conio.h>

void main()
{
int *a,*b,*c,n1,n2,i,j;
clrscr();

printf("Enter Size1: & Size2:");
scanf("%d %d",&n1,&n2);

a=(int*)malloc(sizeof(int)*n1);
b=(int*)malloc(sizeof(int)*n2);
c=(int*)malloc(sizeof(int)*(n1+n2));

printf("Array Elements 1:");
for(i=0;i<n1;i++)
{
  scanf("%d",&a[i]);
}

printf("Array Elements 2:");
for(i=0;i<n2;i++)
{
  scanf("%d",&b[i]);
}

printf("Merging Of 1st & 2nd Arrays Is:");

i=0;
for(j=0;j<n1;j++)
{
  c[i]=a[j];
  i++;
}
for(j=0;j<n2;j++)
{
  c[i]=b[j];
  i++;
}
for(i=0;i<n1+n2;i++)
{
  printf("%d ",c[i]);
}

}
