#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
int l,b;
float perimeter,area;
clrscr();
printf("enter length,breadth values");
scanf("%d%d",&l,&b);
perimeter=2*(l+b);
area=l*b;
printf("perimeter of rectangle is %f",perimeter);
printf("area ofrectangle is %f",area);
getch();
}
