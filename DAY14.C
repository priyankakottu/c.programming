#include<stdio.h>
#include<conio.h>
void main()
{
int num,rem,sum=0;
scanf("enter the integer");
while(num>0);
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
printf("sum of digits in integer is:",sum);
getch();
}
