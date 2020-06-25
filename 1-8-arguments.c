/*
 * NOTES:
 * - All function arguments are passed "by value", i.e. temporary values rather than the originals.
 * - In C, the called function cannot directly alter a variable in the calling function.
 * - When necessary, it is possible for a function to modify a a variable in a calling routine: The caller must
 *    provide the address of the variable to be set (a `pointer` to the variable), and access the variable indirectly
 *    through it.
*/

#include <stdio.h>

int power(int, int);

/* test power function */
int main()
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3, i));
    return 0;
}

/* power: raise base to the n-th power; n>0; version 2 */
int power(int base, int n)
{
    int p;

    for (p = 1; n > 0; --n)
        p = p * base;
    return p;
}
