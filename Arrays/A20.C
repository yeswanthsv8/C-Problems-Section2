#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int r,cl,i,j,*a,*b,*c;
clrscr();

printf("Enter Rows: & Columns:");
scanf("%d %d",&r,&cl);

printf("Enter Array1 Elements:");
a=(int*)malloc(sizeof(int)*r*cl);
b=(void*)malloc(sizeof(int)*r*cl);
c=(void*)malloc(sizeof(int)*r*cl);

for(i=0;i<r;i++)
{
   for(j=0;j<cl;j++)
   {
      scanf("%d",a+(i*cl+j));
   }
}

printf("Enter Array2 Elements:");

for(i=0;i<r;i++)
{
   for(j=0;j<cl;j++)
   {
      scanf("%d",b+(i*cl+j));
   }
}
printf("Sum Of Two Matrix Is:\n");
for(i=0;i<r;i++)
{
  for(j=0;j<cl;j++)
  {
     *(c+(i*cl+j))=*(a+(i*cl+j))+*(b+(i*cl+j));
     printf("%d ",*(c+(i*cl+j)));
  }
  printf("\n");
}

}
