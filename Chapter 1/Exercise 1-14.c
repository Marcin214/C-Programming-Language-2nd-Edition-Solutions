#include <stdio.h>

/* Write a program to print a histogram of the frequencies of different characters
in its input */

#define SIZE 10 /* max number of chars for specific char */
#define NCHAR ('Z' - 'A') /* number of characters */

main()
{
   int c, i, nchar, buffer[NCHAR];

   for (i = 0; i < NCHAR; ++i)
      buffer[i] = 0;

   while ((c = getchar()) != EOF)
   {
      if (c >= 'A' && c <= 'Z')
         buffer[c-'A'] = buffer[c-'A'] + 1;
      else if (c >= 'a' && c <= 'z')
         buffer[c-'a'] = buffer[c-'a'] + 1;
   }

   /*horizontal histogram*/
   for (nchar = 0; nchar <= NCHAR; nchar++)
   {
      printf("\n%c", 'A'+nchar);
      for (i = 0; i < buffer[nchar]; i++)
         printf(" #");
   }
   printf("\n");
   for (i = 0; i <= SIZE; i++)
      printf("%-2d", i);

   printf("\n\n");

   /*vertical histogram*/
   for (i = SIZE; i > 0; i--)
   {
      printf("\n%2d", i);
      for (nchar = 0; nchar <= NCHAR; nchar++)
      {
         if(buffer[nchar] >= i)
            printf(" #");
         else
            printf("  ");
      }
   }
   printf("\n 0");
   for (nchar = 0; nchar <= NCHAR; nchar++)
      printf(" %c", 'A'+nchar);
}
