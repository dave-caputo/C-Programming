/*
 * NOTES:
 * - `++` and `--` can be either prefix or postfix operators. The two have different values in expressions (Chapter 2)
 * - The `conversion specification` `%1d%` tells `printf` that the argument is a `long` integer.
 */

#include <stdio.h>

/* count characters in input; 1st version */
int main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%1d\n", nc);
}
