#include "main.h"

void print_alphabet_x10(void)
{
int n = 0;
char l = 'a';
while (n < 10)
{
for (l = 'a'; l < 'z'; l++)
{
_putchar(l);
}
n++;
_putchar('\n');
}
}
