#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int j,n,i,*a,ele;
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
      for(j=i;j<n;j++)
      {
	 a[j]=a[j+1];
      }
      n--;
      break;
   }
}

printf("Now The Array Is:");
for(i=0;i<n;i++)
{
  printf("%d ",a[i]);
}

}