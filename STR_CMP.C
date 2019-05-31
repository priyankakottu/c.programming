#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
int i,j,length=0,temp;
clrscr();
printf("enter string1");
gets(s1);
printf("enter string2");
gets(s2);
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]==s2[i])
temp=1;
else
temp=0;
}
if(temp==1)
printf("both strings are same");
else
printf("not same");

getch();
}


