#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
int i=0,j=0,n1,n2;
char str1[20],str2[20];
clrscr();

printf("String1: & String2:");
scanf("%s %s",str1,str2);

n1=strlen(str1);
n2=strlen(str2);

while(j<=n2)
{
  str1[n1+i]=str2[j];
  i++;
  j++;
}
printf("%s",str1);
}