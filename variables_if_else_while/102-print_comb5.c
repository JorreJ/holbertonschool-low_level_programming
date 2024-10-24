#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
int d1, d2, u1, u2;
for (d1 = 0; d1 < 9; d1++)
{
for (u1 = 0; u1 <= 9; u1++)
{
for (d2 = 0; d2 <= 9; d2++)
{
for (u2 = 1; u2 <= 9; u2++)
{
putchar(d1 + '0');
putchar(u1 + '0');
putchar(' ');
putchar(d2 + '0');
putchar(u2 + '0');
if (d1 < 8 || u1 < 9 || u2 < 9 || d2 < 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
