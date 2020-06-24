/*
 * NOTES:
 * - `int ndigit[10]` declares an array of 10 integers.
 * - Here, again, we are using `character constants` e.g. '9' represented by an integer with their numerical value.
 * - Remember:`while ((c = getchar()) != EOF)` is a useful recipe for capturing user input.
 * - The `switch` statement (to be discussed later) is another way for multi-way branch. It's particularly useful
 *    when the condition is whether some integer or character expression matches one of a set of constants.
 */

#include <stdio.h>

/* count digits, white space, other */
int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;

    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);
}
