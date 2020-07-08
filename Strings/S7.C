#include<stdio.h>
#include<conio.h>

void main()
{
char str[20];
char vw[5]={'a','e','i','o','u'};
int i=0,j=0,count=0;
clrscr();

printf("String:");
scanf("%s",str);

for(i=0;i<strlen(str);i++)
{
   for(j=0;j<strlen(vw);j++)
   {
       if(str[i]==vw[j])
       {
	  count++;
       }
   }
}
printf("The Occurrences Is: %d",count);
}
