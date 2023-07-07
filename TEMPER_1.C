#include<stdio.h>
#include<conio.h>
main ()
{
   char i;
   clrscr();
   i='A';
   do
   {
     printf("%c ",i);
     i++;
   }while(i<='Z');
   getch();
}

