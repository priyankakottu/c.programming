#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[100],str2[100];
int ch;
clrscr();
printf("enter 1st string");
gets(str1);
printf("enter 2nd string");
gets(str2);
printf("enter ur choice:\n 1:cmp\t2.cpy\t3.cat\t4.len\t5.upr\t6.lwr\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
if(strcmp(str1,str2)==0)
 printf("enter  strings are equal");
 else
 printf("strings are not equal");
 break;
case 2:
strcpy(str1,str2);
puts(

str1);
break;
case 3:
strcat(str1,str2);
puts(str1);
break;
case 4:
strlen(str1);
puts(str1);
break;
case 5:
strupr(str1);
puts(str1);
break;
case 6:
strlwr(str1);
puts(str1);
break;
default:
 exit(0);
 }
 getch();
 }