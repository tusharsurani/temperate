#include<stdio.h>
#include<conio.h>
void main()
{
   int a=0,b=1,n,t,i;
   clrscr();
   printf("enter the value =");
   scanf("%d",&n);
   printf("%d , %d ,",a,b);
   for(i=2;i<=n;i++)
   {
     t=a+b;
     a=b;
     b=t;
     printf("%d ,",t);
  }
  getch();
}