/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int a;
  int sum = 0;
  int count = 0;
  printf ("Give a number: ");
  scanf ("%d", &a);

  while (a != 0)
    {
      printf ("The number is %d\n", a);
      sum = sum + a;
      count++;
      printf ("Give Number..");
      scanf ("%d", &a);
    }
  printf ("\nThe sum is: %d", sum);
  printf ("\nThe average is: %f", sum / count);

}
