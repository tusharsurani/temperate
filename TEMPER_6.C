#include<stdio.h>
#include<conio.h>
void main()
{
   int a,n,f=1;
   clrscr();
   printf("enter the value =");
   scanf("%d",&n);
   for(a=1 ; a<=n ; a++)
   {
      f=f*a;
   }
   printf("the fectorial of %d is %d",n,f);
   getch();
}