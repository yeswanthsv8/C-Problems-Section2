#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char str[20],sub[20];
int i=0,j,k,n1,n2,flag=0,b;
clrscr();

printf("Enter String:");
scanf("%s",str);

printf("Enter Sub String:");
scanf("%s",sub);

n1=strlen(str);
n2=strlen(sub);

for(i=0;i<n1;i++)
{
    j=0;
    if(str[i]==sub[j])
    {
       b=0;
       flag=0;
       for(k=i+1,j=0;j<n2-1;k++,j++)
       {
	 if(str[k]!=sub[j+1])
	 {
	    flag=1;
	 }
       }
       if(flag==0)
       {
	 printf("At:%d",i);
	 break;
       }
    }
    else
    {
      b=1;
    }
}
if(flag==1 || b==1)
{
  printf("Not Found.");
}

}