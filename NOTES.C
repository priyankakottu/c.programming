#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int amt,note100,note50,note10,note5,note2,note1;
clrscr();
printf("enter total amt")
scanf("%d",&amt);
note100=(int)amt/100;
printf("no of 100 notes=%d",note100);
note50=(int)amt/50;
printf("no of 50 notes=%d",note50);
note20=(int)amt/20;
printf("no of 20 notes=%d",note20);
note10=(int)amt/10;
printf("no is 10 notes=%d",note10);
note=(int)amt/5;
printf("no is 5 notes=%d",note10);
note=(int)amt/2;
printf("no is 2 notes=%d",note2);
note=(int)amt/1;
printf("no is 1 notes=%d",note1);
getch();
}
printf("no is fourty notes=%d",note20
