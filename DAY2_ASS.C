#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int a[10];
int i,j,b;
for(i=0;i<10;i++)
{
printf("enter the numbers is %d",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
for(j=1;j<10;j++)
{
if(a[1]<a[j])
{
b=a[j];
a[j]=a[i];
a[i]=b;
}
}
}
printf("2nd largest no is:%d",a[1]);
getch();
}