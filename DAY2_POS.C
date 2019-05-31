#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],b[100],i,j,n,c=0;
printf("enter size of array");
 scanf("%d",&n);
 printf("enter elements in array:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 if(a[i]!=-1)
 {
 for(j=j+1;j<n;j++)
 {
 if(a[i]==a[j])
 {
 c++;
 a[j]=-1;
 }
 }
}
}
}

