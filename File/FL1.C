#include<stdio.h>
#include<conio.h>

void main()
{
int i;
FILE *fp;
char ch;
clrscr();

fp=fopen("yes.txt","r");
while((ch=fgetc(fp))!=EOF)
{
   printf("%c",ch);
}
fclose(fp);
}