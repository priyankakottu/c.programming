#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("enter the values of a,b");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swaping a=%d b=%d",a,b);
getch();

}