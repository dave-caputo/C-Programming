/*
 * NOTES:
 * - The choice between a `while` and a `for` loop is arbitrary, based on which seems clearer.
 *    For looops are generally used when (a) the initialisation and (b) increment consist of a single
 *    statement and are logically related.
 * - 3 parts of the for-loop:
 *      1. Initialisation.
 *      2. Test or condition that controls the loop. If it's true the body of the loop is executed.
 *      3. The increment step.
*/

#include <stdio.h>

/* print a table that converts Farenheit to Celsius */
int main()
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
