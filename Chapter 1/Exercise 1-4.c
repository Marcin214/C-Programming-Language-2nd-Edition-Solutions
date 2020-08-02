#include <stdio.h>

/* print Celsius-Fahrenheit table
 for fahr = -100, 80, ..., 100; floating-point version */

main()
{
   float fahr, celsius;
   float lower, upper, step;

   lower = -100;   /* lower limit of temperatuire scale */
   upper = 100; /* upper limit */
   step = 20;   /* step size */

   printf("Celsius-Fahrenheit\n");
   celsius = lower;
   while (celsius <= upper)
   {
      fahr = (9.0 / 5.0) * celsius + 32.0;
      printf("%3.0f %6.1f\n", celsius, fahr);
      celsius = celsius + step;
   }
}
