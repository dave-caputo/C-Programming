/*
 * NOTES:
 * - This program improves the indentation of the output. Note that e.g. `%6.1f` means that values:
 *      a) are displayed as floating points (see `f`)
 *      a) are right-aligned.
 *      b) are`at least` 6 characters wide (this includes the decimal point and digits following it).
 *      c) show 1 digit after the decimal point.
 *
 * - This program also improves the way celsius are calculated because the formula is expressed in a more natural way:
 *    `(5.0/9.0) * (fahr-32)` instead of `5 * (fahr-32) / 9`.
 *    This is due to the fact that these values are now floating points.
 * - It's not necessary to change `32` to `32.0` but it improves readability for users.
 * - Note that the assignment `fahr = lower;` automatically changes value from `int` to `float`.
 */

#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ... , 300 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;          /* lower limit of temperature table */
    upper = 300;        /* upper limit */
    step = 10;          /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
