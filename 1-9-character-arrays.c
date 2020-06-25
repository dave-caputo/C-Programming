/*
 * NOTES:
 * - The `array of characters` is the most common array in C.
 * - Program outline:
 *      while (there's another line)
 *          if (it's longer than the previous longest)
 *              save it
 *              save its length
 *      print longest line
 *
 *  - The purpose of supplying the size of an array in a declaration is to set aside storage.
 *  - The return type of `copy` is `void`, which states explicitly that no value is returned.
 *  - `gettline` puts the character '\0' (the `null character`, whose value is zero) at the end of the array it's
 *     creating, to mark the end of the string of characters. This convention is also used by C e.g. "hello\n"
 *     is stored as:
 *                  h  e  l  l  o  \n  \0
 *     `printf` expects this specification.
 */

#include <stdio.h>

#define MAXLINE 1000

int gettline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
    int len;               /* current line length */
    int max;               /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;
    while ((len = gettline(line, MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    if (max > 0) /* there was a line */
        printf("%s", longest);
    return 0;
}

/* getline: read a line into s, return length */
int gettline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
