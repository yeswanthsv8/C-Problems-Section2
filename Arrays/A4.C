#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int n,i,*a,ele,flag=0;
clrscr();

printf("Input:");
scanf("%d",&n);

a=(int *)malloc(n*sizeof(int));

printf("Enter Array Elements:");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}

printf("Enter Element:");
scanf("%d",&ele);

for(i=0;i<n;i++)
{
   if(a[i]==ele)
   {
      flag=1;
      printf("Location At: %d",i);
   }
}
if(flag==0)
{
  printf("Not Found.");
}


}
