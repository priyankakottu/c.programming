  #include<stdio.h>
  void main()
  {
  int a;
  short b;
  long c;
  unsigned int d;
  unsigned short e;
  unsigned long f;
  char g;
  unsigned char h;
  float i;
  double j;
  clrscr();
  printf("int,short,long,unsignedint,unsignedshort,unsignedlong\n");
  scanf("%d,%i,%ld,%u,%u,%lu",&a,&b,&c,&d,&e,&f);
  printf("int=%d\tshort=%i\tlong=%ld\nunsigned values\nint=%u\tshort=%u\tlong=%lu",a,b,c,d,e,f);
 fflush(stdin);
 printf("enter values of char,unsignedchar");
 scanf("%c,%c",&g,&h);
 printf("char=%c unsignedchar=%c",g,h);
 fflash(stdin);
 printf("enter values of float,double");
 scanf("%f,%lf",&i,&j);
 printf("float=%.2f double=%.3lf",i,j);
 getch();
 }

