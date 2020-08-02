#include <stdio.h>

/* Write a program to copy its input to its output, replacing each string of one or
   more blanks by a single blank */

main()
{
   int c, previous;
   previous = 0;

   while ((c = getchar()) != EOF)
   {
      if (previous != ' ' || c != ' ')
         putchar(c);

      previous = c;
   }
}
