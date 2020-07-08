#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char str[20],str1[20],ch;
int n,i=0,j,flag=0;
clrscr();

printf("String:");
gets(str);

n=strlen(str);
j=n-1;

while(i<=n)
{
  str1[i]=str[i];
  i++;
}

i=0;
while(i<j)
{
ch=str[i];
str[i]=str[j];
str[j]=ch;
i++;
j--;
}

for(i=0;i<n;i++)
{
   if(str1[i]!=str[i])
   {
       flag=1;
   }
}

if(flag==0)
{
  printf("Palindrome.");
}
else
{
  printf("Not Palindrome.");
}

}
