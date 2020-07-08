#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int n,i,*a,sum=0;
float avg;
clrscr();

printf("Input:");
scanf("%d",&n);

a=(int *)malloc(n*sizeof(int));

printf("Enter Array Elements:");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
  sum=sum+a[i];
}
printf("Sum Is: %d",sum);
avg=sum/n;
printf("\nThe Average Is: %.2f",avg);


}
