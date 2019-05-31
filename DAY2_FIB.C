#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int n,i,first=0,second=1,next;
clrscr();
printf("enter the range ofn");
scanf("%d",&n);
for(i=0;i<n;++i)
{
printf("%d",first);
next=first+second;
first=second;
second=next;
}
getch();
}
