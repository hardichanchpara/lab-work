#include<stdio.h>
#include<conio.h>

main()
{
  int i=1;
  int f=1;
  clrscr();

   while(i<=5)
   {
    f=f*i;
    i++;
   }
     printf("\n The Factorial :%d",f);

     getch();
}