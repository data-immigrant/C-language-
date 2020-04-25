/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int a, b, c;

  scanf ("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  printf("The three numbers are: %d %d %d\n", a,b,c);


  if((a < b+c) && (b < a+c) && (c < a+b)){
     printf("Traingle is formed: ");
   }
  else
     printf("Traingle is not formed: ");


  return 0;
}
