#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
int l;
for (l = 0; l < n; l++)
{
if (n > 0)
{
_putchar('_');
}
}
_putchar('\n');
}
