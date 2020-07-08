#include<stdio.h>
#include<conio.h>

void main()
{
char str[20];
int i=0;
clrscr();

printf("String:");
scanf("%s",str);

while(str[i]!='\0')
{
  printf("%c ",str[i]);
  i++;
}

}
