/*
 * NOTES:
 * - A `text stream` is a sequence of characters divided into lines (zero or more followed by a newline character).
 * - `getchar` and `putchar` are functions that read and write one character at a time.
 * - `getchar` reads the `next input character` from a text stream and returns its value.
 * - Interestingly, we can't declare `c` to be type `char` because the type should be big enough to hold
 *    any character that `getchar` returns.
 * - `EOF` is the `End of file` character. EOF has a numeric value but it's convenient to use it's symbolic constant.
 * - When `getchar` is read, the program waits for the user to enter an input.
 * - Note here, that the while loop is followed by curly braces;
 * - To input EOF in the terminal: ctrl+D;
 */

#include <stdio.h>

/* copy input to output; 1st version */
int main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}
