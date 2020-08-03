#include <stdio.h>

/* Write a program that prints its input one word per line */

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
#define MAX_WORDS 10 /* max number of words in histogram */
#define MAX_CHARS 10 /* max number of chars in words */

main()
{
   int c, state, i, nword, nchar[MAX_WORDS];
   state = OUT;

   for (nword = 0; nword < MAX_WORDS; ++nword)
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

   /*horizontal histogram*/
   for (nword = 0; nword < MAX_WORDS; ++nword)
   {
      for (i = 0; i < nchar[nword]; ++i)
         printf(" #");
      putchar('\n');
   }
   for (i = 1; i < MAX_CHARS; ++i)
      printf("%2d", i);

   printf("\n\n");

   /*vertical histogram*/
   for (i = MAX_CHARS; i > 0; i--)
   {
      printf("\n%2d", i);
      for (nword = 0; nword < MAX_WORDS; ++nword)
      {
         if(nchar[nword] >= i)
            printf(" #");
         else
            printf("  ");
      }
   }
}
