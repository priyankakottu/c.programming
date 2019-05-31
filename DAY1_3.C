#include<stdio.h>
#include<conio.h>
void main()
{
int days,months,years,weeks;
clrscr();
printf("number of days");
scanf("%d",&days);
months=days/30;
printf("number of monthsis %d",months);
years=days/365;
printf("number of yearsis %d",years);
weeks=days/7;
printf("number of weeksis %d",weeks);
getch();
}