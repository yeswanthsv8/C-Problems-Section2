#include<stdio.h>
#include<conio.h>

void main()
{
char str[20],ch;
int i=0;
clrscr();

printf("String: & Character:");
scanf("%s %c",str,&ch);

while(str[i]!='\0')
{
  if(str[i]==ch)
  {
    printf("%d",i);
    break;
  }
  i++;
}

}
