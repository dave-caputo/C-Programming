/*
 * NOTES:
 * - The type `double` (double precision float) copes with even bigger numbers than  a `long` integer.
 * - The body of the for loop is empty, because all the work is done on the initialisation and increment.
 * - The isolated semicolon is called a `null statement`. It's put on a separate line to make it visible.
 */

#include <stdio.h>

int main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}
