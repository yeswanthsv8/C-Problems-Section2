#include<stdio.h>
#include<conio.h>

void main()
{
char str[20],sub[20];
int i,j,k,flag,n1,n2,count=0;
clrscr();

printf("Enter String:");
scanf("%s",str);
printf("Enter Sub-String:");
scanf("%s",sub);

n1=strlen(str);
n2=strlen(sub);

for(i=0;i<n1;i++)
{
  j=0;
  if(str[i]==sub[j])
  {
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
	 count++;
     }
  }

}
printf("The Occurrences Is: %d",count);
}
