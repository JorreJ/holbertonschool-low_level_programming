#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
int c, d, u;
int v1 = 1;
int v2 = 2;
for (c = 0; c <= 7; c++)
{
for (d = v1; d <= 9; d++)
{
for (u = v2; u <= 9; u++)
{
putchar(c + '0');
putchar(d + '0');
putchar(u + '0');
if (c < 7)
{
putchar(',');
putchar(' ');
}
}
v2++;
}
v1++;
v2 = v1 + 1;
}
putchar('\n');
return (0);
}
