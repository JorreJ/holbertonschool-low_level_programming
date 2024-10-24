#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
int tw1, tw2;
for (tw1 = 0; tw1 < 99; tw1++)
{
for (tw2 = tw1 + 1; tw2 <= 99; tw2++)
{
putchar((tw1 / 10) + '0');
putchar((tw1 % 10) + '0');
putchar(' ');
putchar((tw2 / 10) + '0');
putchar((tw2 % 10) + '0');
if (tw1 != 98 || tw2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
