#include<stdio.h>
#include<conio.h>

void main()
{
int i;
FILE *fp;
char ch[100];
clrscr();

fp=fopen("yes.txt","a");

printf("Enter The Contents:");
gets(ch);
i=0;
while(ch[i]!='\0')
{
  fputc(ch[i],fp);
  i++;
}
fclose(fp);
}