#include<stdio.h>
#include<conio.h>

void main()
{
char str[20],vw[]={'a','e','i','o','u','A','E','I','O','U'};
int i,j,k,b=0;
clrscr();

printf("Enter String:");
gets(str);

k=0;
for(i=0;i<strlen(str);i++)
{
   b=0;
   for(j=0;j<strlen(vw);j++)
   {
      if(str[i]==vw[j])
      {
	 b=1;
      }
   }
   if(b==0)
   {
     str[k]=str[i];
     k++;
   }
}
str[k]='\0';
printf("%s",str);
}