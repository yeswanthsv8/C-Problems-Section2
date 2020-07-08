#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char str[20],ch;
int n,i=0,j;
clrscr();

printf("String:");
gets(str);

n=strlen(str);
j=n-1;

while(i<j)
{
ch=str[i];
str[i]=str[j];
str[j]=ch;
i++;
j--;
}
printf("%s",str);
}
