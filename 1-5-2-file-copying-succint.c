/*
 * NOTES:
 * - This program is better because now it only has a single reference to `getchar`, hence, it's smaller.
 * - The parenthesis around `c = getchar()` are necessary, because != has a higher `precedence` than =.
 *    Therefore, in the absence of parenthesis, the relational test != would be done before the assignment.
 * - Here, the while loop is NOT followed by curly braces. This is because there is only one statement after it,
 *    so they are not required. However, it's important to add curly braces if there are more than one statement.
 *    Otherwise, the file will compile correctly but will NOT run any statement after the first one.
 * - I assume the same as above applies to `for` loops.
 * - Exercise 1-6: Compare value of EOF and `getchar`: printf("EOF != getchar() is %d", getchar() != EOF) Ans: 1;
 * - Exercise 1-7: Print value of EOF: `printf("EOF = %d\n", EOF)` Ans: EOF = -1)
 */

#include <stdio.h>

/* copy input to output; 2nd version */
int main()
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
}
