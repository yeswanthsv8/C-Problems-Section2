#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char str1[20],str2[20];
int i=0,flag=0,n1,n2;
clrscr();

printf("String1: & String2:");
scanf("%s %s",str1,str2);

n1=strlen(str1);
n2=strlen(str2);

if(n1==n2)
{
   for(i=0;i<n1;i++)
   {
       if(str1[i]!=str2[i])
       {
	 flag=1;
       }
   }
   if(flag==0)
   {
      printf("Equal.");
   }
   else
   {
      printf("Not Equal.");
   }
}

else
{
  printf("Not Equal.");
}

}


