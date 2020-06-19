/*
 * NOTES:
 * - In C, if you write by mistake `=` instead of `==`, the compiler won't warn you as `=` is usually legal.
 * - A character written between single quotes represents an integer value equal to the numerical value
 *    of the character in the machine's character set. This is called a `character constant`.
 *    (the value of `\n` is 10 in ASCII)
 */

#include <stdio.h>

/* count lines in input */
int main()
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}
