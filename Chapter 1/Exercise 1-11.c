#include <stdio.h>

/* How would you test the word count program? What kinds of input are most
   likely to uncover bugs if there are any?  */

   /* Idea of testcases:
      - one word in a line
      - line without words
      - words with seperator different than space (tab, pause, underscore)
      - more than one seperator between words
   */

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words, and characters in input */
main()
{
   int c, nl, nw, nc, state;
   state = OUT;
   nl = nw = nc = 0;
   while ((c = getchar()) != EOF)
   {
      ++nc;
      if (c == '\n')
         ++nl;
      if (c == ' ' || c == '\n' || c == '\t')
         state = OUT;
      else if (state == OUT)
      {
         state = IN;
         ++nw;
      }
   }
   printf("%d %d %d\n", nl, nw, nc);
}
