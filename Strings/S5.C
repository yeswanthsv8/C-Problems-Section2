#include<stdio.h>
#include<conio.h>

void main()
{
char str[20],ch;
int i=0;
clrscr();

printf("String:");
scanf("%s",str);

while(str[i]!='\0')
{
  if(str[i]>='a' && str[i]<='z')
  {
     str[i]=str[i]-32;
  }
  i++;
}
printf("%s",str);
}
