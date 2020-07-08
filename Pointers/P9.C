#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char str[20];
int i;
clrscr();

printf("Enter String:");
scanf("%s",str);

i=0;
while(*(str+i)!='\0')
{
   if(*(str+i)>=97 && *(str+i)<=122)
   {
     *(str+i)=*(str+i)-32;
   }
   i++;
}

printf("%s",str);
}