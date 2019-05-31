#include<stdio.h>
#include<conio.h>
void main()
{
int num,avg,sum=0;
printf("enter  the number of natural numbers");
scanf("%d",&num);
sum=(num*(num+1))/2;
printf("sum=%d\n",sum);
avg=sum/num;
printf("average=%d\n",avg);
getch();
}

