/*
 * NOTES:
 * -It's a bad practice to bury `magic numbers` like 300 and 20 (See program 1-3). Reduces readability.
 * - Use `#define` to define a `symbolic name` or `symbolic constant`.
 * - It will be replaced by its `replacement text` which can be any sequence of characters (not limited to numbers).
 * - They are written in capital letters.
 * - Defining them do
*/

#include <stdio.h>

#define LOWER 0   /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20   /* step size */

/* print Fahrenheit-Celsius table */
int main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
