/*
 * NOTES:
 * - A C program, whatever its size, will consist of functions and variables.
 * - A function contains statements that specify the computer operations to be done (enclosed in braces).
 * - "hello, world\n" is a `character string` or `string constant`. It uses double quotes.
 * -`printf` never supplies a new line automatically.
 * -`\n` is C notation for the newline character. Should be used explicitly in every `fprint` statement.
 * - A `escape sequence` like `\n` provides a mechanism for representing hard-to-type or invisible characters.
 * - The second statement, will not print the `\` because `\c` is not a escape sequence, i.e. will print "me againc".
 */

#include <stdio.h>

int main()
{
    printf("hello, world\n");
    printf("me again\c\n");
}
