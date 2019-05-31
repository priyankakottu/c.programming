#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
int pi=22.7,r1,r2;
clrscr();
float perimeter,area;
printf("enter the values of r1,r2");
scanf("%d%d%",&r1,&r2);
perimeter=2*22.7*r1;
area=22.7*r1*r2;
printf("perimeter ofcircle=%f",perimeter);
printf("area of circle=%f",area);
getch();
}