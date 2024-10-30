#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */

void puts2(char *str)
{
int l;
for (l = 0; str[l] != '\0'; l++)
{
if ((l % 2) == 0)
{
_putchar(str[l]);
}
}
_putchar('\n');
}
