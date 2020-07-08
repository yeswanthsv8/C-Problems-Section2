#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int n,*a,i,j,temp;
clrscr();

printf("Size:");
scanf("%d",&n);

a=(int*)malloc(sizeof(int)*n);
printf("Enter Array Elements:");

for(i=0;i<n;i++)
{
 scanf("%d",a+i);
}

for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
     if(*(a+i)>*(a+j))
     {
	 temp=*(a+i);
	 *(a+i)=*(a+j);
	 *(a+j)=temp;
     }
  }
}

printf("In Ascending Order Is:");
for(i=0;i<n;i++)
{
  printf("%d ",*(a+i));
}

}
