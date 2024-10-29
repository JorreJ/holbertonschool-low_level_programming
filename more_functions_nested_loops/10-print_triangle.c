#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
int l;
int b;
int s;
if (size > 0)
{
for (l = 0; l < size; l++)
{
for (b = size - (l + 1); b > 0; b--)
{
_putchar(' ');
}
for (s = 0; s <= l; s++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
