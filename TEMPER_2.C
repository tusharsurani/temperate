#include<stdio.h>
#include<conio.h>
void main()
{
   int a,n,x;
   clrscr();
   printf("enter an integer :");
   scanf("%d",&n);
   printf("how many times :");
   scanf("%d",&x);
   for(a=1 ; a<=x ; a++)
   {
     printf("%d * %d = %d\n",n,a,n*a);
   }
   getch();
}