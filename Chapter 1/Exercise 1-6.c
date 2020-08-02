#include <stdio.h>

/* Verify that the expression getchar() != EOF is 0 or 1 */

main()
{
   printf("Resul = %d\n", getchar() != EOF);
}

/* on Windows the EOF in console is CTRL+Z than getchar() != EOF is 0
   in different cases, this expressions is equal 1 */