#include<stdio.h>
#include<conio.h>
void main()
{
    int n,fd,ld,sum=0;
    clrscr();
    printf("enter number find sum of fd and ld =");
    scanf("%d",&n);
    ld=n % 10;
    while(n>=10)
    {
     n= n / 10;
    }
    fd=n;
    sum = fd +ld;
    printf("\nsum of fd an ld digit = %d",sum);

  getch();
}