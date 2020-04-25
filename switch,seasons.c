/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int m;
  printf("Give a number: ");
  scanf("%d", &m);

  switch (m){
      case 1 :   printf("January");break;
      case 2 :   printf("February");break;
      case 3 :   printf("March");break;
      case 4 :   printf("Aril");break;
      case 5 :   printf("May");break;
      case 6 :   printf("June");break;
      case 7 :   printf("July");break;
      case 8 :   printf("August");break;
      case 9 :   printf("September");break;
      case 10:   printf("October");break;
      case 11:   printf("November");break;
      case 12:   printf("December");break;

  }


  return 0;
}
