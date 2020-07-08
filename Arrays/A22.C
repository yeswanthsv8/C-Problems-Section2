#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


void main()
{
int i,j,r,cl,*a,*b;
clrscr();

printf("Enter Rows: & Columns:");
scanf("%d %d",&r,&cl);

printf("Enter Array Elements:");
a=(int*)malloc(r*cl*sizeof(int));
b=(int*)malloc(r*cl*sizeof(int));

for(i=0;i<r;i++)
{
  for(j=0;j<cl;j++)
  {
    scanf("%d",a+(i*cl+j));
  }
}
printf("Transpose Matrix Is:\n");

for(i=0;i<r;i++)
{
  for(j=0;j<cl;j++)
  {
    *(b+(i*cl+j))= *(a+j*cl+i);
    printf("%d ",*(b+i*cl+j));
  }
  printf("\n");
}

}