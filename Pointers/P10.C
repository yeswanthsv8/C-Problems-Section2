#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char str[20];
int i,j;
clrscr();

printf("Enter String:");
gets(str);

i=0;
j=0;

for(i=0;i<=strlen(str);i++)
{
  if(*(str+i)!=' ')
  {
    *(str+j)=*(str+i);
    j++;
  }
}
printf("%s",str);
}