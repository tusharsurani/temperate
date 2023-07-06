#include<stdio.h>
#include<conio.h>
void main()
{
   int n,c,r=0,s;
   clrscr();
   printf("enter the number =");
   scanf("%d",&n);
   c=n;
   while(c>0)
   {
      s = c % 10;
      r = (r*10) + s;
      c = c / 10;
   }
   if(n==r)
   {
      printf("%d is palindrom number",n);
   }
   else
   {
     printf("%d is not palindrom",n);
   }
  getch();
}