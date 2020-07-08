#include<stdio.h>
#include<conio.h>

void main()
{
int n,*a,i,ele,flag=0;
clrscr();

printf("Size:");
scanf("%d",&n);

a=(int*)malloc(sizeof(int)*n);
printf("Enter Array Elements:");

for(i=0;i<n;i++)
{
 scanf("%d",a+i);
}
printf("Enter Element:");
scanf("%d",&ele);

for(i=0;i<n;i++)
{
  if(*(a+i)==ele)
  {
    flag=1;
    printf("At:%d",i);
    break;
  }
}

if(flag==0)
{
  printf("-1");
}

}