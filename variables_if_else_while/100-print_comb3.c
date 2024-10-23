#include <stdio.h>

int main(void)
{
int d;
int u;
int v = 1;
for (d = 0; d < 9; d++)
{
for (u = v; u <= 9; u++)
{
putchar(d + '0');
putchar(u + '0');
if (d < 8)
{
putchar(',');
putchar(' ');
}
}
v++;
}
putchar('\n');
return (0);
}
