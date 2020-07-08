#include<stdio.h>
#include<conio.h>

void main()
{
char str[20];
int i=0,count=0;
clrscr();

printf("String:");
scanf("%s",str);

while(str[i]!='\0')
{
  count++;
  i++;
}
printf("Length Of String: %d",count);
}

