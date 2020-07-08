#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char str[20];
char c;
int i;
clrscr();

printf("Enter String:");
gets(str);

printf("Enter Character Is:");
scanf("%c",&c);

i=0;
while(*(str+i)!='\0')
{
   if(*(str+i)==c)
   {
     printf("At:%d",i);
     break;
   }
   i++;
}

}