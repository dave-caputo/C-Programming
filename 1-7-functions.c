/*
 * NOTES:
 * - A function is equivalent to a `subroutine` or `function` in Fortran, or a `procedure` in Pascal.
 * - Convenient way to encapsulate some computation.
 * - Properly designed functions allow code users stop worrying about `how` something is being done,
 *    yet know `what` is being done.
 *  - C has no exponentiation operator like ** of Fortran.
 *  - A function definition has this form:
 *
 *     return-type function-name(parameter declarations, if any)
 *     {
 *         declarations
 *         statements
 *     }
 *
 *  - Hereafter, we will include `return 0` in our main functions (omitted so far for convenience) as a reminder
 *     that programs should return their status to their environment.
 *
 *  - The first declaration `int power(int m, int n);` is called a `function prototype`. It has to agree with
 *     the definition and uses of power. The names are optional and do not have to agree to the function definition
 *     i.e. the prototype could have been written `int power(int, int)`
 */


#include <stdio.h>

int power(int m, int n);

/* test power function */
int main()
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3, i));
    return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}
