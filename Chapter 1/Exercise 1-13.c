#include <stdio.h>

/* Write a program that prints its input one word per line */

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
#define HIST_SIZE 10 /* max number of words in histogram */

main()
{
   int c, state, x, y, nword, nchar[HIST_SIZE], line[HIST_SIZE];
   state = OUT;

   for (nword = 0; nword < HIST_SIZE; ++nword)
      nchar[nword] = 0;

   nword = 0;
   while ((c = getchar()) != EOF)
   {
      if (c != ' ' && c != '\n' && c != '\t')
      {
         state = IN;
         ++nchar[nword];
      }
      else if (state == IN)
      {
         state = OUT;
         ++nword;
      }
   }

   /* horizontal histogram */
   nword = 0;
   for (nword = 0; nword < HIST_SIZE; ++nword)
   {
      for (x = 0; x < nchar[nword]; ++x)
         putchar('#');
      putchar('\n');
   }

   /* vertical histogram */
   nword = x = y = 0;
   for (y = 10; y >= 0; --y)
   {
      for (nword = 0; nword < HIST_SIZE; ++nword)
      {
         if(nchar[nword] <= y)
            putchar('#');
         else
            putchar(' ');
      }
      putchar('\n');
   }
}
