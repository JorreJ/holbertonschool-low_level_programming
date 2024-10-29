#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
    int n = 0;
    int l;
    while (s[n] != '\0')
      {
	n++;
      }
    for (l = n; l >= 0; l--)
      {
	_putchar(s[l]);
      }
    _putchar('\n');
}
