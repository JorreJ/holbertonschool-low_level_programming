#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
int n = 0;
int l;
while (str[n] != '\0')
{
n++;
}
if (n % 2 == 0)
{
for (l = 0; l < (n / 2); l++)
{
_putchar(str[l + (n / 2)]);
}
}
else
{
for (l = 0; l < ((n - 1) / 2); l++)
{
_putchar(str[l + ((n + 1) / 2)]);
}
}
_putchar('\n');
}
