#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int a[10],n,i;
clrscr();
printf("enter array size");
scanf("%d",&n);
printf("enter the values");
scanf("%d",&a);
for(i=0;i<=n;i++)
{
printf(" %d ",a);
getch();
}
}
