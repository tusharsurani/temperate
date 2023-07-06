#include<stdio.h>
#include<conio.h>
void main()
{

   int num,i,count=0;
   clrscr();
   printf("enter the number =");
   scanf("%d",&num);
   for(i=1 ; i<=num ;i++)
   {
     if(num%i == 0)
     {
       count++;
     }
   }
 /*  printf("number of factor =%d",count);
   getch();
}  */
   if(count == 2)
   {
     printf("\n %d is a prime number",num);
   }
   else
   {
     printf("\n %d is not a prime",num);
   }
   getch();
}
