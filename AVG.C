#include<stdio.h>
#include"conio.h"
#include<stdlib.h>
void main()
{
int n,m1,m2,m3,m4,m5,avg,total;
printf("enter no of subjects");
scanf("%d",&n);
printf("max marks:%d",n*100);
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
avg=total/n;
if(n>= 400&&n<= 500);
{
printf("print as o");
}
 if(n>=300&&n<=399)
{
printf("print as e");
}
else if(n>=200&&n<=299)
{
printf("print as a");
}
else if(n>=100&&n<=199)
{
printf("print as fail");
}
}





