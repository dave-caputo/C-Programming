/*
 * NOTES:
 * - A `declaration` announces the properties of the variables. Consists of the `type` and a `list of variables`.
 * - The range of both `int` and `float` depends on the machine.
 * - 16-bit `int`s will range between -32768 and +32767.
 * - A `float` number is typically a 32-bit quantity, with at least 6 `significant digits` and a `magnitude`
 *   between 10^-38 and +10^+38.
 * - Other C basic data types:
 *      - `char`    character - a single byte
 *      - `short`   short integer
 *      - `long`    long integer
 *      - `double`  double-precision floating point
 *      - Arrays, structures, unions, pointers, functions will be covered later.
 *  - We do `5 * (fahr-32) / 9` instead of `(5 / 9) * (fahr-32)` because integer division `truncates` i.e. `5 / 9 = 0`.
 *  - Issues with this program:
 *      1. Numbers are not right justified.
 *      2. Celsius temperatures are not very accurate because we don't show decimals.
 */


# include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ... , 300 */
int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;          /* lower limit of temperature table */
    upper = 300;        /* upper limit */
    step = 20;          /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
