#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int i,n,*a,rot,temp,j;
clrscr();

printf("Input:");
scanf("%d",&n);

printf("Enter Array Elements:");
a=(int*)malloc(n*sizeof(int));

for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
printf("Rotation:");
scanf("%d",&rot);

for(i=0;i<rot;i++)
{
  temp=a[0];
  for(j=0;j<n;j++)
  {
    a[j]=a[j+1];
  }
  a[n-1]=temp;


}
for(i=0;i<n;i++)
{
  printf("%d ",a[i]);
}

}
