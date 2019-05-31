#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s1[40];
int i,c=0,c1=0,c2=0;
clrscr();
printf("enter the string");
gets(s1);
for(i=0;s1[i];i++)
{
if(s1[i]==' ')
c++;
else if(s1[i]=='\n')
c1++;
else if(s1[i]=='\t')
c2++;
}
printf("spaces=%d\nlines=%d\ntabs=%d",c,c1,c2);
getch();
}
