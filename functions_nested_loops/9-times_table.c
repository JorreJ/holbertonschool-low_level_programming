#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int m1, m2, p;
for (m1 = 0; m1 < 10; m1++)
{
for (m2 = 0; m2 < 10; m2++)
{
p = m1 * m2;
if (m2 == 0)
{
_putchar(p + '0');
}
if (p < 10 && m2 != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(p + '0');
}
else if (p >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}
}
_putchar('\n');
}
}
