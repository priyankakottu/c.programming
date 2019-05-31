#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s1[100],s2[100];
int i,j,length=0,temp;
printf(" enter 1st string");
gets(s1);
printf("enter 2nd string");
gets(s2);
for(i=0;s1[i]!='\0';i++)
{
length++;
temp=length;
for(i=0;s2[i]!='\0';i++)
{
s1[temp]=s2[i];
temp++;
}
s1[temp]='\0';
printf("the concade of stringis:\n",s1);
}
}

