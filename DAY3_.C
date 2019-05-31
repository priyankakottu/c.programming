#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int n,i,rev=0;
printf("enter the string");
scanf("%d",&n);
for(i=0;i<n;i++)
{
rev=rev*10+i;
printf("reverse of number is %d",rev);
}
}


