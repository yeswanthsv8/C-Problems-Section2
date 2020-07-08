#include<stdio.h>
#include<conio.h>

void main()
{
char str[20],i;
clrscr();

printf("Enter String:");
scanf("%s",str);

i=0;
while(*(str+i)!='\0')
{
  i++;
}
printf("Length Is:%d",i);
}