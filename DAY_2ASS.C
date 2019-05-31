#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n,i,words=1;
char s[20];
clrscr();
printf("enter a sentence");
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]== ' '||s[i]=='\n'||s[i]=='\t')
{
words++;
}
}
printf("no of words=%d",words);
getch();
}

