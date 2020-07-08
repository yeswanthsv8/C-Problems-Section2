#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int i,j,r,cl,*a,*b,*c;
clrscr();

printf("Enter Rows: & Columns:");
scanf("%d %d",&r,&cl);

printf("Enter Array1 Elements:");
a=(int*)malloc(r*cl*sizeof(int));
b=(int*)malloc(r*cl*sizeof(int));
c=(int*)malloc(r*cl*sizeof(int));

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

for(i=0;i<r;i++)
{
  for(j=0;j<cl;j++)
  {
     *(c+(i*cl+j))=*(a+(i*cl+j))*(*(b+(i*cl+j)));
  }
}

printf("Multiplication of two matrix:\n");
for(i=0;i<r;i++)
{
  for(j=0;j<cl;j++)
  {
     printf("%d ",*(c+(i*cl+j)));
  }
  printf("\n");
}

}