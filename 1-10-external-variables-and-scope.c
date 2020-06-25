/*
 * NOTES:
 * - The keyword `extern` is used to access variables outside the function scope.
 * - The `extern` declaration can be omitted if the definition of an external variable occurs in the source file
 *    before its use in a particular function. Thus, the `extern` declarations in `main`, `gettline` and `copy` are
 *    redundant.
 * - The usual practice is to collect definitions of all external variables in a separate file (a `header`) e.g.
 *    a file with suffix `.h` such as is the case for `stdio.h`.
 * - Relying to heavily on external variables is fraught with peril since it leads to programs whose data connections
 *    are not at all obvious - variables can be changes in unexpected and event inadvertent ways, and the program is
 *    hard to modify.
 * - Up to this point we have covered the `conventional core` of C.
 */

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int max;               /* maximum input line size */
char line[MAXLINE];    /* current input line */
int gettline(void);
void copy(void);

/* print longest input line; specialised version */
int main()
{
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = gettline()) > 0)
        if (len > max)
        {
            max = len;
            copy();
        }
    if (max > 0) /* there was a line */
        printf("%s", longest);
    return 0;
}

/* gettline: specialised version */
int gettline(void)
{
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c =='\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* copy: specialised version */
void copy(void)
{
    int i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}
