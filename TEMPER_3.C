#include<stdio.h>
#include<conio.h>
main()
{
  int n,count=0;
  clrscr();
  printf("enter an intiger=");
  scanf("%d",&n);
  while(n>0)
  {
    n=n/10;
    count++;

  }
  printf("no of digits =%d",count);
  getch();

}